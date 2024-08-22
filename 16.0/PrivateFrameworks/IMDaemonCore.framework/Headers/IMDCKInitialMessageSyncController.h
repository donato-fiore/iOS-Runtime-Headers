// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDCKINITIALMESSAGESYNCCONTROLLER_H
#define IMDCKINITIALMESSAGESYNCCONTROLLER_H

@class CKServerChangeToken;


#import "IMDCKMessageSyncController.h"

@interface IMDCKInitialMessageSyncController : IMDCKMessageSyncController

@property (retain, nonatomic) CKServerChangeToken *syncToken; // ivar: _syncToken


-(BOOL)_deviceConditionsAllowsMessageSyncForActivity:(id)arg0 deviceConditionsToCheck:(NSUInteger)arg1 currentBatchCount:(NSInteger)arg2 maxBatchCount:(NSInteger)arg3 ;
-(BOOL)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(NSInteger)arg0 maxBatchCount:(NSInteger)arg1 ;
-(BOOL)_kickOffWriteIfNeededForSyncType:(NSInteger)arg0 activity:(id)arg1 completion:(id)arg2 ;
-(id)ckUtilities;
-(id)latestSyncToken;
-(void)setLatestSyncToken:(id)arg0 ;
-(void)setLatestSyncToken:(id)arg0 forSyncType:(id)arg1 ;
-(void)syncMessagesWithSyncType:(NSInteger)arg0 deviceConditionsToCheck:(NSUInteger)arg1 activity:(id)arg2 completionBlock:(id)arg3 ;


@end


#endif