// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKFIXEDSIZEIMAGEVIEW_H
#define GKFIXEDSIZEIMAGEVIEW_H

@class UIImageView, UIImage;



@interface GKFixedSizeImageView : UIImageView

@property (retain, nonatomic) UIImage *actualImage; // ivar: _actualImage


-(id)image;
-(void)invalidateIntrinsicContentSize;
-(void)setImage:(id)arg0 ;


@end


#endif