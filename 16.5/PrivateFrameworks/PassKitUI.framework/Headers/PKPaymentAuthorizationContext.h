// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTAUTHORIZATIONCONTEXT_H
#define PKPAYMENTAUTHORIZATIONCONTEXT_H

@class NSString, PKPaymentSheetExperiment, PKPaymentRequest;

#import <Foundation/Foundation.h>


@interface PKPaymentAuthorizationContext : NSObject

@property (readonly, nonatomic) NSString *hostApplicationIdentifier; // ivar: _hostApplicationIdentifier
@property (readonly, nonatomic) NSString *hostBundleIdentifier; // ivar: _hostBundleIdentifier
@property (readonly, nonatomic) NSString *hostIdentifier; // ivar: _hostIdentifier
@property (readonly, nonatomic) NSString *hostLocalizedAppName; // ivar: _hostLocalizedAppName
@property (readonly, nonatomic) NSString *hostTeamID; // ivar: _hostTeamID
@property (readonly, nonatomic) PKPaymentSheetExperiment *paymentSheetExperiment; // ivar: _paymentSheetExperiment
@property (readonly, nonatomic) PKPaymentRequest *request; // ivar: _request


-(id)initWithUserInfo:(id)arg0 ;
-(id)sanitizeString:(id)arg0 ;


@end


#endif