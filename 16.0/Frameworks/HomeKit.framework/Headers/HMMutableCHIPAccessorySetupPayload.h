// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMUTABLECHIPACCESSORYSETUPPAYLOAD_H
#define HMMUTABLECHIPACCESSORYSETUPPAYLOAD_H

@class NSNumber, NSString;


#import "HMCHIPAccessorySetupPayload.h"

@interface HMMutableCHIPAccessorySetupPayload : HMCHIPAccessorySetupPayload

@property (copy, nonatomic) NSNumber *productID;
@property (nonatomic) BOOL requiresCustomFlow;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *setupPayloadString;
@property (copy, nonatomic) NSNumber *vendorID;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif