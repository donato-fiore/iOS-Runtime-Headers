// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISHEETPRESENTATIONMETRICS_H
#define _UISHEETPRESENTATIONMETRICS_H


#import <Foundation/Foundation.h>


@interface _UISheetPresentationMetrics : NSObject

@property (readonly, nonatomic) BOOL alwaysStacksWithChild;
@property (readonly, nonatomic) CGFloat cornerRadius;
@property (readonly, nonatomic) BOOL exclusivelyUsesZPositionForTransform;
@property (readonly, nonatomic) CGFloat maximumSheetDepthLevel;
@property (readonly, nonatomic) CGFloat minimumSidePadding;
@property (readonly, nonatomic) CGFloat topOffset;
@property (readonly, nonatomic) CGFloat topOffsetInCompactHeight;
@property (readonly, nonatomic) CGFloat transitionDuration;
@property (readonly, nonatomic) BOOL wantsDimming;


+(id)_defaultMetrics;
-(BOOL)shouldScaleDownBehindDescendantsForContainer:(id)arg0 withBounds:(struct CGRect )arg1 ;
-(CGFloat)zPositionForDepthLevel:(CGFloat)arg0 ;
-(id)_init;
-(id)transitionSpringParametersHighSpeed:(BOOL)arg0 ;
-(struct CGSize )defaultFormSheetSizeForScreenSize:(struct CGSize )arg0 ;
-(struct CGSize )formSheetSizeForViewController:(id)arg0 windowSize:(struct CGSize )arg1 screenSize:(struct CGSize )arg2 ;
-(void)addAlongsideAnimations:(id)arg0 forSheetTransition:(id)arg1 context:(id)arg2 ;
-(void)configureDropShadowView:(id)arg0 ;
-(void)configureDropShadowView:(id)arg0 state:(id)arg1 ;


@end


#endif