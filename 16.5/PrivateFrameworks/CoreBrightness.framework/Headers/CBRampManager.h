// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBRAMPMANAGER_H
#define CBRAMPMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_os_log, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "CBFrameLink.h"

@interface CBRampManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_source> *_clockTimer;
    NSMutableDictionary *_ramps;
    BOOL _activated;
    float _requiredFrequency;
    CGFloat _sMachTimebaseFactor;
    CBFrameLink *_frameLink;
    NSUInteger _displayId;
}


@property (copy) id *clockHandler; // ivar: _clockHandler
@property (readonly, nonatomic) BOOL enableFrameSynchronisation; // ivar: _enableFrameSynchronisation
@property BOOL liveUpdates; // ivar: _liveUpdates
@property (copy) id *rampDoneCallback; // ivar: _rampDoneCallback


+(id)className;
-(BOOL)hasAnyActiveRamp;
-(BOOL)hasRampRunningForIdentifier:(id)arg0 ;
-(float)remainingLength;
-(id)copyStatusInfo;
-(id)init;
-(id)initWithDisplayId:(NSUInteger)arg0 ;
-(id)insertNewLinearRampOrigin:(float)arg0 target:(float)arg1 length:(float)arg2 frequency:(float)arg3 identifier:(id)arg4 ;
-(id)insertNewLinearRampOrigin:(float)arg0 target:(float)arg1 length:(float)arg2 frequency:(float)arg3 startRamp:(BOOL)arg4 identifier:(id)arg5 ;
-(id)insertNewRampOrigin:(float)arg0 target:(float)arg1 length:(float)arg2 frequency:(float)arg3 identifier:(id)arg4 progressCallback:(id)arg5 ;
-(id)insertNewRampOrigin:(float)arg0 target:(float)arg1 length:(float)arg2 frequency:(float)arg3 startRamp:(BOOL)arg4 identifier:(id)arg5 progressCallback:(id)arg6 ;
-(id)rampForIdentifier:(id)arg0 ;
-(void)activate;
-(void)cancel;
-(void)dealloc;
-(void)disableClocking;
-(void)enableClocking;
-(void)generateRamp;
-(void)insertRamp:(id)arg0 identifier:(id)arg1 ;
-(void)insertRamp:(id)arg0 identifier:(id)arg1 reevaluate:(BOOL)arg2 ;
-(void)reevaluateClocking;
-(void)removeAllRamps;
-(void)removeRampWithIdentifier:(id)arg0 ;
-(void)scheduleWithDispatchQueue:(id)arg0 ;
-(void)setTimer;
-(void)startRamps;
-(void)stopTimer;
-(void)timerClockHandler;
-(void)updateRampsForTimestamp:(CGFloat)arg0 ;


@end


#endif