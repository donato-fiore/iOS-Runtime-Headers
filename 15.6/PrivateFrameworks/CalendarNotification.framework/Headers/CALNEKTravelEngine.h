// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNEKTRAVELENGINE_H
#define CALNEKTRAVELENGINE_H

@class NSString;
@protocol CALNTravelEngine, CADModule, CALNTravelEngineDelegate;

#import <Foundation/Foundation.h>

#import "EKTravelEngine.h"

@interface CALNEKTravelEngine : NSObject <CALNTravelEngine, CADModule>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CALNTravelEngineDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) EKTravelEngine *travelEngine; // ivar: _travelEngine


-(id)_adviceReceivedBlock:(SEL)arg0 ;
-(id)_authorizationChangedBlock:(SEL)arg0 ;
-(id)_eventSignficantlyChangedBlock:(SEL)arg0 ;
-(id)initWithTravelEngine:(id)arg0 ;
-(void)activate;
-(void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg0 ;
-(void)ceaseMonitoringForEventWithExternalURL:(id)arg0 ;
-(void)deactivate;
-(void)didRegisterForAlarms;
-(void)protectedDataDidBecomeAvailable;
-(void)receivedAlarmNamed:(id)arg0 ;
-(void)receivedNotificationNamed:(id)arg0 ;
-(void)requestHypothesisRefreshAtDate:(id)arg0 forEventWithExternalURL:(id)arg1 ;
-(void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg0 ;
-(void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg0 ;


@end


#endif