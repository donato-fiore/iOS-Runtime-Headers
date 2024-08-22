// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSDITTOHOSTVIEWCONTROLLER_H
#define SSDITTOHOSTVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol SSRemoteViewControllerServiceToHostInterface, SSDittoHostViewControllerDelegate;



@interface SSDittoHostViewController : UIRemoteViewController <SSRemoteViewControllerServiceToHostInterface>



@property (weak, nonatomic) NSObject<SSDittoHostViewControllerDelegate> *delegate; // ivar: _delegate


+(BOOL)__shouldHostRemoteTextEffectsWindow;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(BOOL)becomeFirstResponder;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_serviceProxy;
-(void)dismiss;
-(void)dismissScreenshotExperience;
-(void)screenshotExperienceHasDismissed;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif