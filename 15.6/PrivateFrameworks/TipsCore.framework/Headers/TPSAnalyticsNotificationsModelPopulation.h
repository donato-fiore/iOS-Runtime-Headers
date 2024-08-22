// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSANALYTICSNOTIFICATIONSMODELPOPULATION_H
#define TPSANALYTICSNOTIFICATIONSMODELPOPULATION_H



#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsNotificationsModelPopulation : TPSAnalyticsEvent

@property (readonly, nonatomic) BOOL notificationsModel; // ivar: _notificationsModel


+(BOOL)supportsSecureCoding;
+(id)eventWithNotificationsModel:(BOOL)arg0 ;
-(id)_initWithNotificationsModel:(BOOL)arg0 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif