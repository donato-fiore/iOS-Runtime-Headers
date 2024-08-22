// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSANALYTICSEVENTAPPDELETED_H
#define TPSANALYTICSEVENTAPPDELETED_H



#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventAppDeleted : TPSAnalyticsEvent

@property (nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl; // ivar: _notificationModelControl


+(BOOL)supportsSecureCoding;
+(id)event;
-(CGFloat)timeSinceLastNotification;
-(id)appLaunches;
-(id)desiredOutcomeTotal;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(id)notificationsPosted;
-(id)tipViewTotal;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDataProvider:(id)arg0 ;


@end


#endif