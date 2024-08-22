// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIPERSONTRACKERMOTIONRECORD_H
#define HMIPERSONTRACKERMOTIONRECORD_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface HMIPersonTrackerMotionRecord : NSObject

@property (readonly) NSArray *motionVectors; // ivar: _motionVectors
@property (readonly) CGRect regionOfInterest; // ivar: _regionOfInterest
@property (readonly) ? time; // ivar: _time


-(id)initWithMotionVectors:(id)arg0 regionOfInterest:(struct CGRect )arg1 time:(struct ? )arg2 ;


@end


#endif