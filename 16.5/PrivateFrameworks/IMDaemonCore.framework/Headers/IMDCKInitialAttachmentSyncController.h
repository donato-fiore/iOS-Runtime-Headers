// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDCKINITIALATTACHMENTSYNCCONTROLLER_H
#define IMDCKINITIALATTACHMENTSYNCCONTROLLER_H

@class CKServerChangeToken;


#import "IMDCKAttachmentSyncController.h"

@interface IMDCKInitialAttachmentSyncController : IMDCKAttachmentSyncController

@property (retain, nonatomic) CKServerChangeToken *syncToken; // ivar: _syncToken


-(BOOL)_deviceConditionsAllowsMessageSync;
-(BOOL)_deviceConditionsAllowsMessageSyncForActivity:(id)arg0 deviceConditionsToCheck:(NSUInteger)arg1 currentBatchCount:(NSInteger)arg2 maxBatchCount:(NSInteger)arg3 ;
-(BOOL)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(NSInteger)arg0 maxBatchCount:(NSInteger)arg1 ;
-(BOOL)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(BOOL)arg0 ;
-(BOOL)_kickOffWriteIfNeededForSyncType:(NSInteger)arg0 activity:(id)arg1 completion:(id)arg2 ;
-(id)ckUtilities;
-(id)latestSyncToken;
-(void)setLatestSyncToken:(id)arg0 ;
-(void)setLatestSyncToken:(id)arg0 forSyncType:(id)arg1 ;


@end


#endif