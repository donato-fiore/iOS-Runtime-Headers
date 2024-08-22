// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GPBFIELDMASK_H
#define GPBFIELDMASK_H

@class NSMutableArray;


#import "GPBMessage.h"

@interface GPBFieldMask : GPBMessage

@property (retain, nonatomic) NSMutableArray *pathsArray;
@property (readonly, nonatomic) NSUInteger pathsArray_Count;


+(id)descriptor;


@end


#endif