// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPSWITCHERPAGESERVICEREMOTEVIEWCONTROLLER_H
#define SBAPPSWITCHERPAGESERVICEREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol _SBUISwitcherPageHostInterface;



@interface SBAppSwitcherPageServiceRemoteViewController : UIRemoteViewController <_SBUISwitcherPageHostInterface>





+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)__shouldRemoteViewControllerFenceOperations;


@end


#endif