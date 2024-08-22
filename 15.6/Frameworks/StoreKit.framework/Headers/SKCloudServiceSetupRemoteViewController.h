// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKCLOUDSERVICESETUPREMOTEVIEWCONTROLLER_H
#define SKCLOUDSERVICESETUPREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol SKCloudServiceSetupExtensionClientInterface, SKCloudServiceSetupRemoteViewControllerDelegate;



@interface SKCloudServiceSetupRemoteViewController : UIRemoteViewController <SKCloudServiceSetupExtensionClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKCloudServiceSetupRemoteViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)didFinishLoadingWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)dismissCloudServiceSetupViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissSafariViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)overrideCreditCardPresentationWithCompletion:(id)arg0 ;
-(void)overrideRedeemCameraPerformAction:(NSInteger)arg0 withObject:(id)arg1 ;
-(void)presentSafariViewControllerWithURL:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif