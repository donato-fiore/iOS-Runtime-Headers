// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLREMOTECOMPOSEVIEWCONTROLLER_H
#define SLREMOTECOMPOSEVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol SLRemoteComposeViewControllerDelegateProtocol;



@interface SLRemoteComposeViewController : UIRemoteViewController

@property (weak, nonatomic) NSObject<SLRemoteComposeViewControllerDelegateProtocol> *delegate; // ivar: _delegate


-(BOOL)_canShowWhileLocked;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif