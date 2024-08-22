// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKBRIDGESETUPASSISTANTCONTEXT_H
#define PKBRIDGESETUPASSISTANTCONTEXT_H

@class FAFamilyMember;
@protocol PKPassLibraryDataProvider, PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate;


#import "PKSetupAssistantContext.h"

@interface PKBridgeSetupAssistantContext : PKSetupAssistantContext

@property (retain, nonatomic) NSObject<PKPassLibraryDataProvider> *dataProvider; // ivar: _dataProvider
@property (retain, nonatomic) FAFamilyMember *pairingFamilyMember; // ivar: _pairingFamilyMember
@property (retain, nonatomic) FAFamilyMember *parentFamilyMember; // ivar: _parentFamilyMember
@property (weak, nonatomic) NSObject<PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate> *peerPaymentDelegate; // ivar: _peerPaymentDelegate


-(void)_updateDescription:(id)arg0 ;


@end


#endif