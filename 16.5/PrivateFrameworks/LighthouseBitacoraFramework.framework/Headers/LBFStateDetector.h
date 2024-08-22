// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBFSTATEDETECTOR_H
#define LBFSTATEDETECTOR_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface LBFStateDetector : NSObject

@property (readonly, nonatomic) NSInteger currentState; // ivar: _currentState
@property (readonly, nonatomic) NSDate *currentTime; // ivar: _currentTime


-(id)init;
-(id)initWithState:(NSInteger)arg0 ;
-(id)processEventsStartingFromState:(NSInteger)arg0 bucketStartTime:(id)arg1 events:(id)arg2 ;
-(id)processLighthouseEvent:(id)arg0 ;
-(id)processMLRuntimedEvent:(id)arg0 ;
-(id)processTrialdEvent:(id)arg0 ;
-(id)validateTransition:(id)arg0 ;


@end


#endif