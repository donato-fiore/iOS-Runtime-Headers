// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSAUTHORIZATIONMETRICSCONTROLLER_H
#define SSAUTHORIZATIONMETRICSCONTROLLER_H


#import <Foundation/Foundation.h>


@interface SSAuthorizationMetricsController : NSObject



+(id)_clientIDForAccount:(id)arg0 orUserID:(id)arg1 ;
+(id)_clientIdForMetrics;
+(id)_dialogEventForBiometricAuthorizationWithDialogId:(id)arg0 buyParams:(id)arg1 matchState:(NSInteger)arg2 topicName:(id)arg3 userAgent:(id)arg4 ;
+(id)_dialogEventForBiometricOptInWithResult:(BOOL)arg0 message:(id)arg1 topicName:(id)arg2 userAgent:(id)arg3 error:(id)arg4 ;
+(id)_dialogEventForPasswordAuthorizationWithDialogId:(id)arg0 buyParams:(id)arg1 topicName:(id)arg2 userAgent:(id)arg3 ;
+(id)_dialogEventForPaymentSheetPresentationErrorWithBuyParams:(id)arg0 error:(id)arg1 ;
+(id)_mtTopicForBuyParams:(id)arg0 ;
+(id)authorizationDialogEventForParameters:(id)arg0 ;
+(id)dialogIdForMetricsDictionary:(id)arg0 ;
+(id)userActionDictionaryForBiometricMatchState:(NSUInteger)arg0 didBiometricsLockout:(BOOL)arg1 ;
+(id)userActionDictionaryForUserAction:(NSInteger)arg0 didBiometricsLockout:(BOOL)arg1 ;


@end


#endif