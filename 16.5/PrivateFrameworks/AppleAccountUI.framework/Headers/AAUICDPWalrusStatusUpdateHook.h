// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUICDPWALRUSSTATUSUPDATEHOOK_H
#define AAUICDPWALRUSSTATUSUPDATEHOOK_H

@class ACAccount;


#import "AAUICDPStatusUpdateHook.h"

@interface AAUICDPWalrusStatusUpdateHook : AAUICDPStatusUpdateHook {
    ACAccount *_account;
}




-(id)additionalPayloadForAction:(id)arg0 error:(id)arg1 ;
-(id)changeControllerForAction:(id)arg0 ;
-(id)initWithAppleAccount:(id)arg0 ;
-(void)postCompletionProcessingForAction:(id)arg0 error:(id)arg1 ;


@end


#endif