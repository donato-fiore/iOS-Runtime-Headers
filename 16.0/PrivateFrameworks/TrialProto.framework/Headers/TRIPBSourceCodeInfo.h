// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIPBSOURCECODEINFO_H
#define TRIPBSOURCECODEINFO_H

@class NSMutableArray;


#import "TRIPBMessage.h"

@interface TRIPBSourceCodeInfo : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *locationArray;
@property (readonly, nonatomic) NSUInteger locationArray_Count;


+(id)descriptor;


@end


#endif