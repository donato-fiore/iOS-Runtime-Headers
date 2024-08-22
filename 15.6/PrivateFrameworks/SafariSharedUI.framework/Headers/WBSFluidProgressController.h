// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSFLUIDPROGRESSCONTROLLER_H
#define WBSFLUIDPROGRESSCONTROLLER_H

@class NSHashTable;
@protocol WBSFluidProgressControllerDelegate, WBSFluidProgressControllerWindowDelegate;

#import <Foundation/Foundation.h>


@interface WBSFluidProgressController : NSObject {
    NSHashTable *_observers;
}


@property (weak, nonatomic) NSObject<WBSFluidProgressControllerDelegate> *delegate; // ivar: _delegate
@property (weak) NSObject<WBSFluidProgressControllerWindowDelegate> *windowDelegate; // ivar: _windowDelegate


-(id)init;
-(void)_sendUpdateFluidProgressToObservers:(id)arg0 progressState:(id)arg1 source:(id)arg2 updateAnimationPhase:(BOOL)arg3 ;
-(void)_updateFluidProgressWithProgressStateSource:(id)arg0 ;
-(void)animationStepCompleted:(id)arg0 ;
-(void)cancelFluidProgressWithProgressStateSource:(id)arg0 ;
-(void)finishFluidProgressWithProgressStateSource:(id)arg0 ;
-(void)frontmostTabDidChange;
-(void)progressStateSourceDidCommitLoad:(id)arg0 loadingSingleResource:(BOOL)arg1 ;
-(void)registerObserver:(id)arg0 ;
-(void)sendProgressUpdateToObservers:(id)arg0 progressStateSource:(id)arg1 ;
-(void)startFluidProgressWithProgressStateSource:(id)arg0 ;
-(void)startRocketEffectWithProgressStateSource:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateFluidProgressWithProgressStateSource:(id)arg0 ;


@end


#endif