// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTCONCURRENTTRANSITIONSCHEDULER_H
#define AVTCONCURRENTTRANSITIONSCHEDULER_H

@class NSTimer;
@protocol AVTTransitionScheduler;

#import <Foundation/Foundation.h>


@interface AVTConcurrentTransitionScheduler : NSObject <AVTTransitionScheduler>



@property (readonly, nonatomic) CGFloat delay; // ivar: _delay
@property (readonly, copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (retain, nonatomic) NSTimer *transitionTimer; // ivar: _transitionTimer


-(id)initWithEventHandler:(id)arg0 ;
// -(id)initWithEventHandler:(id)arg0 delay:(unk)arg1  ;
-(void)didCompleteEvent;
-(void)scheduleEvent;
-(void)scheduleTransitionTimer;
-(void)stop;


@end


#endif