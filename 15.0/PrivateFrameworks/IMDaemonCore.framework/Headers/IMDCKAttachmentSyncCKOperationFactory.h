// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDCKATTACHMENTSYNCCKOPERATIONFACTORY_H
#define IMDCKATTACHMENTSYNCCKOPERATIONFACTORY_H


#import <Foundation/Foundation.h>


@interface IMDCKAttachmentSyncCKOperationFactory : NSObject



+(id)_desiredKeysArrayForType:(NSInteger)arg0 ;
-(BOOL)_defaultsSayWeHaveSyncedOnce;
-(id)_attachmentFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg0 zoneID:(id)arg1 resultsLimit:(NSUInteger)arg2 desiredKeys:(NSInteger)arg3 ;
-(id)_operationGroupWithName:(id)arg0 ;
-(id)deleteAttachmentCKOperationUsingRecordIDstoDelete:(id)arg0 activity:(id)arg1 ;
-(id)fetchAttachmentZoneChangesCKOperationUsingToken:(id)arg0 zoneID:(id)arg1 resultsLimit:(NSUInteger)arg2 desiredKeys:(NSInteger)arg3 operationGroupName:(id)arg4 activity:(id)arg5 ;
-(id)fetchAttachmentZoneRecords:(id)arg0 desiredKeys:(NSInteger)arg1 operationGroupName:(id)arg2 activity:(id)arg3 ;
-(id)saveAttachmentsCKOperationUsingRecordsToSave:(id)arg0 activity:(id)arg1 ;


@end


#endif