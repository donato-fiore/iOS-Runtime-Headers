// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBASESTARTUPTRANSITION_H
#define SBBASESTARTUPTRANSITION_H

@protocol SBStartupTransition;


#import "SBTransaction.h"
#import "SBStartupTransitionContext.h"
#import "SBMainWorkspace.h"

@interface SBBaseStartupTransition : SBTransaction <SBStartupTransition>



@property (readonly, nonatomic) SBStartupTransitionContext *context; // ivar: _context
@property (readonly, nonatomic) NSUInteger destination; // ivar: _destination
@property (readonly, nonatomic) SBMainWorkspace *mainWorkspace; // ivar: _mainWorkspace


-(id)initWithDestination:(NSUInteger)arg0 context:(id)arg1 ;
-(void)_begin;
-(void)performTransitionWithCompletionBlock:(id)arg0 ;


@end


#endif