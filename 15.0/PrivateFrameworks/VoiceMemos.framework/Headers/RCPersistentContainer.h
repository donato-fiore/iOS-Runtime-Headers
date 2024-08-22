// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCPERSISTENTCONTAINER_H
#define RCPERSISTENTCONTAINER_H

@class NSPersistentContainer, NSArray, NSString, NSSet, NSPersistentHistoryToken, NSMutableArray, NSDate, NSPersistentStore, NSCloudKitMirroringDelegate, NSCloudKitMirroringDelegateOptions;


#import "RCDatabaseMetadata.h"

@interface RCPersistentContainer : NSPersistentContainer {
    NSArray *_cloudStores;
    NSString *_cloudStoreIdentifier;
    NSString *_transactionAuthor;
    NSSet *_relevantProperties;
    NSPersistentHistoryToken *_currentHistoryToken;
    NSPersistentHistoryToken *_latestHistoryToken;
    NSMutableArray *_transactionsBuffer;
    NSArray *_contextsToNotify;
    NSDate *_changeNotificationDate;
}


@property (readonly, nonatomic) NSPersistentStore *cloudStore; // ivar: _cloudStore
@property (readonly, nonatomic) RCDatabaseMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSCloudKitMirroringDelegate *mirroringDelegate; // ivar: _mirroringDelegate
@property (readonly, nonatomic) NSCloudKitMirroringDelegateOptions *mirroringOptions; // ivar: _mirroringOptions


+(id)mirroringContainer;
+(id)newObjectModel;
+(id)sharedContainer;
+(void)initialize;
-(BOOL)_isRelevantTransaction:(id)arg0 ;
-(id)_cloudRecordingsInContext:(id)arg0 ;
-(id)_fetchLegacyRecordingsForMigrationWithContext:(id)arg0 ;
-(id)_initWithMirroring:(BOOL)arg0 useXPCStore:(BOOL)arg1 ;
-(id)_legacyRecordingWithUniqueID:(id)arg0 context:(id)arg1 ;
-(id)_nextTransactionAfterToken:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)_valueForDatabaseProperty:(id)arg0 context:(id)arg1 ;
-(id)newContextWithConcurrencyType:(NSUInteger)arg0 ;
-(void)_deleteOrphanedEntityRevisionsWithContext:(id)arg0 ;
-(void)_handleRemoteChangeNotification:(id)arg0 ;
-(void)_handleRemoteChangeNotificationOnMainQueue:(id)arg0 ;
-(void)_migrateDatabaseIfNecessary:(id)arg0 ;


@end


#endif