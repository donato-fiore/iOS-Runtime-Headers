// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTKTRACETAPMESSAGE_H
#define DTKTRACETAPMESSAGE_H

@class NSDictionary;
@protocol NSSecureCoding;


#import "DTTapMessage.h"

@interface DTKTraceTapMessage : DTTapMessage <NSSecureCoding>



@property (nonatomic) NSUInteger coreCount;
@property (nonatomic) NSUInteger logicalProcessorCore;
@property (nonatomic) NSUInteger recordCount;
@property (copy, nonatomic) NSDictionary *sessionMetadata;
@property (nonatomic) unsigned int tapVersion;
@property (nonatomic) NSUInteger triggerCount;
@property (nonatomic) NSUInteger triggerIndex;
@property (copy, nonatomic) NSDictionary *triggerMetadata;


+(BOOL)supportsSecureCoding;


@end


#endif