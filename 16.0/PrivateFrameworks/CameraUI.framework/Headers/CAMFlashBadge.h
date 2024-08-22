// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMFLASHBADGE_H
#define CAMFLASHBADGE_H

@class CEKBadgeView, UIImage;



@interface CAMFlashBadge : CEKBadgeView

@property (retain, nonatomic) UIImage *_contentImage; // ivar: __contentImage


-(id)_maskImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_imageSize;
-(struct CGSize )intrinsicContentSize;
-(struct UIEdgeInsets )_imageInsets;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif