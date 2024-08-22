// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKINGSTORECKREBUILDEVENT_H
#define HMDBACKINGSTORECKREBUILDEVENT_H

@class NSString;
@protocol HMDAWDLogEvent;


#import "HMDHMBLogEvent.h"

@interface HMDBackingStoreCKRebuildEvent : HMDHMBLogEvent <HMDAWDLogEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) int rebuildStatus; // ivar: _rebuildStatus
@property (readonly) Class superclass;


-(id)initWithCloudZoneID:(id)arg0 rebuildStatus:(id)arg1 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif