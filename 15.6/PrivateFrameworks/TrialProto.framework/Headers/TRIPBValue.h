// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPBVALUE_H
#define TRIPBVALUE_H

@class NSString;


#import "TRIPBMessage.h"
#import "TRIPBListValue.h"
#import "TRIPBStruct.h"

@interface TRIPBValue : TRIPBMessage

@property (nonatomic) BOOL boolValue;
@property (readonly, nonatomic) int kindOneOfCase;
@property (retain, nonatomic) TRIPBListValue *listValue;
@property (nonatomic) int nullValue;
@property (nonatomic) CGFloat numberValue;
@property (copy, nonatomic) NSString *stringValue;
@property (retain, nonatomic) TRIPBStruct *structValue;


+(id)descriptor;


@end


#endif