// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUIMAGEVIEWCONTROLLER_H
#define SUIMAGEVIEWCONTROLLER_H

@class UIImageView;


#import "SUViewController.h"
#import "SUTouchCaptureView.h"

@interface SUImageViewController : SUViewController {
    SUTouchCaptureView *_backstopView;
    UIImageView *_imageView;
}




-(id)_imageView;
-(void)_backstopAction:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)reloadWithStorePage:(id)arg0 forURL:(id)arg1 ;


@end


#endif