// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTRUSTCERTIFICATEVIEWCONTROLLER_H
#define WFTRUSTCERTIFICATEVIEWCONTROLLER_H

@class UIViewController, TrustCertificateViewController, NSString;
@protocol TrustCertificateViewControllerDelegate, WFNetworkView, WFCertificateProviderContext;



@interface WFTrustCertificateViewController : UIViewController <TrustCertificateViewControllerDelegate, WFNetworkView>



@property (retain, nonatomic) TrustCertificateViewController *certViewController; // ivar: _certViewController
@property (retain, nonatomic) NSObject<WFCertificateProviderContext> *credentialsContext; // ivar: _credentialsContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsModalPresentation; // ivar: _wantsModalPresentation


-(id)initWithCertificateProviderContext:(id)arg0 ;
-(void)loadView;
-(void)trustCertificateViewController:(id)arg0 finishedWithReturnCode:(int)arg1 ;


@end


#endif