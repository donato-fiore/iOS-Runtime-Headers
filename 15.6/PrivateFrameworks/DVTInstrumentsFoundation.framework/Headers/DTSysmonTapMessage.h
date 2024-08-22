// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTSYSMONTAPMESSAGE_H
#define DTSYSMONTAPMESSAGE_H

@class NSDictionary;
@protocol NSSecureCoding;


#import "DTTapMessage.h"

@interface DTSysmonTapMessage : DTTapMessage <NSSecureCoding>



@property (copy, nonatomic) NSDictionary *runningMetadata; // ivar: _runningMetadata
@property (nonatomic) unsigned int tapVersion;


+(BOOL)supportsSecureCoding;
-(id)sessionMetadata;
-(void)setSessionMetadata:(id)arg0 ;


@end


#endif