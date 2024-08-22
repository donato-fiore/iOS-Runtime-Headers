// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPBROADCASTACTIVITYHOSTVIEWCONTROLLER_H
#define RPBROADCASTACTIVITYHOSTVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol RPBroadcastActivityCommunicationHostProtocol;


#import "RPBroadcastActivityViewController.h"

@interface RPBroadcastActivityHostViewController : UIRemoteViewController <RPBroadcastActivityCommunicationHostProtocol>



@property (weak, nonatomic) RPBroadcastActivityViewController *broadcastActivityViewController; // ivar: _broadcastActivityViewController


-(NSInteger)modalPresentationStyle;
-(NSUInteger)popoverArrowDirection;
-(struct CGRect )popoverControllerSourceRect;
-(void)extensionDidFinishWithLaunchURL:(id)arg0 broadcastURL:(id)arg1 extensionBundleID:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)presentationInfoWithCompletion:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif