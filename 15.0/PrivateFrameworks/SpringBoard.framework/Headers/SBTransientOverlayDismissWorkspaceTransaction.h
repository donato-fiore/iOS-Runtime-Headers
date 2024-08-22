// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTRANSIENTOVERLAYDISMISSWORKSPACETRANSACTION_H
#define SBTRANSIENTOVERLAYDISMISSWORKSPACETRANSACTION_H



#import "SBMainWorkspaceTransaction.h"

@interface SBTransientOverlayDismissWorkspaceTransaction : SBMainWorkspaceTransaction



+(BOOL)isValidForTransitionRequest:(id)arg0 ;
-(void)_begin;
-(void)_didComplete;
-(void)_sendActivationResultWithError:(id)arg0 ;


@end


#endif