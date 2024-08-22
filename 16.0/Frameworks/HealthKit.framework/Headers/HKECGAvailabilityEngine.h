// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKECGAVAILABILITYENGINE_H
#define HKECGAVAILABILITYENGINE_H


#import <Foundation/Foundation.h>


@interface HKECGAvailabilityEngine : NSObject



+(id)shouldAdvertiseECG2WithSupportedRegion:(BOOL)arg0 meetsAgeRequirement:(BOOL)arg1 backgroundDeliveredNotAdvertised:(BOOL)arg2 prevOnboarded:(BOOL)arg3 watchCapable:(BOOL)arg4 phoneCapable:(BOOL)arg5 isTinker:(BOOL)arg6 ;


@end


#endif