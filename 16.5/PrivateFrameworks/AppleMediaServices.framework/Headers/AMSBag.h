// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSBAG_H
#define AMSBAG_H

@class NSString, NSDate;
@protocol AMSBagProtocol, AMSBagDataSourceProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSBagUnderlyingDataPersistence.h"
#import "AMSProcessInfo.h"
#import "AMSBagCachedValueUpdateHandlers.h"

@interface AMSBag : NSObject <AMSBagProtocol>



@property (retain, nonatomic) NSObject<AMSBagDataSourceProtocol> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *descriptionExtended;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AMSBagUnderlyingDataPersistence *persistence; // ivar: _persistence
@property BOOL persistenceAPIWasCalled; // ivar: _persistenceAPIWasCalled
@property (readonly, nonatomic) BOOL persistenceIsEnabled;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *persistenceQueue; // ivar: _persistenceQueue
@property (copy, nonatomic) AMSProcessInfo *processInfo; // ivar: _processInfo
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly) Class superclass;
@property (nonatomic) optional<AMSCore::Bag> underlyingBag; // ivar: _underlyingBag
@property (readonly, nonatomic) AMSBagCachedValueUpdateHandlers *updateHandlers; // ivar: _updateHandlers


+(NSUInteger)uninitializedToken;
+(id)_bagForProfile:(id)arg0 profileVersion:(id)arg1 processInfo:(id)arg2 accountProvider:(id)arg3 ;
+(id)bagCache;
+(id)bagForProfile:(id)arg0 profileVersion:(id)arg1 ;
+(id)bagForProfile:(id)arg0 profileVersion:(id)arg1 processInfo:(id)arg2 ;
+(id)bagForProfile:(id)arg0 profileVersion:(id)arg1 processInfo:(id)arg2 account:(id)arg3 ;
+(id)sharedPersistenceQueue;
+(id)sharedPersistenceWithDefaultDirectory;
+(void)_resetBagCache;
-(BOOL)isLoaded;
-(id)URLForKey:(id)arg0 ;
-(id)URLForKey:(id)arg0 account:(id)arg1 ;
-(id)_changedKeysComparingOriginalDictionary:(id)arg0 toNewDictionary:(id)arg1 ;
-(id)_initWithDataSource:(id)arg0 persistence:(id)arg1 persistenceQueue:(id)arg2 updateHandlers:(id)arg3 shouldConfigureDataSourceHandlers:(BOOL)arg4 ;
-(id)_temporaryDictionary;
-(id)arrayForKey:(id)arg0 ;
-(id)boolForKey:(id)arg0 ;
-(id)cachedValuesForKeys:(id)arg0 observationToken:(*NSUInteger)arg1 updateHandler:(id)arg2 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)doubleForKey:(id)arg0 ;
-(id)initWithBag:(struct Bag )arg0 processInfo:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 persistenceDirectoryURL:(id)arg1 persistenceQueue:(id)arg2 changeHandlerQueue:(id)arg3 shouldConfigureDataSourceHandlers:(BOOL)arg4 ;
-(id)initWithDataSource:(id)arg0 shouldConfigureDataSourceHandlers:(BOOL)arg1 ;
-(id)integerForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(void)_configureDataSourceHandlers;
-(void)_loadAndPersistBag;
-(void)_persistBagDictionary:(id)arg0 withIdentifier:(id)arg1 partialIdentifier:(id)arg2 expirationDate:(id)arg3 onlyIfPreExisting:(BOOL)arg4 ;
-(void)createSnapshotWithCompletion:(id)arg0 ;
-(void)removeObserverWithToken:(NSUInteger)arg0 ;
-(void)setDefaultValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif