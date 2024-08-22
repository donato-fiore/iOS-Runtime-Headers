// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTRANSIENTOVERLAYDISMISSALLWORKSPACETRANSACTION_H
#define SBTRANSIENTOVERLAYDISMISSALLWORKSPACETRANSACTION_H



#import "SBMainWorkspaceTransaction.h"

@interface SBTransientOverlayDismissAllWorkspaceTransaction : SBMainWorkspaceTransaction

@property (nonatomic, getter=isAnimatedOverride) NSInteger animatedOverride; // ivar: _animatedOverride


+(BOOL)isValidForTransitionRequest:(id)arg0 ;
-(BOOL)_canBeInterrupted;
-(id)initWithTransitionRequest:(id)arg0 ;
-(void)_begin;


@end


#endif