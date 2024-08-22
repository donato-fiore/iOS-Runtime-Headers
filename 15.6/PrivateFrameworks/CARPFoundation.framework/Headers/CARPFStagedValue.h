// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARPFSTAGEDVALUE_H
#define CARPFSTAGEDVALUE_H

@class NSString;
@protocol CARPFLogging, CARPFTimerDelegate, CARPFStagedValueDelegate;

#import <Foundation/Foundation.h>

#import "CARPFUnfairLock.h"
#import "CARPFTimer.h"

@interface CARPFStagedValue : NSObject <CARPFLogging, CARPFTimerDelegate>

 {
    id *_stagedValue;
    BOOL _isStaged;
    CARPFUnfairLock *_lock;
}


@property (retain) id *committedValue; // ivar: _committedValue
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<CARPFStagedValueDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) CARPFTimer *timer; // ivar: _timer
@property (copy) id *timerFactory; // ivar: _timerFactory
@property (readonly) id *value;


+(id)logCategory;
-(id)initWithValue:(id)arg0 ;
-(void)_commitValue:(id)arg0 ;
-(void)_stageValue:(id)arg0 withTimeout:(CGFloat)arg1 ;
-(void)_unstageValue;
-(void)commitValue:(id)arg0 ;
-(void)stageValue:(id)arg0 withTimeout:(CGFloat)arg1 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif