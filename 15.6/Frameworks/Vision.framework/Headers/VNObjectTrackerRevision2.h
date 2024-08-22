// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNOBJECTTRACKERREVISION2_H
#define VNOBJECTTRACKERREVISION2_H



#import "VNObjectTracker.h"

@interface VNObjectTrackerRevision2 : VNObjectTracker



+(id)rpnInitQueue;
+(id)rpnTrackQueue;
+(id)rpnTrackerInitModelName;
+(id)rpnTrackerInitProcessingQueueName;
+(id)rpnTrackerTrackModelName;
+(id)rpnTrackerTrackProcessingQueueName;
+(id)serializeRPNInitializationQueue;
+(id)serializeRPNTrackingQueue;
-(id)initWithOptions:(id)arg0 error:(*id)arg1 ;


@end


#endif