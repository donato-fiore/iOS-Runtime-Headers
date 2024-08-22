// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDBLEBROADCASTEVENTKEYGENERATION_H
#define HMDBLEBROADCASTEVENTKEYGENERATION_H

@class HMMLogEvent, NSString;
@protocol HMDAWDLogEvent;


#import "HMDAccessory.h"

@interface HMDBLEBroadcastEventKeyGeneration : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, nonatomic) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int reason; // ivar: _reason
@property (readonly) Class superclass;


+(id)broadcastKeyGenerationEventForAccessory:(id)arg0 reason:(int)arg1 ;
-(id)initBroadcastKeyGenerationEventForAccessory:(id)arg0 reason:(int)arg1 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif