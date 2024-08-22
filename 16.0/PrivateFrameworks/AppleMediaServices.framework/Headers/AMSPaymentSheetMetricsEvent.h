// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSPAYMENTSHEETMETRICSEVENT_H
#define AMSPAYMENTSHEETMETRICSEVENT_H



#import "AMSMetricsEvent.h"

@interface AMSPaymentSheetMetricsEvent : AMSMetricsEvent



+(id)_timestamp;
+(id)dictionaryForBiometricMatchState:(NSInteger)arg0 didBiometricsLockout:(BOOL)arg1 biometricsType:(NSInteger)arg2 ;
+(id)dictionaryForCancellationEvent:(NSUInteger)arg0 didBiometricsLockout:(BOOL)arg1 ;
+(id)dictionaryForUserAction:(NSInteger)arg0 didBiometricsLockout:(BOOL)arg1 ;
-(void)addBiometricMatchState:(NSInteger)arg0 ;
-(void)addBiometricsState:(NSInteger)arg0 ;
-(void)addClientMetadataForPaymentSheetRequest:(id)arg0 ;
-(void)addClientMetadataForPurchaseInfo:(id)arg0 metricsDictionary:(id)arg1 ;
-(void)addDualActionSuccess:(BOOL)arg0 ;
-(void)addUserActions:(id)arg0 ;


@end


#endif