// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PULAYOUTANIMATIONSHELPER_H
#define PULAYOUTANIMATIONSHELPER_H


#import <Foundation/Foundation.h>

#import "PUSectionedGridLayout.h"

@interface PULayoutAnimationsHelper : NSObject

@property (readonly, weak, nonatomic) PUSectionedGridLayout *layout; // ivar: _layout
@property (nonatomic) BOOL shouldAnimateTemporaryImageView; // ivar: _shouldAnimateTemporaryImageView


+(CGFloat)stackedTransitionAnimationPreferredDurationUsingSpringAnimations:(BOOL)arg0 ;
+(CGFloat)zoomTransitionAnimationPreferredDurationWhenZoomingIn:(BOOL)arg0 ;
+(id)stackedTransitionAnimationsForReusableView:(SEL)arg0 toLayoutAttributes:(id)arg1 shouldUseSpringAnimations:(id)arg2 ;
-(id)_adjustAnimation:(id)arg0 forReusableView:(id)arg1 toLayoutAttributes:(id)arg2 ;
-(id)_adjustCellAnimation:(id)arg0 forReusableView:(id)arg1 toLayoutAttributes:(id)arg2 ;
-(id)_adjustDecorationViewAnimation:(id)arg0 forReusableView:(id)arg1 toLayoutAttributes:(id)arg2 ;
-(id)_adjustRenderedStripAnimation:(id)arg0 forReusableView:(id)arg1 toLayoutAttributes:(id)arg2 ;
-(id)_adjustSectionHeaderAnimation:(id)arg0 forReusableView:(id)arg1 toLayoutAttributes:(id)arg2 ;
-(id)_createDefaultZoomingInAnimationForKeyPath:(id)arg0 ofReusableView:(id)arg1 toLayoutAttributes:(id)arg2 ;
-(id)_createDefaultZoomingOutAnimationForKeyPath:(id)arg0 ofReusableView:(id)arg1 toLayoutAttributes:(id)arg2 ;
-(id)_defaultAnimationForKeyPath:(id)arg0 ofReusableView:(id)arg1 toLayoutAttributes:(id)arg2 ;
-(id)animationsForReusableView:(SEL)arg0 toLayoutAttributes:(id)arg1 ;
-(id)initWithSectionedGridLayout:(id)arg0 ;
-(void)_applyDefaultLayoutAttributes:(id)arg0 toView:(id)arg1 ;
-(void)_configureAnimationsForReusableView:(id)arg0 toLayoutAttributes:(id)arg1 withCompletionBlock:(id)arg2 ;
-(void)didFinishLayoutTransitionAnimations:(BOOL)arg0 transitionIsAppearing:(BOOL)arg1 ;


@end


#endif