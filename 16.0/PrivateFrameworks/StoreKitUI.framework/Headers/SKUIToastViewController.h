// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUITOASTVIEWCONTROLLER_H
#define SKUITOASTVIEWCONTROLLER_H

@class UIViewController, NSString, UIImageView, UILabel, UIVisualEffectView;


#import "SKUIToastPresentationWindow.h"

@interface SKUIToastViewController : UIViewController

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (copy, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) SKUIToastPresentationWindow *presentationWindow; // ivar: _presentationWindow
@property (retain, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (retain, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText
@property (retain, nonatomic) UIVisualEffectView *toastView; // ivar: _toastView


+(id)_fontWithSize:(CGFloat)arg0 textStyleAttribute:(struct __CFString *)arg1 ;
-(id)initWithDialogTemplate:(id)arg0 ;
-(id)initWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 ;
-(void)_dismissWithDelay:(CGFloat)arg0 ;
-(void)present;
-(void)presentFromViewController:(id)arg0 completion:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif