// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPENDINGCONVERSATION_H
#define CKPENDINGCONVERSATION_H

@class IMService;


#import "CKConversation.h"

@interface CKPendingConversation : CKConversation

@property (weak, nonatomic) IMService *composeSendingService; // ivar: _composeSendingService
@property (nonatomic) BOOL noAvailableServices; // ivar: _noAvailableServices
@property (weak, nonatomic) IMService *previousSendingService; // ivar: _previousSendingService


-(id)deviceIndependentID;
-(id)sendingService;
-(id)uniqueIdentifier;
-(void)refreshComposeSendingServiceForAddresses:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)refreshStatusForAddresses:(id)arg0 withCompletionBlock:(id)arg1 ;


@end


#endif