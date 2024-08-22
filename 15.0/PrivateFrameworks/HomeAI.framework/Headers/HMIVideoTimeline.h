// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOTIMELINE_H
#define HMIVIDEOTIMELINE_H

@class HMFObject;


#import "HMIVideoEventBuffer.h"

@interface HMIVideoTimeline : HMFObject {
    HMIVideoEventBuffer *_buffer;
}




-(CGFloat)timeIntervalSinceDateAtTime:(struct ? )arg0 ;
-(id)dateAtTime:(struct ? )arg0 ;
-(id)initWithMaxCapacity:(NSInteger)arg0 ;
-(void)addDate:(id)arg0 atTime:(struct ? )arg1 ;


@end


#endif