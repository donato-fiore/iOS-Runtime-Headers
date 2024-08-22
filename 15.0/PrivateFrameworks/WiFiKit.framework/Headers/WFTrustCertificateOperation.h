// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTRUSTCERTIFICATEOPERATION_H
#define WFTRUSTCERTIFICATEOPERATION_H

@class NSArray, NSString, UIViewController, TrustCertificateViewController;
@protocol TrustCertificateViewControllerDelegate;


#import "WFOperation.h"

@interface WFTrustCertificateOperation : WFOperation <TrustCertificateViewControllerDelegate>



@property (nonatomic) BOOL accepted; // ivar: _accepted
@property (retain, nonatomic) NSArray *certificateChain; // ivar: _certificateChain
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *rootViewController; // ivar: _rootViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) TrustCertificateViewController *trustVc; // ivar: _trustVc


-(id)initWithCertificateChain:(id)arg0 rootViewController:(id)arg1 ;
-(void)start;
-(void)trustCertificateViewController:(id)arg0 finishedWithReturnCode:(int)arg1 ;


@end


#endif