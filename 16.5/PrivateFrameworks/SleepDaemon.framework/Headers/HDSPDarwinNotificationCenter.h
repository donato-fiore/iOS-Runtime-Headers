// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPDARWINNOTIFICATIONCENTER_H
#define HDSPDARWINNOTIFICATIONCENTER_H

@class NSString;
@protocol HDSPSleepNotificationPublisher, HDSPEnvironmentAware;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPDarwinNotificationCenter : NSObject <HDSPSleepNotificationPublisher, HDSPEnvironmentAware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithEnvironment:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)publishNotificationForEvent:(id)arg0 userInfo:(id)arg1 ;
-(void)tearDownNotificationForEventIdentifier:(id)arg0 ;
-(void)tearDownNotifications;


@end


#endif