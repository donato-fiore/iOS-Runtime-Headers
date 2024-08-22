// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIBOXCANDIDATE_H
#define HMIBOXCANDIDATE_H

@class HMFObject;



@interface HMIBoxCandidate : HMFObject

@property (readonly) CGFloat age;
@property (readonly) CGRect box; // ivar: _box
@property (readonly) float confidence; // ivar: _confidence
@property (readonly) ? firstSeen; // ivar: _firstSeen
@property (readonly) ? lastSeen; // ivar: _lastSeen


-(CGFloat)ageAtTime:(struct ? )arg0 ;
-(CGFloat)timeSinceLastSeenAtTime:(struct ? )arg0 ;
-(id)initWithBox:(struct CGRect )arg0 firstSeen:(struct ? )arg1 lastSeen:(struct ? )arg2 confidence:(float)arg3 ;


@end


#endif