// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFONTPICKERREMOTEVIEWCONTROLLER_H
#define _UIFONTPICKERREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol _UIFontPickerRemoteViewControllerHost;



@interface _UIFontPickerRemoteViewController : UIRemoteViewController <_UIFontPickerRemoteViewControllerHost>



@property (weak, nonatomic) NSObject<_UIFontPickerRemoteViewControllerHost> *_delegate; // ivar: _delegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)__shouldHostedWindowMoveBetweenSecureAndInsecureMainScreen;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(void)_pickerDidCancel;
-(void)_pickerDidSelectFont:(id)arg0 ;


@end


#endif