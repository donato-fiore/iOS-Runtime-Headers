// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTREQUESTVIEWINTERFACECONFIGURATION_H
#define PKPAYMENTREQUESTVIEWINTERFACECONFIGURATION_H

@class NSString, PKPaymentHardwareStatus, PKPaymentSheetExperiment, PKPaymentRequest;
@protocol PKPaymentAuthorizationPresenter;

#import <Foundation/Foundation.h>


@interface PKPaymentRequestViewInterfaceConfiguration : NSObject

@property (retain, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSString *localizedApplicationName; // ivar: _localizedApplicationName
@property (retain, nonatomic) PKPaymentHardwareStatus *paymentHardwareStatus; // ivar: _paymentHardwareStatus
@property (retain, nonatomic) PKPaymentSheetExperiment *paymentSheetExperiment; // ivar: _paymentSheetExperiment
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationPresenter> *presenter; // ivar: _presenter
@property (retain, nonatomic) NSString *relevantPassUniqueID; // ivar: _relevantPassUniqueID
@property (retain, nonatomic) PKPaymentRequest *request; // ivar: _request


-(id)init;


@end


#endif