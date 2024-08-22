// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UICOLORPICKERVIEWCONTROLLER_H
#define UICOLORPICKERVIEWCONTROLLER_H

@class NSArray, NSLayoutConstraint, NSString, NSExtension;
@protocol _UIColorPickerRemoteViewControllerHost, _UIRemoteViewControllerContaining, _UIColorPickerColorQueueDelegate, UIColorPickerViewControllerDelegate, NSCopying;


#import "UIViewController.h"
#import "UIPresentationController.h"
#import "_UIColorPickerRemoteViewController.h"
#import "_UIRemoteViewController.h"
#import "_UIColorPickerViewControllerConfiguration.h"
#import "_UIColorPickerColorQueue.h"
#import "UIColor.h"

@interface UIColorPickerViewController : UIViewController <_UIColorPickerRemoteViewControllerHost, _UIRemoteViewControllerContaining, _UIColorPickerColorQueueDelegate>

 {
    UIPresentationController *_presentationController;
    CGRect _keyboardFrame;
    ? _flags;
}


@property (retain, nonatomic, setter=_setChildViewController:) _UIColorPickerRemoteViewController *_childViewController; // ivar: _childViewController
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (copy, nonatomic, setter=_setRemoteConfiguration:) _UIColorPickerViewControllerConfiguration *_remoteConfiguration; // ivar: __remoteConfiguration
@property (nonatomic, setter=_setShouldUseDarkGridInDarkMode:) BOOL _shouldUseDarkGridInDarkMode;
@property (copy, nonatomic, setter=_setSuggestedColors:) NSArray *_suggestedColors;
@property (nonatomic, setter=_setUserInterfaceStyleForGrid:) NSInteger _userInterfaceStyleForGrid;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint; // ivar: _bottomConstraint
@property (retain, nonatomic) _UIColorPickerColorQueue *colorQueue; // ivar: _colorQueue
@property (readonly, copy, nonatomic) _UIColorPickerViewControllerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIColorPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (copy, nonatomic) NSObject<NSCopying> *extensionRequestIdentifier; // ivar: _extensionRequestIdentifier
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *selectedColor; // ivar: _selectedColor
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsAlpha;


+(BOOL)automaticallyNotifiesObserversOfSelectedColor;
-(BOOL)_canShowWhileLocked;
-(CGFloat)_detentHeightForWidth:(CGFloat)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)remoteViewController;
-(void)_colorPickerDidFinish;
-(void)_colorPickerviewServiceDidTerminateWithError:(id)arg0 ;
-(void)_commonUIColorPickerViewControllerInit;
-(void)_dequeue_pickerDidSelectColor:(id)arg0 colorspace:(id)arg1 isVolatile:(BOOL)arg2 ;
-(void)_pickerDidDismissEyedropper;
-(void)_pickerDidFloatEyedropper;
-(void)_pickerDidSelectColor:(id)arg0 ;
-(void)_pickerDidSelectColor:(id)arg0 colorspace:(id)arg1 isVolatile:(BOOL)arg2 ;
-(void)_pickerDidShowEyedropper;
-(void)_presentationController:(id)arg0 prepareAdaptivePresentationController:(id)arg1 ;
-(void)_processKeyboardNotification:(id)arg0 ;
-(void)_tryLaunchingExtension:(NSInteger)arg0 ;
-(void)_updateRemoteConfiguration;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)keyboardDidHide:(id)arg0 ;
-(void)keyboardFrameDidChange:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)loadView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)repositionChildViewControllerAnimated:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif