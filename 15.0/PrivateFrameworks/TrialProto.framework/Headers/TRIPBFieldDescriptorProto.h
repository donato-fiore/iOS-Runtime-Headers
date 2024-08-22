// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPBFIELDDESCRIPTORPROTO_H
#define TRIPBFIELDDESCRIPTORPROTO_H

@class NSString;


#import "TRIPBMessage.h"
#import "TRIPBFieldOptions.h"

@interface TRIPBFieldDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *defaultValue;
@property (copy, nonatomic) NSString *extendee;
@property (nonatomic) BOOL hasDefaultValue;
@property (nonatomic) BOOL hasExtendee;
@property (nonatomic) BOOL hasJsonName;
@property (nonatomic) BOOL hasLabel;
@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasNumber;
@property (nonatomic) BOOL hasOneofIndex;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasTypeName;
@property (copy, nonatomic) NSString *jsonName;
@property (nonatomic) int label;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int number;
@property (nonatomic) int oneofIndex;
@property (retain, nonatomic) TRIPBFieldOptions *options;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *typeName;


+(id)descriptor;


@end


#endif