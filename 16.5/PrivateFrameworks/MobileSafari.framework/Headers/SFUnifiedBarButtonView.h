// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUNIFIEDBARBUTTONVIEW_H
#define SFUNIFIEDBARBUTTONVIEW_H

@class UIImageView, NSLayoutConstraint, NSString, UIImage;
@protocol UIPointerInteractionDelegate;


#import "SFUnifiedBarItemView.h"

@interface SFUnifiedBarButtonView : SFUnifiedBarItemView <UIPointerInteractionDelegate>

 {
    UIImageView *_imageView;
    NSLayoutConstraint *_imageViewLeadingConstraint;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL shouldTrailingAlignImage;
@property (readonly) Class superclass;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)preferredWidth;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(struct CGRect )_hitRect;
-(struct CGRect )_selectedIndicatorBounds;
-(void)setEnabled:(BOOL)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateTitleFont;


@end


#endif