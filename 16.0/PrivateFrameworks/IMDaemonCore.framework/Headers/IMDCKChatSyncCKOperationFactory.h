// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDCKCHATSYNCCKOPERATIONFACTORY_H
#define IMDCKCHATSYNCCKOPERATIONFACTORY_H


#import <Foundation/Foundation.h>


@interface IMDCKChatSyncCKOperationFactory : NSObject



-(id)_chatFetchRecordZoneChangesCKConfiguration:(id)arg0 ;
-(id)_chatFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg0 zoneID:(id)arg1 resultsLimit:(NSUInteger)arg2 ;
-(id)_chatSyncOperationGroup;
-(id)_chatSyncOperationGroupWithName:(id)arg0 ;
-(id)_chatWriteRecordsCKConfiguration:(id)arg0 ;
-(id)deleteChatCKOperationUsingRecordIDstoDelete:(id)arg0 ;
-(id)fetchChatCKOperationUsingRecordIDs:(id)arg0 ;
-(id)fetchChatZoneChangesCKOperationUsingToken:(id)arg0 zone:(id)arg1 resultsLimit:(NSUInteger)arg2 activity:(id)arg3 ;
-(id)fetchChatZoneChangesCKOperationUsingToken:(id)arg0 zone:(id)arg1 resultsLimit:(NSUInteger)arg2 groupName:(id)arg3 activity:(id)arg4 ;
-(id)saveChatsCKOperationUsingRecordsToSave:(id)arg0 activity:(id)arg1 ;


@end


#endif