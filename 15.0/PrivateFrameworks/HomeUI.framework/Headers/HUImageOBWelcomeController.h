// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUIMAGEOBWELCOMECONTROLLER_H
#define HUIMAGEOBWELCOMECONTROLLER_H

@class UIImage, UIImageView;


#import "HUCenterFillOBWelcomeController.h"

@interface HUImageOBWelcomeController : HUCenterFillOBWelcomeController

@property (retain, nonatomic) UIImage *contentImage;
@property (readonly, nonatomic) UIImageView *contentImageView; // ivar: _contentImageView


-(CGFloat)_contentAspectRatio;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentImage:(id)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentView:(id)arg3 ;
-(void)_updateContentMode;
-(void)_viewDidUpdateContent;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif