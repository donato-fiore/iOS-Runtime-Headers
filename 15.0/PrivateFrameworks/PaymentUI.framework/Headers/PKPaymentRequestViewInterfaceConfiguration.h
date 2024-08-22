// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTREQUESTVIEWINTERFACECONFIGURATION_H
#define PKPAYMENTREQUESTVIEWINTERFACECONFIGURATION_H

@class NSString, PKPaymentRequest;

#import <Foundation/Foundation.h>


@interface PKPaymentRequestViewInterfaceConfiguration : NSObject

@property (retain, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSString *localizedApplicationName; // ivar: _localizedApplicationName
@property (retain, nonatomic) NSString *relevantPassUniqueID; // ivar: _relevantPassUniqueID
@property (retain, nonatomic) PKPaymentRequest *request; // ivar: _request


-(id)init;


@end


#endif