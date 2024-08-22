// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPBLISTVALUE_H
#define TRIPBLISTVALUE_H

@class NSMutableArray;


#import "TRIPBMessage.h"

@interface TRIPBListValue : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *valuesArray;
@property (readonly, nonatomic) NSUInteger valuesArray_Count;


+(id)descriptor;


@end


#endif