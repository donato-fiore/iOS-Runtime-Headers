// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDCAMERAVIEWCONTROLLER_H
#define UIKEYBOARDCAMERAVIEWCONTROLLER_H

@class NSString, NSExtension;
@protocol UIKeyboardCameraRemoteViewControllerHost, UIKeyboardCameraViewControllerDelegate;


#import "UIViewController.h"
#import "UIKeyboardCameraRemoteViewController.h"

@interface UIKeyboardCameraViewController : UIViewController <UIKeyboardCameraRemoteViewControllerHost>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIKeyboardCameraViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIKeyboardCameraRemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (readonly) Class superclass;
@property (nonatomic) NSString *textContentType; // ivar: _textContentType


+(BOOL)isCameraRestricted;
+(BOOL)isEnabled;
+(BOOL)isLiveTextEnabled;
+(BOOL)isSupportedByDevice;
+(void)_updateIsCameraRestricted;
-(BOOL)_canShowWhileLocked;
-(id)_backgroundColorForModalFormSheet;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)keyboardCameraDidAccept;
-(void)keyboardCameraDidCancel;
-(void)keyboardCameraDidUpdateString:(id)arg0 ;
-(void)prepareWithCompletion:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif