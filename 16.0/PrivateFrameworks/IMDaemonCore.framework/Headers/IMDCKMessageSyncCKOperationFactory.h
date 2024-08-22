// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDCKMESSAGESYNCCKOPERATIONFACTORY_H
#define IMDCKMESSAGESYNCCKOPERATIONFACTORY_H


#import <Foundation/Foundation.h>


@interface IMDCKMessageSyncCKOperationFactory : NSObject



-(id)_fetchOptionsDictionaryWithFetchOptions:(id)arg0 andZoneID:(id)arg1 ;
-(id)_messageFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg0 zoneID:(id)arg1 resultsLimit:(NSUInteger)arg2 ;
-(id)_operationGroupWithName:(id)arg0 ;
-(id)deleteMessageCKOperationUsingRecordIDstoDelete:(id)arg0 ;
-(id)deleteRecoverableMessageCKOperationUsingRecordIDstoDelete:(id)arg0 ;
-(id)fetchArchivedRecordsOperationWithSyncToken:(id)arg0 zoneID:(id)arg1 activity:(id)arg2 ;
-(id)fetchMessageZoneChangesCKOperationUsingToken:(id)arg0 zoneID:(id)arg1 resultsLimit:(NSUInteger)arg2 operationGroupName:(id)arg3 activity:(id)arg4 ;
-(id)saveMessagesCKOperationUsingRecordsToSave:(id)arg0 operationGroupName:(id)arg1 activity:(id)arg2 ;


@end


#endif