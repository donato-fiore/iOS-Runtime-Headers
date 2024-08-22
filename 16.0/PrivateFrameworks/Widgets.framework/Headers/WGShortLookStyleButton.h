// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WGSHORTLOOKSTYLEBUTTON_H
#define WGSHORTLOOKSTYLEBUTTON_H

@class UIControl, MTMaterialView, UILabel, BSUIFontProvider, NSString;
@protocol MTMaterialGrouping;



@interface WGShortLookStyleButton : UIControl <MTMaterialGrouping>

 {
    MTMaterialView *_backgroundView;
    UILabel *_titleLabel;
    BSUIFontProvider *_fontProvider;
    CGSize _size;
}


@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred; // ivar: _backgroundBlurred
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *materialGroupNameBase;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_backgroundViewCornerRadius;
-(id)_fontProvider;
-(id)fontForTitle:(id)arg0 ;
-(struct CGSize )_size;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureBackgroundViewIfNecessary;
-(void)_configureMaskIfNecessary;
-(void)_configureTitleLabelIfNecessary;
-(void)_layoutTitleLabel;
-(void)_setBackgroundViewCornerRadius:(CGFloat)arg0 ;
-(void)_updateHighlight;
-(void)_updateTitleLabelFont;
-(void)_updateTouchInsetsIfNecessary;
-(void)invalidateCachedGeometry;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif