// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPPLUGINSTORAGE_H
#define CHIPPLUGINSTORAGE_H

@class HMFObject, NSString, NSOperationQueue, NSMutableDictionary;
@protocol HMFLogging, CHIPPersistentStorageDelegate, CHIPPluginStorageDataSource, CHIPPluginStorageDelegate;



@interface CHIPPluginStorage : HMFObject <HMFLogging, CHIPPersistentStorageDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (weak) NSObject<CHIPPluginStorageDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<CHIPPluginStorageDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSOperationQueue *keyValueStoreUpdateQueue; // ivar: _keyValueStoreUpdateQueue
@property (readonly) Class superclass;
@property (readonly) NSMutableDictionary *temporaryStorage; // ivar: _temporaryStorage


+(id)logCategory;
+(id)shortDescription;
+(void)deleteCHIPPluginDataForNodeID:(id)arg0 withStorage:(id)arg1 ;
-(BOOL)_checkVersion:(id)arg0 ;
-(BOOL)_syncSetDataSourceValue:(id)arg0 forKey:(id)arg1 ;
-(id)CHIPGetKeyValue:(id)arg0 ;
-(id)_getCHIPFrameworkVersion;
-(id)_preferencesValueForKey:(id)arg0 ;
-(id)_tempValueForKey:(id)arg0 ;
-(id)init;
-(id)logIdentifier;
-(void)CHIPDeleteKeyValue:(id)arg0 ;
-(void)CHIPSetKeyValue:(id)arg0 value:(id)arg1 ;
-(void)_moveTempStorageIntoDataSource;
-(void)_removeAllDataSourceDataWithCompletion:(id)arg0 ;
-(void)_removeTempValueForKey:(id)arg0 ;
-(void)_setPreferencesValueForKey:(id)arg0 value:(id)arg1 ;
-(void)_setTempValueForKey:(id)arg0 value:(id)arg1 ;
-(void)handleUpdatedDataWithIsLocalChange:(BOOL)arg0 ;


@end


#endif