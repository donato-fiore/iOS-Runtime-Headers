// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDTIMERMANAGER_H
#define HMDTIMERMANAGER_H

@class NSString, NSMutableArray, HMFTimer;
@protocol HMFTimerDelegate, HMDTimerManager, HMDTimerManagerDataSource, HMDTimerManagerDelegate;

#import <Foundation/Foundation.h>


@interface HMDTimerManager : NSObject <HMFTimerDelegate, HMDTimerManager>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSObject<HMDTimerManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDTimerManagerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSMutableArray *sortedTimerContexts; // ivar: _sortedTimerContexts
@property (readonly) Class superclass;
@property (retain, nonatomic) HMFTimer *timer; // ivar: _timer


-(id)initWithOptions:(NSUInteger)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 dataSource:(id)arg1 ;
-(id)startTimerWithTimeInterval:(CGFloat)arg0 object:(id)arg1 ;
-(void)_evaluateTimers;
-(void)cancelTimerForContext:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif