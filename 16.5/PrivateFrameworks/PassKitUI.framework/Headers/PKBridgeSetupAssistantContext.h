// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKBRIDGESETUPASSISTANTCONTEXT_H
#define PKBRIDGESETUPASSISTANTCONTEXT_H

@class NSString, NSData, FAFamilyMember;
@protocol PKPaymentSetupAssistantBridgeContextProtocol, PKPassLibraryDataProvider, PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate;


#import "PKSetupAssistantContext.h"

@interface PKBridgeSetupAssistantContext : PKSetupAssistantContext <PKPaymentSetupAssistantBridgeContextProtocol>



@property (retain, nonatomic) NSObject<PKPassLibraryDataProvider> *dataProvider; // ivar: _dataProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *externalizedContext;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FAFamilyMember *pairingFamilyMember; // ivar: _pairingFamilyMember
@property (retain, nonatomic) FAFamilyMember *parentFamilyMember; // ivar: _parentFamilyMember
@property (weak, nonatomic) NSObject<PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate> *peerPaymentDelegate; // ivar: _peerPaymentDelegate
@property (readonly, nonatomic) NSUInteger setupAssistant;
@property (readonly) Class superclass;


-(void)extendableDescription:(id)arg0 ;


@end


#endif