// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSETUPASSISTANTPEERPAYMENTADDASSOCIATEDACCOUNTVIEWCONTROLLER_H
#define PKSETUPASSISTANTPEERPAYMENTADDASSOCIATEDACCOUNTVIEWCONTROLLER_H

@class NSString;
@protocol PKPeerPaymentAssociatedAccountSetupDelegate, PKSetupAssistantStep, PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate;


#import "PKPeerPaymentAddAssociatedAccountViewController.h"

@interface PKSetupAssistantPeerPaymentAddAssociatedAccountViewController : PKPeerPaymentAddAssociatedAccountViewController <PKPeerPaymentAssociatedAccountSetupDelegate, PKSetupAssistantStep>

 {
    id<PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate> *_setupAssistantDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)bridgeSetupAssistantNeedsToRunReturningRequirements:(*NSUInteger)arg0 ;
+(BOOL)bridgeSetupAssistantNeedsToRunWithContext:(id)arg0 returningRequirements:(*NSUInteger)arg1 ;
+(BOOL)setupAssistantNeedsToRunReturningRequirements:(*NSUInteger)arg0 ;
+(id)defaultWebServiceForContext:(NSInteger)arg0 ;
-(id)initWithPairingFamilyMember:(id)arg0 parentFamilyMember:(id)arg1 webService:(id)arg2 passLibraryDataProvider:(id)arg3 delegate:(id)arg4 context:(NSInteger)arg5 ;
-(void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(id)arg0 ;
-(void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(BOOL)arg0 updatedAccount:(id)arg1 forFamilyMember:(id)arg2 ;
-(void)preflightWithCompletion:(id)arg0 ;


@end


#endif