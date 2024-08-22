// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKTRAVELENGINETHROTTLE_H
#define EKTRAVELENGINETHROTTLE_H

@class NSString, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EKTravelEngineThrottle : NSObject

@property (copy, nonatomic) id *cancelHypothesisRequestRefreshBlock; // ivar: _cancelHypothesisRequestRefreshBlock
@property (copy, nonatomic) id *emissionBlock; // ivar: _emissionBlock
@property (retain) NSString *eventExternalURL; // ivar: _eventExternalURL
@property (retain, nonatomic) NSDate *nextEmissionDate; // ivar: _nextEmissionDate
@property (copy, nonatomic) id *requestHypothesisRefreshBlock; // ivar: _requestHypothesisRefreshBlock
@property (nonatomic) BOOL running; // ivar: _running
@property (retain, nonatomic) NSString *throttleIdentifier; // ivar: _throttleIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *throttleQueue; // ivar: _throttleQueue


+(CGFloat)_requestHypothesisRefreshInterval;
+(CGFloat)emissionThresholdTimeInterval;
-(id)alarmName;
-(id)description;
-(id)init;
-(void)_createEmissionTimerWithDate:(id)arg0 ;
-(void)_emissionTimerFired;
-(void)_fireEmissionBlock;
-(void)_registerForNotificationObservation;
-(void)_significantTimeChangeNotificationReceived;
-(void)_uninstallEmissionTimer;
-(void)_updateEmissionDate:(id)arg0 ;
-(void)dealloc;
-(void)receivedAlarmNamed:(id)arg0 ;
-(void)tearDown;
-(void)updatePredictedDepartureDate:(id)arg0 ;


@end


#endif