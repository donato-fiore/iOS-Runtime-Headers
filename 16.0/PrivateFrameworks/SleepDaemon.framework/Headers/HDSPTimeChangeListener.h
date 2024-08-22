// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPTIMECHANGELISTENER_H
#define HDSPTIMECHANGELISTENER_H

@class NSString, HKSPObserverSet;
@protocol HDSPNotificationObserver, HDSPEnvironmentAware, HDSPSource;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPTimeChangeListener : NSObject <HDSPNotificationObserver, HDSPEnvironmentAware, HDSPSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKSPObserverSet *observers; // ivar: _observers
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly) Class superclass;


-(id)initWithEnvironment:(id)arg0 ;
-(id)notificationListener:(id)arg0 didReceiveNotificationWithName:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)handleSignificantTimeChange;
-(void)handleTimeZoneChange;
-(void)removeObserver:(id)arg0 ;


@end


#endif