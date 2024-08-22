// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMAINWORKSPACETRANSACTION_H
#define SBMAINWORKSPACETRANSACTION_H



#import "SBWorkspaceTransaction.h"
#import "SBMainWorkspaceTransitionRequest.h"

@interface SBMainWorkspaceTransaction : SBWorkspaceTransaction

@property (readonly, nonatomic) SBMainWorkspaceTransitionRequest *transitionRequest;


-(id)initWithTransitionRequest:(id)arg0 ;
-(void)_didComplete;


@end


#endif