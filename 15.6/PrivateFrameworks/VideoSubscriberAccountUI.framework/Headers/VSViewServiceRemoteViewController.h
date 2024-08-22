// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSVIEWSERVICEREMOTEVIEWCONTROLLER_H
#define VSVIEWSERVICEREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol VSViewServiceHostProtocol, VSViewServiceRemoteViewControllerDelegate;



@interface VSViewServiceRemoteViewController : UIRemoteViewController <VSViewServiceHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSViewServiceRemoteViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_didCancelRequest:(id)arg0 ;
-(void)_didChooseAdditionalProvidersForRequest:(id)arg0 ;
-(void)_didChooseProviderWithIdentifier:(id)arg0 vetoHandler:(id)arg1 ;
-(void)_dismissViewController;
-(void)_presentViewController;
-(void)_request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)_request:(id)arg0 didFinishWithResponse:(id)arg1 ;
-(void)dealloc;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif