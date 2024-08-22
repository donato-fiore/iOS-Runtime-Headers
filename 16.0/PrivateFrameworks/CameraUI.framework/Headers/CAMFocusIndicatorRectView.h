// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMFOCUSINDICATORRECTVIEW_H
#define CAMFOCUSINDICATORRECTVIEW_H

@class UIView, UIImageView;



@interface CAMFocusIndicatorRectView : UIView

@property (readonly, nonatomic) UIImageView *_imageView; // ivar: __imageView
@property (nonatomic, getter=isInactive) BOOL inactive;
@property (nonatomic, getter=isPulsing) BOOL pulsing;
@property (readonly, nonatomic) NSInteger style; // ivar: _style


-(id)initWithStyle:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;


@end


#endif