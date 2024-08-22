// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RLMREALM_H
#define RLMREALM_H

@class NSHashTable;

#import <Foundation/Foundation.h>

#import "RLMRealmConfiguration.h"
#import "RLMSchema.h"

@interface RLMRealm : NSObject {
    ? _realm;
    RLMSchemaInfo _info;
    unique_ptr<RLMResultsSetInfo, std::default_delete<RLMResultsSetInfo>> _resultsSetInfo;
    NSHashTable *_collectionEnumerators;
    BOOL _sendingNotifications;
}


@property (nonatomic) BOOL autorefresh;
@property (readonly, nonatomic) RLMRealmConfiguration *configuration;
@property (readonly, nonatomic) BOOL dynamic; // ivar: _dynamic
@property (readonly, nonatomic) *void group;
@property (readonly, nonatomic) BOOL inWriteTransaction;
@property (readonly, nonatomic) BOOL isEmpty;
@property (retain, nonatomic) NSHashTable *notificationHandlers; // ivar: _notificationHandlers
@property (retain, nonatomic) RLMSchema *schema; // ivar: _schema


+(?)realmWithSharedRealmschema;
+(BOOL)isCoreDebug;
+(BOOL)performMigrationForConfiguration:(id)arg0 error:(*id)arg1 ;
+(NSUInteger)schemaVersionAtURL:(id)arg0 encryptionKey:(id)arg1 error:(*id)arg2 ;
+(id)asyncOpenWithConfiguration:(id)arg0 callbackQueue:(id)arg1 callback:(id)arg2 ;
+(id)defaultRealm;
+(id)realmWithConfiguration:(id)arg0 error:(*id)arg1 ;
+(id)realmWithURL:(id)arg0 ;
+(id)uncachedSchemalessRealmWithConfiguration:(id)arg0 error:(*id)arg1 ;
+(void)resetRealmState;
-(BOOL)commitWriteTransaction:(*id)arg0 ;
-(BOOL)commitWriteTransactionWithoutNotifying:(id)arg0 error:(*id)arg1 ;
-(BOOL)compact;
-(BOOL)refresh;
// -(BOOL)transactionWithBlock:(id)arg0 error:(unk)arg1  ;
-(BOOL)writeCopyToURL:(id)arg0 encryptionKey:(id)arg1 error:(*id)arg2 ;
-(id)addNotificationBlock:(id)arg0 ;
-(id)allObjects:(id)arg0 ;
-(id)createObject:(id)arg0 withValue:(id)arg1 ;
-(id)initPrivate;
-(id)objectWithClassName:(id)arg0 forPrimaryKey:(id)arg1 ;
-(id)objects:(id)arg0 where:(id)arg1 ;
-(id)objects:(id)arg0 where:(id)arg1 args:(char *)arg2 ;
-(id)objects:(id)arg0 withPredicate:(id)arg1 ;
-(id)resolveThreadSafeReference:(id)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)addObjects:(id)arg0 ;
-(void)addOrUpdateObject:(id)arg0 ;
-(void)addOrUpdateObjects:(id)arg0 ;
-(void)cancelWriteTransaction;
-(void)commitWriteTransaction;
-(void)dealloc;
-(void)deleteAllObjects;
-(void)deleteObject:(id)arg0 ;
-(void)deleteObjects:(id)arg0 ;
-(void)detachAllEnumerators;
-(void)invalidate;
-(void)registerEnumerator:(id)arg0 ;
-(void)sendNotifications:(id)arg0 ;
-(void)transactionWithBlock:(id)arg0 ;
-(void)unregisterEnumerator:(id)arg0 ;
-(void)verifyNotificationsAreSupported:(BOOL)arg0 ;
-(void)verifyThread;


@end


#endif