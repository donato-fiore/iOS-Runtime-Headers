// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUREVIEWSCREENCONTROLBARBUTTON_H
#define PUREVIEWSCREENCONTROLBARBUTTON_H

@class UIButton;



@interface PUReviewScreenControlBarButton : UIButton

@property (nonatomic) BOOL useCompactSize; // ivar: _useCompactSize


-(CGFloat)_padding;
-(CGFloat)_selectedIndicatorAlpha;
-(struct CGSize )intrinsicContentSize;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)layoutSubviews;


@end


#endif