// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIVIDEOFRAMETRACKERFRAMECANDIDATE_H
#define HMIVIDEOFRAMETRACKERFRAMECANDIDATE_H

@class HMFObject, NSArray, NSSet;



@interface HMIVideoFrameTrackerFrameCandidate : HMFObject

@property (readonly) NSArray *motionDetections; // ivar: _motionDetections
@property (readonly) *opaqueCMSampleBuffer sbuf; // ivar: _sbuf
@property (readonly) float score; // ivar: _score
@property (readonly) NSSet *tracks; // ivar: _tracks


-(id)description;
-(id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 score:(float)arg1 motionDetections:(id)arg2 tracks:(id)arg3 ;
-(void)dealloc;


@end


#endif