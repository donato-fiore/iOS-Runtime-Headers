// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSUBIQUITOUSKEYVALUESTORE_H
#define NSUBIQUITOUSKEYVALUESTORE_H

@class SYDRemotePreferencesSource, NSTimer, NSMutableDictionary, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NSUbiquitousKeyValueStore : NSObject {
    SYDRemotePreferencesSource *_source;
    NSTimer *_timer;
    NSMutableDictionary *_values;
    NSObject<OS_dispatch_queue> *_queue;
    int _daemonWakeToken;
}


@property (readonly, copy) NSDictionary *dictionaryRepresentation;


+(id)additionalStoreWithIdentifier:(id)arg0 ;
+(id)defaultStore;
+(void)_appWillActivate;
+(void)_appWillDeactivate;
+(void)_synchronizeStoresForced:(BOOL)arg0 ;
-(BOOL)_hasPendingSynchronize;
-(BOOL)_postDidChangeNotificationExternalChanges:(id)arg0 sourceChangeCount:(NSInteger)arg1 ;
-(BOOL)_shouldAvoidSynchronize;
-(BOOL)_synchronizeForced:(BOOL)arg0 ;
-(BOOL)_synchronizeForced:(BOOL)arg0 notificationQueue:(id)arg1 ;
-(BOOL)boolForKey:(id)arg0 ;
-(BOOL)synchronize;
-(BOOL)synchronizeWithSourceForced:(BOOL)arg0 ;
-(CGFloat)doubleForKey:(id)arg0 ;
-(NSInteger)longLongForKey:(id)arg0 ;
-(NSUInteger)maximumDataLengthPerKey;
-(NSUInteger)maximumKeyCount;
-(NSUInteger)maximumKeyLength;
-(NSUInteger)maximumTotalDataLength;
-(id)_initWithStoreIdentifier:(id)arg0 usingEndToEndEncryption:(BOOL)arg1 ;
-(id)_remotePreferencesSource;
-(id)arrayForKey:(id)arg0 ;
-(id)dataForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 storeIdentifier:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 storeIdentifier:(id)arg1 additionalStore:(BOOL)arg2 ;
-(id)initWithBundleIdentifier:(id)arg0 storeIdentifier:(id)arg1 additionalStore:(BOOL)arg2 storeType:(NSInteger)arg3 ;
-(id)initWithStoreIdentifier:(id)arg0 type:(NSInteger)arg1 ;
-(id)objectForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(int)_storeChangeFromSourceChange:(int)arg0 ;
-(void)_adjustTimer:(id)arg0 ;
-(void)_adjustTimerForAutosync;
-(void)_configurationDidChange;
-(void)_pleaseSynchronize:(id)arg0 ;
-(void)_registerToDaemon;
-(void)_rethrowException:(id)arg0 ;
-(void)_scheduleRemoteSynchronization;
-(void)_sendPingToDaemon;
-(void)_setHasPendingSynchronize:(BOOL)arg0 ;
-(void)_setShouldAvoidSynchronize:(BOOL)arg0 ;
-(void)_sourceDidChange:(id)arg0 ;
-(void)_sourceDidChangePassthroughNotification:(id)arg0 ;
-(void)_syncConcurrently;
-(void)_syncConcurrentlyForced:(BOOL)arg0 ;
-(void)_unregisterFromDaemon;
-(void)_useSourceAsyncWithBlock:(id)arg0 ;
-(void)_useSourceSyncWithBlock:(id)arg0 ;
-(void)dealloc;
-(void)registerDefaultValues:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setArray:(id)arg0 forKey:(id)arg1 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setData:(id)arg0 forKey:(id)arg1 ;
-(void)setDictionary:(id)arg0 forKey:(id)arg1 ;
-(void)setDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)setLongLong:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setString:(id)arg0 forKey:(id)arg1 ;
-(void)synchronizeWithCompletionHandler:(id)arg0 ;


@end


#endif