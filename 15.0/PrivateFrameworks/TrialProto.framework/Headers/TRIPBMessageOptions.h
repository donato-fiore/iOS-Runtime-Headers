// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPBMESSAGEOPTIONS_H
#define TRIPBMESSAGEOPTIONS_H

@class NSMutableArray;


#import "TRIPBMessage.h"

@interface TRIPBMessageOptions : TRIPBMessage

@property (nonatomic) BOOL deprecated;
@property (nonatomic) BOOL hasDeprecated;
@property (nonatomic) BOOL hasMapEntry;
@property (nonatomic) BOOL hasMessageSetWireFormat;
@property (nonatomic) BOOL hasNoStandardDescriptorAccessor;
@property (nonatomic) BOOL mapEntry;
@property (nonatomic) BOOL messageSetWireFormat;
@property (nonatomic) BOOL noStandardDescriptorAccessor;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (readonly, nonatomic) NSUInteger uninterpretedOptionArray_Count;


+(id)descriptor;


@end


#endif