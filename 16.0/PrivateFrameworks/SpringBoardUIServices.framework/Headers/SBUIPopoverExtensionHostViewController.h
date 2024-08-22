// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUIPOPOVEREXTENSIONHOSTVIEWCONTROLLER_H
#define SBUIPOPOVEREXTENSIONHOSTVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol _SBUIPopoverExtensionHostInterface, _SBUIPopoverExtensionHostDelegate;



@interface SBUIPopoverExtensionHostViewController : UIRemoteViewController <_SBUIPopoverExtensionHostInterface>



@property (weak, nonatomic) NSObject<_SBUIPopoverExtensionHostDelegate> *delegate; // ivar: _delegate


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)__shouldRemoteViewControllerFenceOperations;
-(BOOL)_canShowWhileLocked;
-(void)_extensionRequestsDismiss;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif