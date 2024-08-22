// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSECURITYCAPABILITIESCONTROLLER_H
#define PKSECURITYCAPABILITIESCONTROLLER_H

@class AKAppleIDAuthenticationContext, PKCloudStoreService;

#import <Foundation/Foundation.h>


@interface PKSecurityCapabilitiesController : NSObject {
    AKAppleIDAuthenticationContext *_authContext;
    PKCloudStoreService *_cloudService;
}


@property (readonly, nonatomic) NSInteger context; // ivar: _context
@property (readonly, nonatomic) NSUInteger feature; // ivar: _feature
@property (readonly, nonatomic) NSUInteger securityRequirements; // ivar: _securityRequirements


+(id)displayableErrorForErrorCode:(NSUInteger)arg0 ;
-(BOOL)isHSA2Enabled;
-(id)_authenticationReason;
-(id)_createAuthContext;
-(id)_genericDisplayableError;
-(id)_missingTLKsAlertController;
-(id)initWithRequirements:(NSUInteger)arg0 context:(NSInteger)arg1 ;
-(id)initWithRequirements:(NSUInteger)arg0 feature:(NSUInteger)arg1 context:(NSInteger)arg2 ;
-(void)_isEnabledForSecuirtyRequirements:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)_isManateeCapableWithCompletion:(id)arg0 ;
-(void)_isMissingTLKsWithCompletion:(id)arg0 ;
-(void)_presentDeviceToDeviceEncryptionRepairFlow:(id)arg0 completion:(id)arg1 ;
-(void)_presentManateeSecurityFlowWithPresentingViewController:(id)arg0 suppressHSA2Alert:(BOOL)arg1 completion:(id)arg2 ;
-(void)_presentMissingTLKsAlertWithPresentingViewController:(id)arg0 completion:(id)arg1 ;
-(void)_presentPasswordPromptWithPresentingViewController:(id)arg0 completion:(id)arg1 ;
-(void)_resetApplyPayManateeViewWithCompletion:(id)arg0 ;
-(void)isEnabledForSecuirtyRequirementsWithCompletion:(id)arg0 ;
-(void)presentSecurityRepairFlowWithPresentingViewController:(id)arg0 completion:(id)arg1 ;
-(void)presentSecurityRepairFlowWithPresentingViewController:(id)arg0 suppressHSA2Alert:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif