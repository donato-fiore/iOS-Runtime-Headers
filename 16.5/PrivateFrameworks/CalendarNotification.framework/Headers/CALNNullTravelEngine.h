// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNNULLTRAVELENGINE_H
#define CALNNULLTRAVELENGINE_H

@class NSString;
@protocol CALNTravelEngine, CALNTravelEngineDelegate;

#import <Foundation/Foundation.h>


@interface CALNNullTravelEngine : NSObject <CALNTravelEngine>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CALNTravelEngineDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg0 ;
-(void)ceaseMonitoringForEventWithExternalURL:(id)arg0 ;
-(void)requestHypothesisRefreshAtDate:(id)arg0 forEventWithExternalURL:(id)arg1 ;
-(void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg0 ;
-(void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg0 ;


@end


#endif