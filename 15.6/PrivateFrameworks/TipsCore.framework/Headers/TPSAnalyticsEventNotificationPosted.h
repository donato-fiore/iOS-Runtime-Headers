// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSANALYTICSEVENTNOTIFICATIONPOSTED_H
#define TPSANALYTICSEVENTNOTIFICATIONPOSTED_H

@class NSNumber, NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventNotificationPosted : TPSAnalyticsEvent {
    NSNumber *_posted;
    NSNumber *_remaining;
}


@property (retain, nonatomic) NSString *collectionID; // ivar: _collectionID
@property (retain, nonatomic) NSString *contentID; // ivar: _contentID
@property (retain, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (retain, nonatomic) NSString *errorCode; // ivar: _errorCode
@property (readonly, nonatomic) BOOL landingPage; // ivar: _landingPage
@property (nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl; // ivar: _notificationModelControl
@property (readonly, nonatomic) NSNumber *notificationsPosted;


+(BOOL)supportsSecureCoding;
+(id)eventWithContentID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 remainingNotificationsCount:(id)arg3 errorCode:(id)arg4 ;
-(id)_initWithContentID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 remainingNotificationsCount:(id)arg3 errorCode:(id)arg4 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)persistKeys;
-(void)setDataProvider:(id)arg0 ;


@end


#endif