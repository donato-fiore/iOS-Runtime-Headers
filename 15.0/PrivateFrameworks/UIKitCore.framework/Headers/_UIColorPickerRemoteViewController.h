// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLORPICKERREMOTEVIEWCONTROLLER_H
#define _UICOLORPICKERREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol _UIColorPickerRemoteViewControllerHost;



@interface _UIColorPickerRemoteViewController : UIRemoteViewController <_UIColorPickerRemoteViewControllerHost>



@property (weak, nonatomic) NSObject<_UIColorPickerRemoteViewControllerHost> *_delegate; // ivar: _delegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)__shouldHostedWindowMoveBetweenSecureAndInsecureMainScreen;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(void)_colorPickerDidFinish;
-(void)_pickerDidDismissEyedropper;
-(void)_pickerDidFloatEyedropper;
-(void)_pickerDidSelectColor:(id)arg0 colorspace:(id)arg1 isVolatile:(BOOL)arg2 ;
-(void)_pickerDidShowEyedropper;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif