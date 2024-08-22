// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOFRAMEANALYZERRESULT_H
#define HMIVIDEOFRAMEANALYZERRESULT_H

@class HMFObject, NSSet, NSString, NSArray;
@protocol HMIVideoEvent;


#import "HMIVideoFrame.h"

@interface HMIVideoFrameAnalyzerResult : HMFObject <HMIVideoEvent>



@property (readonly) NSSet *backgroundEvents; // ivar: _backgroundEvents
@property (readonly) ? backgroundTimeStamp; // ivar: _backgroundTimeStamp
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSSet *events; // ivar: _events
@property (readonly) HMIVideoFrame *frame; // ivar: _frame
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *motionDetections; // ivar: _motionDetections
@property (readonly) CGRect regionOfInterest; // ivar: _regionOfInterest
@property (readonly) Class superclass;
@property (readonly) ? time;


-(id)initWithFrame:(id)arg0 events:(id)arg1 backgroundEvents:(id)arg2 backgroundTimeStamp:(struct ? )arg3 regionOfInterest:(struct CGRect )arg4 motionDetections:(id)arg5 ;


@end


#endif