// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUSCROLLIMAGEVIEW_H
#define PUSCROLLIMAGEVIEW_H

@class UIScrollView, NSString, UIImageView;
@protocol UIScrollViewDelegate;



@interface PUScrollImageView : UIScrollView <UIScrollViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) UIImageView *imageView; // ivar: _imageView
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 image:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg0 ;


@end


#endif