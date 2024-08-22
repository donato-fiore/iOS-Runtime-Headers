// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSANALYTICSEVENTCONTENTLINKTAPPED_H
#define TPSANALYTICSEVENTCONTENTLINKTAPPED_H

@class NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventContentLinkTapped : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *collectionID; // ivar: _collectionID
@property (readonly, nonatomic) NSString *contentID; // ivar: _contentID
@property (readonly, nonatomic) NSString *context; // ivar: _context
@property (readonly, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (retain, nonatomic) NSString *displayType; // ivar: _displayType
@property (nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl; // ivar: _notificationModelControl
@property (readonly, nonatomic) NSString *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(id)eventWithContentID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 url:(id)arg3 ;
-(id)_initWithContentID:(id)arg0 collectionID:(id)arg1 correlationID:(id)arg2 url:(id)arg3 bundleID:(id)arg4 context:(id)arg5 displayType:(id)arg6 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDataProvider:(id)arg0 ;


@end


#endif