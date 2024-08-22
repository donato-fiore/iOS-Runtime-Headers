// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBALERTITEMHEADERVIEWCONTROLLER_H
#define _SBALERTITEMHEADERVIEWCONTROLLER_H

@class UIViewController, UIImageView, UIImage;



@interface _SBAlertItemHeaderViewController : UIViewController {
    UIImageView *_imageView;
}


@property (readonly, nonatomic) UIImage *image;


-(CGFloat)_bottomMarginOffset;
-(CGFloat)_topMarginOffset;
-(id)initWithImage:(id)arg0 ;
-(struct CGSize )_expectedSize;
-(void)loadView;


@end


#endif