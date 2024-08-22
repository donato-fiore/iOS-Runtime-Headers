// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMUSERLISTREMOTEVIEWCONTROLLER_H
#define HMUSERLISTREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol HMUserManagementRemoteHost;



@interface HMUserListRemoteViewController : UIRemoteViewController <HMUserManagementRemoteHost>



@property (weak, nonatomic) NSObject<HMUserManagementRemoteHost> *delegate; // ivar: _delegate


+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(id)arg0 ;
+(id)serviceViewControllerInterface;
-(void)userManagementDidFinishWithError:(id)arg0 ;
-(void)userManagementDidLoad;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif