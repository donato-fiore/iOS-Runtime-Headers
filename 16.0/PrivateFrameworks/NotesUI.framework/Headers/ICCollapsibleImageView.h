// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCOLLAPSIBLEIMAGEVIEW_H
#define ICCOLLAPSIBLEIMAGEVIEW_H

@class UIImage, UIImageView, UIColor;


#import "ICCollapsibleBaseView.h"

@interface ICCollapsibleImageView : ICCollapsibleBaseView

@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(void)performSetup;


@end


#endif