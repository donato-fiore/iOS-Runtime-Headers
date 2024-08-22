// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPBDESCRIPTORPROTO_RESERVEDRANGE_H
#define TRIPBDESCRIPTORPROTO_RESERVEDRANGE_H



#import "TRIPBMessage.h"

@interface TRIPBDescriptorProto_ReservedRange : TRIPBMessage

@property (nonatomic) int end;
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) BOOL hasStart;
@property (nonatomic) int start;


+(id)descriptor;


@end


#endif