// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXAPPLAUNCHHISTOGRAMMANAGER_H
#define _ATXAPPLAUNCHHISTOGRAMMANAGER_H

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_ATXDataStore.h"

@interface _ATXAppLaunchHistogramManager : NSObject {
    _ATXDataStore *_datastore;
    NSObject<OS_dispatch_queue> *_backgroundSaverQueue;
    NSDictionary *_parameters;
    NSMutableDictionary *_histograms;
    NSMutableDictionary *_categoricalHistograms;
    NSInteger _SSIDPruningMethod;
    int _maxSSIDCount;
    NSInteger _actionConfirmsRejectsPruningMethod;
    int _maxActionConfirmsRejectsActionCount;
    int _maxAppSpecificLocationMaxKeyCount;
    int _maxAppCoarseLocationMaxKeyCount;
    int _maxAppZoom7GeoHashMaxKeyCount;
    NSInteger _appJointContextPruningMethod;
    int _maxAppJointContextKeyCount;
}


@property (readonly, nonatomic) BOOL persistentStore; // ivar: _persistentStore


+(BOOL)isHistogramDeprecated:(NSInteger)arg0 ;
+(id)sharedInstance;
+(void)releaseTemporarySharedInstance;
+(void)resetDataForCategoricalHistograms;
+(void)resetSharedInstance;
+(void)useTemporarySharedInstance:(id)arg0 ;
-(NSUInteger)getHistogramPruningMethodFromAsset:(id)arg0 ;
-(id)categoricalHistogramForLaunchType:(NSInteger)arg0 ;
-(id)histogramForLaunchType:(NSInteger)arg0 ;
-(id)init;
-(id)initAndPersist:(BOOL)arg0 ;
-(id)initWithInMemoryStore;
-(id)initWithPersistentStore;
-(int)getHistogramMaxCategoryCountFromAsset:(id)arg0 ;
-(void)enumerateInMemoryCategoricalHistogramsWithBlock:(id)arg0 ;
-(void)enumerateInMemoryHistogramsWithBlock:(id)arg0 ;
-(void)exchangeDatastore:(id)arg0 ;
-(void)purgeHistogramForLaunchType:(NSInteger)arg0 ;


@end


#endif