// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPDIAGNOSTICS_H
#define HDSPDIAGNOSTICS_H

@class NSString, HKSPDiagnostics, HKSPObserverSet;
@protocol HDSPNotificationObserver, HDSPEnvironmentAware;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPDiagnostics : NSObject <HDSPNotificationObserver, HDSPEnvironmentAware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKSPDiagnostics *diagnostics; // ivar: _diagnostics
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKSPObserverSet *providers; // ivar: _providers
@property (readonly) Class superclass;


-(id)initWithEnvironment:(id)arg0 ;
-(id)notificationListener:(id)arg0 didReceiveNotificationWithName:(id)arg1 ;
-(void)_logDiagnostics:(id)arg0 ;
-(void)addProvider:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)removeProvider:(id)arg0 ;


@end


#endif