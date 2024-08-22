// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSFRAUDREPORT_H
#define AMSFRAUDREPORT_H

@class NSString;
@protocol AMSBagConsumer_Project, AMSBagConsumer;

#import <Foundation/Foundation.h>


@interface AMSFraudReport : NSObject <AMSBagConsumer_Project, AMSBagConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_containsCallbackFraudReportHeaders:(id)arg0 ;
+(BOOL)_containsFraudReportHeaders:(id)arg0 ;
+(BOOL)_isCallbackFraudReportStatusCode:(NSInteger)arg0 ;
+(BOOL)_isFraudReportStatusCode:(NSInteger)arg0 ;
+(BOOL)isFeatureSupported;
+(id)_handleCallbackFraudReportResponse:(id)arg0 bag:(id)arg1 ;
+(id)_handleFraudReportResponse:(id)arg0 bag:(id)arg1 ;
+(id)_signatureForRequest:(id)arg0 signingKeyRef:(struct __SecKey *)arg1 ;
+(id)addDeviceIdentityCertificateAndSignatureToRequest:(id)arg0 parameters:(id)arg1 bag:(id)arg2 ;
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
+(id)handleResponse:(id)arg0 bag:(id)arg1 ;
+(void)_performCallbackWithURL:(id)arg0 headers:(id)arg1 bag:(id)arg2 ;
+(void)addRequiredBagKeysToAggregator:(id)arg0 ;


@end


#endif