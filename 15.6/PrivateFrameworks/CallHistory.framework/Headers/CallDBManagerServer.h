// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALLDBMANAGERSERVER_H
#define CALLDBMANAGERSERVER_H



#import "CallDBManager.h"

@interface CallDBManagerServer : CallDBManager



+(NSInteger)getNextVersionToDowngradeTo:(NSInteger)arg0 ;
+(NSInteger)getNextVersionToDowngradeTo:(NSInteger)arg0 withSourceVersion:(NSInteger)arg1 ;
+(NSInteger)getNextVersionToMigrateToCurrentVersion:(NSInteger)arg0 ;
+(id)downgradeDatabaseAtLocation:(id)arg0 toVersion:(NSInteger)arg1 ;
+(id)getDestinationModel:(NSInteger)arg0 ;
+(id)getDestinationModelForVersion:(NSInteger)arg0 ;
+(id)getObjectIdsForAllRecords:(id)arg0 ;
+(id)getObjectIdsForDuplicateRecordsWithUniqueIds:(id)arg0 andHavingObjectIds:(id)arg1 ;
+(id)getUniqueIdsForAllRecords:(id)arg0 ;
-(BOOL)bootUpDBAtLocation:(id)arg0 isEncrypted:(BOOL)arg1 ;
-(BOOL)bootUpDBAtLocationWithRecovery:(id)arg0 isEncrypted:(BOOL)arg1 ;
-(BOOL)createCallDBProperties;
-(BOOL)handleBootUpFailure:(id)arg0 ;
-(BOOL)handleDatabaseMigration:(id)arg0 isEncrypted:(BOOL)arg1 isRetry:(BOOL)arg2 ;
-(BOOL)removeDuplicatesFromDBAtLocation:(id)arg0 dbVersion:(NSInteger)arg1 isEncrypted:(BOOL)arg2 ;
-(id)createMOCForDBAtLocation:(id)arg0 dbVersion:(NSInteger)arg1 isEncrypted:(BOOL)arg2 ;
-(id)getUUIDsOfNMostRecentRecords:(NSUInteger)arg0 fromManagedObjectContext:(id)arg1 ;
-(id)permDBLocation:(*unsigned char)arg0 ;
-(id)tempDBLocation:(*unsigned char)arg0 ;
-(void)createPermanent;
-(void)createTemporary;
-(void)modifyCallRecordForDBAtLocation:(id)arg0 dbVersion:(NSInteger)arg1 isEncrypted:(BOOL)arg2 modifyCallRecord:(id)arg3 ;
-(void)moveCallsFromTempDatabase;
-(void)populateHandleType:(id)arg0 dbVersion:(NSInteger)arg1 isEncrypted:(BOOL)arg2 ;
-(void)populateRecentCallRemoteParticipantHandles:(id)arg0 dbVersion:(NSInteger)arg1 isEncrypted:(BOOL)arg2 ;
-(void)populateServiceProviderAndCallCategory:(id)arg0 dbVersion:(NSInteger)arg1 isEncrypted:(BOOL)arg2 ;
-(void)prepareDatabaseForNextStepInMigration:(id)arg0 dbVersion:(NSInteger)arg1 isEncrypted:(BOOL)arg2 ;
-(void)prepareForMigrationDBAtURL:(id)arg0 withModelAtURL:(id)arg1 andIsEncrypted:(BOOL)arg2 ;


@end


#endif