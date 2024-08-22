// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QUERYRESPONSE_DEVICEWITNESS_H
#define QUERYRESPONSE_DEVICEWITNESS_H

@class NSMutableArray;


#import "GPBMessage.h"
#import "VRFWitness.h"

@interface QueryResponse_DeviceWitness : GPBMessage

@property (retain, nonatomic) NSMutableArray *clientDataWitnessArray;
@property (readonly, nonatomic) NSUInteger clientDataWitnessArray_Count;
@property (retain, nonatomic) VRFWitness *deviceIdWitness;
@property (nonatomic) BOOL hasDeviceIdWitness;


+(id)descriptor;


@end


#endif