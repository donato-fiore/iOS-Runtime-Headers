// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTSETUPFLOWPROVISIONCONFIGURATION_H
#define PKPEERPAYMENTSETUPFLOWPROVISIONCONFIGURATION_H

@class NSString;
@protocol PKPeerPaymentSetupFlowControllerConfiguration, PKPaymentSetupViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentSetupFlowProvisionConfiguration : NSObject <PKPeerPaymentSetupFlowControllerConfiguration>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *setupDelegate; // ivar: _setupDelegate
@property (readonly) Class superclass;


-(NSUInteger)peerPaymentSetupConfigurationType;
-(id)initWithSetupDelegate:(id)arg0 ;


@end


#endif