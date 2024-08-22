// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRUSTCERTIFICATEVIEWCONTROLLER_H
#define TRUSTCERTIFICATEVIEWCONTROLLER_H

@class UINavigationController;
@protocol TrustCertificateViewControllerDelegate;


#import "CertificateViewController.h"

@interface TrustCertificateViewController : UINavigationController

@property (nonatomic) BOOL allowCertificateTrust; // ivar: _allowCertificateTrust
@property (retain, nonatomic) CertificateViewController *certificateViewController; // ivar: _certificateViewController
@property (weak, nonatomic) NSObject<TrustCertificateViewControllerDelegate> *trustCertificateDelegate; // ivar: _trustCertificateDelegate


-(id)initWithTrust:(struct __SecTrust *)arg0 action:(int)arg1 delegate:(id)arg2 ;
-(id)initWithTrust:(struct __SecTrust *)arg0 action:(int)arg1 delegate:(id)arg2 allowTrust:(BOOL)arg3 ;
-(id)initWithTrustCertificateDelegate:(id)arg0 ;
-(id)initWithTrustCertificateDelegate:(id)arg0 allowTrust:(BOOL)arg1 ;
-(void)_accept;
-(void)_cancel;
-(void)_dismissWithResult:(int)arg0 ;
-(void)_setupNavItem;
-(void)didReceiveMemoryWarning;
-(void)setCertificateInfo:(id)arg0 issuer:(id)arg1 purpose:(id)arg2 expiration:(id)arg3 isRoot:(BOOL)arg4 properties:(id)arg5 action:(int)arg6 ;
-(void)setShowCertificateButton:(BOOL)arg0 localizedTitle:(id)arg1 localizedDescription:(id)arg2 destructive:(BOOL)arg3 handler:(id)arg4 ;


@end


#endif