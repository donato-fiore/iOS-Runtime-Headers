// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DADEVICEACCESSANALYTICS_H
#define DADEVICEACCESSANALYTICS_H


#import <Foundation/Foundation.h>


@interface DADeviceAccessAnalytics : NSObject



+(void)markSessionActivationForPid:(id)arg0 atTime:(id)arg1 ;
+(void)markSessionInvalidationForPid:(id)arg0 atTime:(id)arg1 ;
+(void)markState:(id)arg0 forDeviceId:(id)arg1 atTime:(id)arg2 ;
+(void)sendAnalytics:(id)arg0 forEvent:(id)arg1 ;
+(void)sendAnalyticsInfo:(id)arg0 forEvent:(id)arg1 withDeviceIdentifier:(id)arg2 ;


@end


#endif