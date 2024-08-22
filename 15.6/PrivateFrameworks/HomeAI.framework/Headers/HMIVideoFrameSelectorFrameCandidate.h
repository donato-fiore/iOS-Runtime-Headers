// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOFRAMESELECTORFRAMECANDIDATE_H
#define HMIVIDEOFRAMESELECTORFRAMECANDIDATE_H

@class HMFObject, NSArray;



@interface HMIVideoFrameSelectorFrameCandidate : HMFObject

@property (readonly) NSArray *motionDetections; // ivar: _motionDetections
@property (readonly) *opaqueCMSampleBuffer sbuf; // ivar: _sbuf
@property (readonly) float score; // ivar: _score


-(id)description;
-(id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 score:(float)arg1 motionDetections:(id)arg2 ;
-(void)dealloc;


@end


#endif