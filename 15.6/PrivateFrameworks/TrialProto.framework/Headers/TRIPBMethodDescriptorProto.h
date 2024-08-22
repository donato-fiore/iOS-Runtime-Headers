// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPBMETHODDESCRIPTORPROTO_H
#define TRIPBMETHODDESCRIPTORPROTO_H

@class NSString;


#import "TRIPBMessage.h"
#import "TRIPBMethodOptions.h"

@interface TRIPBMethodDescriptorProto : TRIPBMessage

@property (nonatomic) BOOL clientStreaming;
@property (nonatomic) BOOL hasClientStreaming;
@property (nonatomic) BOOL hasInputType;
@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) BOOL hasOutputType;
@property (nonatomic) BOOL hasServerStreaming;
@property (copy, nonatomic) NSString *inputType;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) TRIPBMethodOptions *options;
@property (copy, nonatomic) NSString *outputType;
@property (nonatomic) BOOL serverStreaming;


+(id)descriptor;


@end


#endif