// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDBACKINGSTORECKOPERATIONZONECOMPLETIONEVENT_H
#define HMDBACKINGSTORECKOPERATIONZONECOMPLETIONEVENT_H

@class NSString;
@protocol HMDAWDLogEvent;


#import "HMDHMBLogEvent.h"

@interface HMDBackingStoreCKOperationZoneCompletionEvent : HMDHMBLogEvent <HMDAWDLogEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif