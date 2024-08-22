// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCAPSULEBUTTON_H
#define PXCAPSULEBUTTON_H

@class UIButton, NSMutableDictionary, UIActivityIndicatorView, NSString;



@interface PXCapsuleButton : UIButton {
    NSMutableDictionary *_stateColorMap;
    UIActivityIndicatorView *_activityIndicatorView;
}


@property (nonatomic) NSString *maxContentSizeCategory; // ivar: _maxContentSizeCategory


-(id)_titleFont;
-(id)colorForState:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColor:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_invalidateBackgroundColor;
-(void)_invalidateCornerRadius;
-(void)_stateDidChange;
-(void)_updateBackgroundColor;
-(void)_updateCornerRadius;
-(void)setColor:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)startLoadingAnimation;
-(void)stopLoadingAnimation;


@end


#endif