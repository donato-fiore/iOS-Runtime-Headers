// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PKINKTHICKNESSBUTTON_H
#define _PKINKTHICKNESSBUTTON_H

@class UIButton, UIColor, UIImageView, UIImage, NSString;
@protocol UIPointerInteractionDelegate;



@interface _PKInkThicknessButton : UIButton <UIPointerInteractionDelegate>

 {
    CGFloat _weight;
    UIColor *_imageTintColorOverride;
    UIImageView *_inkImageView;
    UIImage *_assetImage;
    CGSize _buttonSize;
    CGRect _lastRenderedBounds;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)didTouchUpInside;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif