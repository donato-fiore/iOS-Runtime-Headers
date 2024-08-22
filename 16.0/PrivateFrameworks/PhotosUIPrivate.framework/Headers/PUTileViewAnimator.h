// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUTILEVIEWANIMATOR_H
#define PUTILEVIEWANIMATOR_H

@class NSMapTable;


#import "PUTileAnimator.h"

@interface PUTileViewAnimator : PUTileAnimator

@property (readonly, nonatomic) NSMapTable *_synchronizedAnimationGroupsByTransition; // ivar: __synchronizedAnimationGroupsByTransition


-(id)init;
// -(void)_performAnimations:(id)arg0 withOptions:(unk)arg1  ;
-(void)animateTileController:(id)arg0 toLayoutInfo:(id)arg1 withOptions:(id)arg2 completionHandler:(id)arg3 ;
-(void)prepareTileControllerForAnimation:(id)arg0 withInitialLayoutInfo:(id)arg1 ;
-(void)transition:(id)arg0 didComplete:(BOOL)arg1 ;
-(void)updateAnimationForTileController:(id)arg0 withRepositionedTargetLayoutInfo:(id)arg1 ;


@end


#endif