// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUTILEANIMATOR_H
#define PUTILEANIMATOR_H

@protocol PUTilingViewControllerTransition;

#import <Foundation/Foundation.h>


@interface PUTileAnimator : NSObject

@property (readonly, weak, nonatomic) NSObject<PUTilingViewControllerTransition> *currentTransition; // ivar: _currentTransition


-(id)freezeTileController:(id)arg0 ;
-(void)animateTileController:(id)arg0 toLayoutInfo:(id)arg1 withOptions:(id)arg2 completionHandler:(id)arg3 ;
-(void)prepareTileControllerForAnimation:(id)arg0 withInitialLayoutInfo:(id)arg1 ;
-(void)transition:(id)arg0 didComplete:(BOOL)arg1 ;
-(void)transitionDidBeginAnimation:(id)arg0 ;
-(void)transitionWillBeginAnimation:(id)arg0 ;
-(void)updateAnimationForTileController:(id)arg0 withRepositionedTargetLayoutInfo:(id)arg1 ;


@end


#endif