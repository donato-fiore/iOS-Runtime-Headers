// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTSETUPFLOWCONTROLLERASSOCIATEDACCOUNTCONFIGURATION_H
#define PKPEERPAYMENTSETUPFLOWCONTROLLERASSOCIATEDACCOUNTCONFIGURATION_H

@class NSString, PKFamilyMember, PKPeerPaymentPreferences;
@protocol PKPeerPaymentSetupFlowControllerConfiguration, PKPeerPaymentAssociatedAccountSetupDelegate;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration : NSObject <PKPeerPaymentSetupFlowControllerConfiguration>



@property (readonly, nonatomic) NSObject<PKPeerPaymentAssociatedAccountSetupDelegate> *associatedAccountSetupDelegate; // ivar: _associatedAccountSetupDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKFamilyMember *familyMember; // ivar: _familyMember
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (readonly, nonatomic) NSInteger setupType; // ivar: _setupType
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPeerPaymentPreferences *updatedPreferences; // ivar: _updatedPreferences


-(NSUInteger)peerPaymentSetupConfigurationType;
-(id)initWithFamilyMember:(id)arg0 associatedAccountSetupDelegate:(id)arg1 setupType:(NSInteger)arg2 ;


@end


#endif