// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPBDESCRIPTORPROTO_EXTENSIONRANGE_H
#define TRIPBDESCRIPTORPROTO_EXTENSIONRANGE_H



#import "TRIPBMessage.h"
#import "TRIPBExtensionRangeOptions.h"

@interface TRIPBDescriptorProto_ExtensionRange : TRIPBMessage

@property (nonatomic) int end;
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) BOOL hasStart;
@property (retain, nonatomic) TRIPBExtensionRangeOptions *options;
@property (nonatomic) int start;


+(id)descriptor;


@end


#endif