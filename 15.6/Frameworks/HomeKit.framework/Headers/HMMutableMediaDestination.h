// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMMUTABLEMEDIADESTINATION_H
#define HMMUTABLEMEDIADESTINATION_H

@class NSUUID;


#import "HMMediaDestination.h"

@interface HMMutableMediaDestination : HMMediaDestination

@property (copy) NSUUID *audioGroupIdentifier;
@property NSUInteger supportedOptions;


+(id)logCategory;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif