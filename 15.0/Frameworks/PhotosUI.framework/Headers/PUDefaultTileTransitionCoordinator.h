// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUDEFAULTTILETRANSITIONCOORDINATOR_H
#define PUDEFAULTTILETRANSITIONCOORDINATOR_H

@class NSNumber;


#import "PUTileTransitionCoordinator.h"

@interface PUDefaultTileTransitionCoordinator : PUTileTransitionCoordinator

@property (copy, nonatomic) NSNumber *animationDuration; // ivar: _animationDuration


-(id)_layoutInfoWithDefaultDisappearance:(id)arg0 ;
-(id)finalLayoutInfoForDisappearingTileController:(id)arg0 fromLayoutInfo:(id)arg1 ;
-(id)initialLayoutInfoForAppearingTileController:(id)arg0 toLayoutInfo:(id)arg1 ;
-(id)optionsForAnimatingTileController:(id)arg0 toLayoutInfo:(id)arg1 withAnimationType:(NSInteger)arg2 ;
-(struct CGAffineTransform )_adjustDefaultDisappearanceTransform:(struct CGAffineTransform )arg0 ;
-(void)configureOptions:(id)arg0 forSpringAnimationsZommingIn:(BOOL)arg1 ;


@end


#endif