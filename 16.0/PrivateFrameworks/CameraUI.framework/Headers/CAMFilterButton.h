// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMFILTERBUTTON_H
#define CAMFILTERBUTTON_H

@class UIButton, NSString;
@protocol CAMAccessibilityHUDImageProvider;



@interface CAMFilterButton : UIButton <CAMAccessibilityHUDImageProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic, getter=isOn) BOOL on;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly) Class superclass;
@property (nonatomic) UIEdgeInsets tappableEdgeInsets; // ivar: _tappableEdgeInsets


+(id)filterButtonWithLayoutStyle:(NSInteger)arg0 ;
-(id)_filterImage;
-(id)_filterOnImage;
-(id)imageForAccessibilityHUD;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_commonCAMFilterButtonInitializationWithStyle:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif