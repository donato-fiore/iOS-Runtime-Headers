// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTDTRACETAPMESSAGE_H
#define DTDTRACETAPMESSAGE_H

@class NSDictionary;
@protocol NSSecureCoding;


#import "DTTapMessage.h"

@interface DTDTraceTapMessage : DTTapMessage <NSSecureCoding>



@property (nonatomic) unsigned int code;
@property (copy, nonatomic) NSDictionary *runningMetadata; // ivar: _runningMetadata
@property (nonatomic) unsigned int tapVersion;
@property (nonatomic) NSUInteger timestamp;


+(BOOL)supportsSecureCoding;
-(id)sessionMetadata;
-(void)setSessionMetadata:(id)arg0 ;


@end


#endif