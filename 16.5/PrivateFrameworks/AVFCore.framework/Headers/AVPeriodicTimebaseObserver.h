// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPERIODICTIMEBASEOBSERVER_H
#define AVPERIODICTIMEBASEOBSERVER_H



#import "AVTimebaseObserver.h"

@interface AVPeriodicTimebaseObserver : AVTimebaseObserver {
    ? _intervalRequested;
    ? _lastIntervalUsed;
    ? _lastPeriodicFireTime;
    ? _lastNonperiodicFireTime;
    ? _lastStopTime;
    unsigned int _sequenceNum;
    id *_block;
}




-(id)initWithTimebase:(struct OpaqueCMTimebase *)arg0 interval:(struct ? )arg1 queue:(id)arg2 block:(id)arg3 ;
-(void)_effectiveRateChanged;
-(void)_fireBlockForTime:(struct ? )arg0 ;
-(void)_handleTimeDiscontinuity;
-(void)_resetNextFireTime;
-(void)dealloc;


@end


#endif