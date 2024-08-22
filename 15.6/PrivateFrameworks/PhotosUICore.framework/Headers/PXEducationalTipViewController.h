// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXEDUCATIONALTIPVIEWCONTROLLER_H
#define PXEDUCATIONALTIPVIEWCONTROLLER_H

@class UIViewController, UIVisualEffectView, UIImageView, UILabel, UIButton, NSString, UIImage;



@interface PXEducationalTipViewController : UIViewController {
    UIVisualEffectView *_visualEffectView;
    UIImageView *_imageView;
    UILabel *_messageLabel;
    UIButton *_dismissButton;
}


@property (copy, nonatomic) NSString *dismissButtonTitle; // ivar: _dismissButtonTitle
@property (copy, nonatomic) id *dismissHandler; // ivar: _dismissHandler
@property (copy, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSString *message; // ivar: _message


-(BOOL)_canShowWhileLocked;
-(void)_handleDismissButton:(id)arg0 ;
-(void)_invalidateContent;
-(void)setTitle:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif