// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWAPICERTIFICATEPROMPTOPERATION_H
#define WFWAPICERTIFICATEPROMPTOPERATION_H

@class NSData, NSString, UINavigationController, WFOtherNetworkViewController, UIViewController, NSArray;
@protocol WFOtherNetworkViewControllerDelegate;


#import "WFOperation.h"
#import "WFNetworkScanRecord.h"

@interface WFWAPICertificatePromptOperation : WFOperation <WFOtherNetworkViewControllerDelegate>



@property (retain, nonatomic) NSData *WAPIIdentityPEMBlob; // ivar: _WAPIIdentityPEMBlob
@property (nonatomic) *__SecIdentity WAPIRootCertificate; // ivar: _WAPIRootCertificate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) WFNetworkScanRecord *network; // ivar: _network
@property (retain, nonatomic) WFOtherNetworkViewController *promptViewController; // ivar: _promptViewController
@property (retain, nonatomic) UIViewController *rootViewController; // ivar: _rootViewController
@property (readonly) Class superclass;
@property (nonatomic) BOOL userCancelled; // ivar: _userCancelled
@property (retain, nonatomic) NSArray *wapiIdentityMapping; // ivar: _wapiIdentityMapping


-(BOOL)otherNetworkViewController:(id)arg0 isValidPassword:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 network:(id)arg1 ;
-(void)finish;
-(void)otherNetworkViewControllerUserDidTapCancel:(id)arg0 ;
-(void)otherNetworkViewControllerUserDidTapJoin:(id)arg0 ;
-(void)start;


@end


#endif