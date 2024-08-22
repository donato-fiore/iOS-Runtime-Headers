// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWAITFORSCENELAYOUTTRANSITIONTRANSACTION_H
#define SBWAITFORSCENELAYOUTTRANSITIONTRANSACTION_H

@class NSString;
@protocol SBLayoutStateTransitionObserver;


#import "SBTransaction.h"
#import "SBLayoutStateTransitionCoordinator.h"

@interface SBWaitForSceneLayoutTransitionTransaction : SBTransaction <SBLayoutStateTransitionObserver>

 {
    SBLayoutStateTransitionCoordinator *_transitionCoordinator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSceneLayoutTransitionCoordinator:(id)arg0 ;
-(void)_begin;
-(void)dealloc;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;


@end


#endif