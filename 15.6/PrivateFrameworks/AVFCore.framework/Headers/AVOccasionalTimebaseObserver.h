// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVOCCASIONALTIMEBASEOBSERVER_H
#define AVOCCASIONALTIMEBASEOBSERVER_H

@class NSArray;


#import "AVTimebaseObserver.h"

@interface AVOccasionalTimebaseObserver : AVTimebaseObserver {
    NSArray *_times;
    id *_block;
}




-(id)initWithTimebase:(struct OpaqueCMTimebase *)arg0 times:(id)arg1 queue:(id)arg2 block:(id)arg3 ;
-(struct ? )_nextFiringTimeAfterTime:(struct ? )arg0 ;
-(struct ? )_previousFiringTimeBeforeTime:(struct ? )arg0 ;
-(void)_effectiveRateChanged;
-(void)_fireBlock;
-(void)_handleTimeDiscontinuity;
-(void)_resetNextFireTime;
-(void)dealloc;


@end


#endif