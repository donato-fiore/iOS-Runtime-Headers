// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPBDESCRIPTORPROTO_H
#define TRIPBDESCRIPTORPROTO_H

@class NSMutableArray, NSString;


#import "TRIPBMessage.h"
#import "TRIPBMessageOptions.h"

@interface TRIPBDescriptorProto : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *enumTypeArray;
@property (readonly, nonatomic) NSUInteger enumTypeArray_Count;
@property (retain, nonatomic) NSMutableArray *extensionArray;
@property (readonly, nonatomic) NSUInteger extensionArray_Count;
@property (retain, nonatomic) NSMutableArray *extensionRangeArray;
@property (readonly, nonatomic) NSUInteger extensionRangeArray_Count;
@property (retain, nonatomic) NSMutableArray *fieldArray;
@property (readonly, nonatomic) NSUInteger fieldArray_Count;
@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasOptions;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *nestedTypeArray;
@property (readonly, nonatomic) NSUInteger nestedTypeArray_Count;
@property (retain, nonatomic) NSMutableArray *oneofDeclArray;
@property (readonly, nonatomic) NSUInteger oneofDeclArray_Count;
@property (retain, nonatomic) TRIPBMessageOptions *options;
@property (retain, nonatomic) NSMutableArray *reservedNameArray;
@property (readonly, nonatomic) NSUInteger reservedNameArray_Count;
@property (retain, nonatomic) NSMutableArray *reservedRangeArray;
@property (readonly, nonatomic) NSUInteger reservedRangeArray_Count;


+(id)descriptor;


@end


#endif