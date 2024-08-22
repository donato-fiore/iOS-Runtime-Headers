// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBLEBROADCASTEVENTRECEIVED_H
#define HMDBLEBROADCASTEVENTRECEIVED_H

@class HMMLogEvent, NSString;
@protocol HMDAWDLogEvent;


#import "HMDAccessory.h"

@interface HMDBLEBroadcastEventReceived : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, nonatomic) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasExpectedGSN; // ivar: _hasExpectedGSN
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)broadcastEventFromAccessory:(id)arg0 withExpectedGSN:(BOOL)arg1 ;
-(id)initBroadcastEventFromAccessory:(id)arg0 withExpectedGSN:(BOOL)arg1 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif