// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCOALESCINGTIMER_H
#define CNCOALESCINGTIMER_H

@protocol CNScheduler, CNCancelable;

#import <Foundation/Foundation.h>

#import "CNUnfairLock.h"

@interface CNCoalescingTimer : NSObject

@property (readonly, copy, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) CGFloat delay; // ivar: _delay
@property (readonly, nonatomic) NSObject<CNScheduler> *delayScheduler; // ivar: _delayScheduler
@property (readonly, nonatomic) NSObject<CNScheduler> *downstreamScheduler; // ivar: _downstreamScheduler
@property (nonatomic) BOOL open; // ivar: _open
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) CNUnfairLock *resourceLock; // ivar: _resourceLock
@property (retain, nonatomic) NSObject<CNCancelable> *scheduledToken; // ivar: _scheduledToken
@property (nonatomic, getter=isSomeoneWaiting) BOOL someoneWaiting; // ivar: _someoneWaiting


+(id)os_log;
-(BOOL)nts_isDoorOpened;
// -(id)initWithDelay:(CGFloat)arg0 options:(NSUInteger)arg1 block:(id)arg2 schedulerProvider:(unk)arg3 downstreamScheduler:(id)arg4  ;
-(id)initWithDelay:(CGFloat)arg0 options:(NSUInteger)arg1 delegate:(id)arg2 ;
-(void)dealloc;
-(void)handleEvent;
-(void)nts_closeDoor;
-(void)nts_letSomeoneIn;
-(void)nts_makeSomeoneWait;


@end


#endif