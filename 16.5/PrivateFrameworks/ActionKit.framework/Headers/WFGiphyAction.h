// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFGIPHYACTION_H
#define WFGIPHYACTION_H

@class WFAction;


#import "WFGiphySessionManager.h"

@interface WFGiphyAction : WFAction

@property (readonly, nonatomic) WFGiphySessionManager *sessionManager; // ivar: _sessionManager


+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runWithNoUserInterface;
-(void)runWithRemoteUserInterface:(id)arg0 input:(id)arg1 ;


@end


#endif