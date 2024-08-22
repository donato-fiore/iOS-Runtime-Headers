// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIPBENUMDESCRIPTORPROTO_H
#define TRIPBENUMDESCRIPTORPROTO_H

@class NSString, NSMutableArray;


#import "TRIPBMessage.h"
#import "TRIPBEnumOptions.h"

@interface TRIPBEnumDescriptorProto : TRIPBMessage

@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasOptions;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) TRIPBEnumOptions *options;
@property (retain, nonatomic) NSMutableArray *reservedNameArray;
@property (readonly, nonatomic) NSUInteger reservedNameArray_Count;
@property (retain, nonatomic) NSMutableArray *reservedRangeArray;
@property (readonly, nonatomic) NSUInteger reservedRangeArray_Count;
@property (retain, nonatomic) NSMutableArray *valueArray;
@property (readonly, nonatomic) NSUInteger valueArray_Count;


+(id)descriptor;


@end


#endif