// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPLEAF_DEVICE_H
#define MAPLEAF_DEVICE_H

@class NSMutableArray, NSData;


#import "GPBMessage.h"

@interface MapLeaf_Device : GPBMessage

@property (retain, nonatomic) NSMutableArray *clientDataArray;
@property (readonly, nonatomic) NSUInteger clientDataArray_Count;
@property (copy, nonatomic) NSData *deviceIdVrfoutput;


+(id)descriptor;


@end


#endif