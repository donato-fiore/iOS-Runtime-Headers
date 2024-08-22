// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPBFIELDOPTIONS_H
#define TRIPBFIELDOPTIONS_H

@class NSMutableArray;


#import "TRIPBMessage.h"

@interface TRIPBFieldOptions : TRIPBMessage

@property (nonatomic) int ctype;
@property (nonatomic) BOOL deprecated;
@property (nonatomic) BOOL hasCtype;
@property (nonatomic) BOOL hasDeprecated;
@property (nonatomic) BOOL hasJstype;
@property (nonatomic) BOOL hasLazy;
@property (nonatomic) BOOL hasPacked;
@property (nonatomic) BOOL hasWeak;
@property (nonatomic) int jstype;
@property (nonatomic) BOOL lazy;
@property (nonatomic) BOOL packed;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (readonly, nonatomic) NSUInteger uninterpretedOptionArray_Count;
@property (nonatomic) BOOL weak;


+(id)descriptor;


@end


#endif