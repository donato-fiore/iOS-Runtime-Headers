// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKECGAVAILABILITYENGINE_H
#define HKECGAVAILABILITYENGINE_H


#import <Foundation/Foundation.h>


@interface HKECGAvailabilityEngine : NSObject



+(id)shouldAdvertiseECG2WithSupportedRegion:(BOOL)arg0 meetsAgeRequirement:(BOOL)arg1 prevOnboarded:(BOOL)arg2 watchCapable:(BOOL)arg3 phoneCapable:(BOOL)arg4 isTinker:(BOOL)arg5 ;


@end


#endif