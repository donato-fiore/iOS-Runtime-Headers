// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPBFILEDESCRIPTORPROTO_H
#define TRIPBFILEDESCRIPTORPROTO_H

@class NSMutableArray, NSString;


#import "TRIPBMessage.h"
#import "TRIPBFileOptions.h"
#import "TRIPBInt32Array.h"
#import "TRIPBSourceCodeInfo.h"

@interface TRIPBFileDescriptorProto : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *dependencyArray;
@property (readonly, nonatomic) NSUInteger dependencyArray_Count;
@property (retain, nonatomic) NSMutableArray *enumTypeArray;
@property (readonly, nonatomic) NSUInteger enumTypeArray_Count;
@property (retain, nonatomic) NSMutableArray *extensionArray;
@property (readonly, nonatomic) NSUInteger extensionArray_Count;
@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) BOOL hasPackage;
@property (nonatomic) BOOL hasSourceCodeInfo;
@property (nonatomic) BOOL hasSyntax;
@property (retain, nonatomic) NSMutableArray *messageTypeArray;
@property (readonly, nonatomic) NSUInteger messageTypeArray_Count;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) TRIPBFileOptions *options;
@property (copy, nonatomic) NSString *package;
@property (retain, nonatomic) TRIPBInt32Array *publicDependencyArray;
@property (readonly, nonatomic) NSUInteger publicDependencyArray_Count;
@property (retain, nonatomic) NSMutableArray *serviceArray;
@property (readonly, nonatomic) NSUInteger serviceArray_Count;
@property (retain, nonatomic) TRIPBSourceCodeInfo *sourceCodeInfo;
@property (copy, nonatomic) NSString *syntax;
@property (retain, nonatomic) TRIPBInt32Array *weakDependencyArray;
@property (readonly, nonatomic) NSUInteger weakDependencyArray_Count;


+(id)descriptor;


@end


#endif