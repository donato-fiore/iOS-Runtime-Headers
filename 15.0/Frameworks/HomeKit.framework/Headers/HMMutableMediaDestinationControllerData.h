// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMMUTABLEMEDIADESTINATIONCONTROLLERDATA_H
#define HMMUTABLEMEDIADESTINATIONCONTROLLERDATA_H

@class NSArray, NSUUID;


#import "HMMediaDestinationControllerData.h"

@interface HMMutableMediaDestinationControllerData : HMMediaDestinationControllerData

@property (copy) NSArray *availableDestinationIdentifiers;
@property (copy) NSUUID *destinationIdentifier;


+(id)logCategory;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif