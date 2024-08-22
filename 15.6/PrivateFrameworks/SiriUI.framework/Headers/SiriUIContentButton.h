// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUICONTENTBUTTON_H
#define SIRIUICONTENTBUTTON_H

@class UIButton, UIColor;



@interface SiriUIContentButton : UIButton {
    BOOL _isRenderingImageTemplate;
    UIColor *_defaultColorForTemplate;
    UIColor *_highlightColorForTemplate;
    UIColor *_overrideTextColor;
}


@property (nonatomic) UIEdgeInsets hitTestEdgeInsets; // ivar: _hitTestEdgeInsets
@property (nonatomic) BOOL usePlatterStyle; // ivar: _usePlatterStyle


+(id)button;
+(id)buttonWithImageMask:(id)arg0 ;
+(id)buttonWithImageMask:(id)arg0 style:(NSInteger)arg1 ;
+(id)buttonWithImageTemplate:(id)arg0 ;
+(id)buttonWithImageTemplate:(id)arg0 style:(NSInteger)arg1 ;
+(id)buttonWithLightWeightFont;
+(id)buttonWithMediumWeightFont;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setIsRenderingImageTemplate:(BOOL)arg0 ;
-(void)_updateStyling;
-(void)_updateTintColor;
-(void)setDefaultColorForTemplate:(id)arg0 ;
-(void)setHighlightColorForTemplate:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setOverrideTextColor:(id)arg0 ;


@end


#endif