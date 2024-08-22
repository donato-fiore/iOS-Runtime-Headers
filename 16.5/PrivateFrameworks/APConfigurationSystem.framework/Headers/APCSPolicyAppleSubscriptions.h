// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APCSPOLICYAPPLESUBSCRIPTIONS_H
#define APCSPOLICYAPPLESUBSCRIPTIONS_H

@class NSNumber;


#import "APConfiguration.h"

@interface APCSPolicyAppleSubscriptions : APConfiguration

@property (readonly, nonatomic) NSNumber *blockAdsForSubscribers;


+(id)path;


@end


#endif