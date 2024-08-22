// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVONCETIMEBASEOBSERVER_H
#define AVONCETIMEBASEOBSERVER_H



#import "AVTimebaseObserver.h"

@interface AVOnceTimebaseObserver : AVTimebaseObserver {
    ? _fireTime;
    id *_block;
    BOOL _didFire;
}


@property (readonly, nonatomic) BOOL didFire;


-(id)initWithTimebase:(struct OpaqueCMTimebase *)arg0 fireTime:(struct ? )arg1 queue:(id)arg2 block:(id)arg3 ;
-(void)_effectiveRateChanged;
-(void)_fireBlock;
-(void)_handleTimeDiscontinuity;
-(void)_resetNextFireTime;
-(void)dealloc;
-(void)invalidate;


@end


#endif