// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMFLIPBUTTON_H
#define CAMFLIPBUTTON_H

@class UIButton, UIImageView, NSString;
@protocol CAMAccessibilityHUDImageProvider;



@interface CAMFlipButton : UIButton <CAMAccessibilityHUDImageProvider>



@property (retain, nonatomic) UIImageView *_circleBackgroundView; // ivar: __circleBackgroundView
@property (readonly, nonatomic) UIImageView *_imageView; // ivar: __imageView
@property (readonly, nonatomic) BOOL _useCTMAppearance; // ivar: __useCTMAppearance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly) Class superclass;
@property (nonatomic) UIEdgeInsets tappableEdgeInsets; // ivar: _tappableEdgeInsets


+(id)flipButtonOverContent;
+(id)flipButtonWithLayoutStyle:(NSInteger)arg0 ;
-(id)imageForAccessibilityHUD;
-(id)mainImageNameForAccessibilityHUD:(BOOL)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_commonCAMFlipButtonInitializationWithStyle:(NSInteger)arg0 overContent:(BOOL)arg1 ;
-(void)_updateImages;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif