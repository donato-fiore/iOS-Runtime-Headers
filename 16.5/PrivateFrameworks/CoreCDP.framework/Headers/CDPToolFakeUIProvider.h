// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPTOOLFAKEUIPROVIDER_H
#define CDPTOOLFAKEUIPROVIDER_H

@class AKInheritanceAccessKey, NSString;
@protocol CDPStateUIProvider;

#import <Foundation/Foundation.h>


@interface CDPToolFakeUIProvider : NSObject <CDPStateUIProvider>



@property (copy, nonatomic) AKInheritanceAccessKey *accessKey; // ivar: _accessKey
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *icsc; // ivar: _icsc
@property (copy, nonatomic) NSString *localSecret; // ivar: _localSecret
@property (copy, nonatomic) NSString *recoveryKey; // ivar: _recoveryKey
@property (copy, nonatomic) NSString *remoteSecret; // ivar: _remoteSecret
@property (readonly) Class superclass;


-(void)cdpContext:(id)arg0 promptForAdoptionOfMultipleICSC:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForBeneficiaryAccessKeyWithCompletion:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForICSCWithIsNumeric:(BOOL)arg1 numericLength:(id)arg2 isRandom:(BOOL)arg3 validator:(id)arg4 ;
-(void)cdpContext:(id)arg0 promptForInteractiveAuthenticationWithCompletion:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForLocalSecretWithCompletion:(id)arg1 ;
-(void)cdpContext:(id)arg0 promptForRecoveryKeyWithSecretValidator:(id)arg1 completion:(id)arg2 ;
-(void)cdpContext:(id)arg0 promptForRecoveryKeyWithValidator:(id)arg1 completion:(id)arg2 ;
-(void)cdpContext:(id)arg0 promptForRemoteSecretWithDevices:(id)arg1 offeringRemoteApproval:(BOOL)arg2 validator:(id)arg3 ;
-(void)cdpRecoveryFlowContext:(id)arg0 promptForRemoteSecretWithDevices:(id)arg1 validator:(id)arg2 ;


@end


#endif