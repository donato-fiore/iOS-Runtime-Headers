// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIPBENUMVALUEDESCRIPTORPROTO_H
#define TRIPBENUMVALUEDESCRIPTORPROTO_H

@class NSString;


#import "TRIPBMessage.h"
#import "TRIPBEnumValueOptions.h"

@interface TRIPBEnumValueDescriptorProto : TRIPBMessage

@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasNumber;
@property (nonatomic) BOOL hasOptions;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int number;
@property (retain, nonatomic) TRIPBEnumValueOptions *options;


+(id)descriptor;


@end


#endif