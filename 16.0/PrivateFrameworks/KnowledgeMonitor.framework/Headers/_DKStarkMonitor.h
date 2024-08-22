// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKSTARKMONITOR_H
#define _DKSTARKMONITOR_H

@class DKMonitor, NSString, CARSessionStatus;
@protocol CARSessionObserving;



@interface _DKStarkMonitor : DKMonitor <CARSessionObserving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CARSessionStatus *sessionStatus; // ivar: _sessionStatus
@property (readonly) Class superclass;


+(id)_eventWithState:(BOOL)arg0 ;
+(id)entitlements;
+(id)eventStream;
-(void)deactivate;
-(void)dealloc;
-(void)sessionDidConnect:(id)arg0 ;
-(void)sessionDidDisconnect:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;
-(void)updateCurrentState;


@end


#endif