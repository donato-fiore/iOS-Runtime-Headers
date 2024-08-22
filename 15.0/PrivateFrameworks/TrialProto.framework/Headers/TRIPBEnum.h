// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPBENUM_H
#define TRIPBENUM_H

@class NSMutableArray, NSString;


#import "TRIPBMessage.h"
#import "TRIPBSourceContext.h"

@interface TRIPBEnum : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *enumvalueArray;
@property (readonly, nonatomic) NSUInteger enumvalueArray_Count;
@property (nonatomic) BOOL hasSourceContext;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) NSUInteger optionsArray_Count;
@property (retain, nonatomic) TRIPBSourceContext *sourceContext;
@property (nonatomic) int syntax;


+(id)descriptor;


@end


#endif