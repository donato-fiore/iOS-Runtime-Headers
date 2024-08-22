// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENUIHOSTVIEWCONTROLLER_H
#define ENUIHOSTVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol ENUIHostViewControllerProtocol, ENUIRemoteViewControllerProtocol, ENUIHostViewControllerDelegate;



@interface ENUIHostViewController : UIRemoteViewController <ENUIHostViewControllerProtocol>



@property (readonly, nonatomic) NSObject<ENUIRemoteViewControllerProtocol> *_remoteViewControllerProxy;
@property (weak, nonatomic) NSObject<ENUIHostViewControllerDelegate> *delegate; // ivar: _delegate


+(id)exportedInterface;
+(id)requestRemoteViewControllerWithConnectionHandler:(id)arg0 ;
+(id)serviceViewControllerInterface;
-(void)didFinishWithError:(id)arg0 ;
-(void)setPresentationRequest:(id)arg0 ;
-(void)show;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif