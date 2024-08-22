// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUPCIMAGECONTENTCONTROLLER_H
#define HUPCIMAGECONTENTCONTROLLER_H

@class UIImage, UIImageView;


#import "HUPCCenterFillContentController.h"

@interface HUPCImageContentController : HUPCCenterFillContentController

@property (retain, nonatomic) UIImage *contentImage;
@property (readonly, nonatomic) UIImageView *contentImageView; // ivar: _contentImageView


-(CGFloat)_contentAspectRatio;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 contentImage:(id)arg2 ;
-(void)_updateContentMode;
-(void)_viewDidUpdateContent;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif