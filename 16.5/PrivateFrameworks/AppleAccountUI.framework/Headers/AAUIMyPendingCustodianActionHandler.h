// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIMYPENDINGCUSTODIANACTIONHANDLER_H
#define AAUIMYPENDINGCUSTODIANACTIONHANDLER_H



#import "AAUIMyCustodianActionHandler.h"
#import "AAUIInviteMessageFlowController.h"

@interface AAUIMyPendingCustodianActionHandler : AAUIMyCustodianActionHandler {
    AAUIInviteMessageFlowController *_inviteFlowController;
}




-(void)displayMessagesInvitationFlowWithViewController:(id)arg0 ;
-(void)doPrimaryAction:(id)arg0 specifier:(id)arg1 ;


@end


#endif