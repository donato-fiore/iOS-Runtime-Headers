// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBHSHADOWVIEW_H
#define _SBHSHADOWVIEW_H

@class UIView, MTShadowView, CALayer;
@protocol SBHShadowViewFrameProviding;



@interface _SBHShadowView : UIView <SBHShadowViewFrameProviding>

 {
    MTShadowView *_shadowView;
    CALayer *_shadowLayer;
}


@property (nonatomic) BOOL useMaterialBasedShadow; // ivar: _useMaterialBasedShadow


+(BOOL)supportsMaterialsBasedShadow;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )frameWithContentWithFrame:(struct CGRect )arg0 ;
-(void)_updateShadow;
-(void)layoutSubviews;


@end


#endif