// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDCKINITIALATTACHMENTSYNCCONTROLLER_H
#define IMDCKINITIALATTACHMENTSYNCCONTROLLER_H

@class CKServerChangeToken;


#import "IMDCKAttachmentSyncController.h"

@interface IMDCKInitialAttachmentSyncController : IMDCKAttachmentSyncController

@property (retain, nonatomic) CKServerChangeToken *syncToken; // ivar: _syncToken


-(BOOL)_deviceConditionsAllowsMessageSync;
-(BOOL)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(NSInteger)arg0 maxBatchCount:(NSInteger)arg1 ;
-(BOOL)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(BOOL)arg0 ;
-(BOOL)_kickOffWriteIfNeededForSyncType:(NSInteger)arg0 completion:(id)arg1 ;
-(id)ckUtilities;
-(id)latestSyncToken;
-(void)dealloc;
-(void)setLatestSyncToken:(id)arg0 ;
-(void)setLatestSyncToken:(id)arg0 forSyncType:(id)arg1 ;


@end


#endif