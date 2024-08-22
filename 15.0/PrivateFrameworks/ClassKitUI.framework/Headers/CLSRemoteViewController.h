// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSREMOTEVIEWCONTROLLER_H
#define CLSREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString, UIWindow;
@protocol CLSRemoteViewControllerInterface;



@interface CLSRemoteViewController : UIRemoteViewController <CLSRemoteViewControllerInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIWindow *previousKeyWindow; // ivar: _previousKeyWindow
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWindow *window; // ivar: _window


+(id)exportedInterface;
+(id)instantiateViewControllerWithInputItems:(id)arg0 identifier:(id)arg1 connectionHandler:(id)arg2 ;
+(id)serviceViewControllerInterface;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)presentModallyInNewWindowWithCompletion:(id)arg0 ;
-(void)viewDidInvalidateIntrinsicContentSize;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif