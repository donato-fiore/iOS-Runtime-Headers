// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HOMEKITUSERPRESENCECOMPUTEEVENT_H
#define HOMEKITUSERPRESENCECOMPUTEEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDAWDLogEvent;


#import "AWDHomeKitUserPresenceCompute.h"

@interface HomeKitUserPresenceComputeEvent : HMMLogEvent <HMDAWDLogEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AWDHomeKitUserPresenceCompute *metric; // ivar: _metric
@property (readonly) Class superclass;


-(id)init;
-(unsigned int)AWDMessageType;


@end


#endif