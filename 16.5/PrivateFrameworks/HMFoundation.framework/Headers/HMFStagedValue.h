// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFSTAGEDVALUE_H
#define HMFSTAGEDVALUE_H

@class NSString;
@protocol HMFLogging, HMFTimerDelegate, HMFStagedValueDelegate;

#import <Foundation/Foundation.h>

#import "HMFTimer.h"

@interface HMFStagedValue : NSObject <HMFLogging, HMFTimerDelegate>

 {
    os_unfair_lock_s _lock;
    id *_stagedValue;
    BOOL _isStaged;
}


@property (retain) id *committedValue; // ivar: _committedValue
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMFStagedValueDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isStaged) BOOL staged;
@property (readonly) Class superclass;
@property (retain) HMFTimer *timer; // ivar: _timer
@property (copy) id *timerFactory; // ivar: _timerFactory
@property (readonly) id *value;


+(id)logCategory;
-(id)initWithValue:(id)arg0 ;
-(void)_commitValue:(id)arg0 ;
-(void)_stageValue:(id)arg0 withTimer:(id)arg1 ;
-(void)_unstageValue;
-(void)commitValue:(id)arg0 ;
-(void)stageValue:(id)arg0 ;
-(void)stageValue:(id)arg0 withTimeout:(CGFloat)arg1 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif