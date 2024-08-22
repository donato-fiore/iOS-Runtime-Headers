// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDCAMERAREMOTEVIEWCONTROLLER_H
#define UIKEYBOARDCAMERAREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol UIKeyboardCameraRemoteViewControllerHost;



@interface UIKeyboardCameraRemoteViewController : UIRemoteViewController <UIKeyboardCameraRemoteViewControllerHost>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIKeyboardCameraRemoteViewControllerHost> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(void)keyboardCameraDidAccept;
-(void)keyboardCameraDidCancel;
-(void)keyboardCameraDidUpdateString:(id)arg0 ;


@end


#endif