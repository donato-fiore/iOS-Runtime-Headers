// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GPBVALUE_H
#define GPBVALUE_H

@class NSString;


#import "GPBMessage.h"
#import "GPBListValue.h"
#import "GPBStruct.h"

@interface GPBValue : GPBMessage

@property (nonatomic) BOOL boolValue;
@property (readonly, nonatomic) int kindOneOfCase;
@property (retain, nonatomic) GPBListValue *listValue;
@property (nonatomic) int nullValue;
@property (nonatomic) CGFloat numberValue;
@property (copy, nonatomic) NSString *stringValue;
@property (retain, nonatomic) GPBStruct *structValue;


+(id)descriptor;


@end


#endif