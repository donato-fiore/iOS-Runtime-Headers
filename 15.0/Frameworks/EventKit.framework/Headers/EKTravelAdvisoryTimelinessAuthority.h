// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKTRAVELADVISORYTIMELINESSAUTHORITY_H
#define EKTRAVELADVISORYTIMELINESSAUTHORITY_H

@class NSDate;
@protocol CalActivatable, OS_dispatch_queue, CalDateProvider, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface EKTravelAdvisoryTimelinessAuthority : NSObject <CalActivatable>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) NSObject<CalDateProvider> *dateProvider; // ivar: _dateProvider
@property (nonatomic) BOOL internalActive; // ivar: _internalActive
@property (nonatomic) NSUInteger internalPeriod; // ivar: _internalPeriod
@property (copy, nonatomic) id *internalPeriodChangedCallback; // ivar: _internalPeriodChangedCallback
@property (readonly, nonatomic) NSUInteger period;
@property (copy, nonatomic) id *periodChangedCallback;
@property (readonly, nonatomic) NSDate *startOfLeaveNowPeriod;
@property (retain, nonatomic) NSDate *startOfLeaveNowPeriodInternal; // ivar: _startOfLeaveNowPeriodInternal
@property (readonly, nonatomic) NSDate *startOfRunningLatePeriod;
@property (retain, nonatomic) NSDate *startOfRunningLatePeriodInternal; // ivar: _startOfRunningLatePeriodInternal
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)stringForPeriod:(NSUInteger)arg0 ;
-(BOOL)active;
-(id)init;
-(id)initWithDateProvider:(id)arg0 ;
-(void)_refresh;
-(void)_refreshOnDate:(id)arg0 ;
-(void)_refreshPeriod;
-(void)_refreshTimer;
-(void)_uninstallTimer;
-(void)activate;
-(void)deactivate;
-(void)dealloc;
-(void)updateWithHypothesis:(id)arg0 ;


@end


#endif