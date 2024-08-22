// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSANALYTICSEVENTAPPDELETED_H
#define TPSANALYTICSEVENTAPPDELETED_H



#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventAppDeleted : TPSAnalyticsEvent



+(BOOL)supportsSecureCoding;
+(id)event;
-(CGFloat)timeSinceLastNotification;
-(id)appLaunches;
-(id)desiredOutcomeTotal;
-(id)eventName;
-(id)mutableAnalyticsEventRepresentation;
-(id)notificationsPosted;
-(id)tipViewTotal;


@end


#endif