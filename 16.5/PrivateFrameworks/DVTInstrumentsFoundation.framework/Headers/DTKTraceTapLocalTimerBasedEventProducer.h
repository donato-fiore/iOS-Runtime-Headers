// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTKTRACETAPLOCALTIMERBASEDEVENTPRODUCER_H
#define DTKTRACETAPLOCALTIMERBASEDEVENTPRODUCER_H

@protocol DTKTraceTapLocalEventProducer, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface DTKTraceTapLocalTimerBasedEventProducer : NSObject <DTKTraceTapLocalEventProducer>

 {
    NSInteger _currentThermalState;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_timer;
    int _token;
}




+(BOOL)supportsConfig:(id)arg0 ;
-(NSUInteger)_processInfoThermalStateToCLTMPressureLevel:(NSInteger)arg0 ;
-(id)init;
-(void)_emitThermalState:(NSInteger)arg0 currentState:(NSInteger)arg1 ;
-(void)dealloc;
-(void)pause;
-(void)start;
-(void)stop;
-(void)unpause;


@end


#endif