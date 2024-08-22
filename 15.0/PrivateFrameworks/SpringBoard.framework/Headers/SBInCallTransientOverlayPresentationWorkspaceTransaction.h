// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBINCALLTRANSIENTOVERLAYPRESENTATIONWORKSPACETRANSACTION_H
#define SBINCALLTRANSIENTOVERLAYPRESENTATIONWORKSPACETRANSACTION_H

@class NSString;


#import "SBMainWorkspaceTransaction.h"
#import "SBInCallPresentationSession.h"

@interface SBInCallTransientOverlayPresentationWorkspaceTransaction : SBMainWorkspaceTransaction

@property (readonly, copy, nonatomic) NSString *analyticsSource; // ivar: _analyticsSource
@property (readonly, nonatomic) SBInCallPresentationSession *sourcePresentationSession; // ivar: _sourcePresentationSession


-(id)initWithTransitionRequest:(id)arg0 sourcePresentationSession:(id)arg1 analyticsSource:(id)arg2 ;
-(void)_begin;
-(void)_performInCallPresentationWithCompletion:(id)arg0 ;


@end


#endif