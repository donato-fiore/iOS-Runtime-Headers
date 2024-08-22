// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFSYNCHRONIZEDTIMER_H
#define HFSYNCHRONIZEDTIMER_H

@class NSTimer, NSMapTable;

#import <Foundation/Foundation.h>


@interface HFSynchronizedTimer : NSObject

@property (retain, nonatomic) NSTimer *activeTimer; // ivar: _activeTimer
@property (readonly, nonatomic) NSMapTable *observers; // ivar: _observers


+(id)sharedInstance;
-(id)init;
-(void)_timerDidFire;
-(void)_updateTimerState;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif