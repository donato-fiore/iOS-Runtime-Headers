// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSOURCELISTDATASOURCE_H
#define HKSOURCELISTDATASOURCE_H

@class NSMutableArray, NSArray, HKSynchronousObserverSet, HKHealthStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HKSourceListDataModel.h"

@interface HKSourceListDataSource : NSObject {
    NSObject<OS_dispatch_queue> *_mainQueue;
    NSObject<OS_dispatch_queue> *_resultsQueue;
    NSMutableArray *_transformers;
    NSMutableArray *_followupTransformers;
    NSArray *_rawSources;
    HKSynchronousObserverSet *_observers;
    int _notifyToken;
    BOOL _hasInitiatedFetch;
    uint8_t _invalidated;
}


@property (nonatomic) BOOL deliverUpdates; // ivar: _deliverUpdates
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (nonatomic) BOOL shouldFetchAppIcons; // ivar: _shouldFetchAppIcons
@property (nonatomic) BOOL shouldFetchAppInstallationStatus; // ivar: _shouldFetchAppInstallationStatus
@property (nonatomic) BOOL shouldFetchPurposeStrings; // ivar: _shouldFetchPurposeStrings
@property (nonatomic) BOOL shouldIncludeSpecialSources; // ivar: _shouldIncludeSpecialSources
@property (readonly, nonatomic) HKSourceListDataModel *sources; // ivar: _sources


+(id)_builtinIconFetchTransformer:(SEL)arg0 ;
+(id)_builtinInstallationStatusTransformer:(SEL)arg0 ;
+(id)_builtinPurposeStringsFetchTransformer:(SEL)arg0 ;
+(void)_performTransformations:(id)arg0 model:(id)arg1 completion:(id)arg2 ;
+(void)_remoteWatchAppPurposeStringsForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
+(void)fetchIconForSource:(id)arg0 completion:(id)arg1 ;
-(id)_specialAppBundleIdentifiers;
-(id)initWithHealthStore:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 queue:(id)arg1 ;
-(id)initWithHealthStore:(id)arg0 sources:(id)arg1 queue:(id)arg2 ;
-(void)_didFetchSources:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)_fakeSourceForInstalledAppWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_notifyObserversForDataSourceUpdate;
-(void)_prependBuiltinTransformers;
-(void)_throttledNotificationOfDataSourceUpdate;
-(void)addFetchTransformer:(id)arg0 ;
-(void)dealloc;
-(void)fetchModelForSources:(id)arg0 completion:(id)arg1 ;
-(void)fetchSources;
-(void)invalidate;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif