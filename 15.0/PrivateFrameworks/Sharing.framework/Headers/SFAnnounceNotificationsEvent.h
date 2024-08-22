// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFANNOUNCENOTIFICATIONSEVENT_H
#define SFANNOUNCENOTIFICATIONSEVENT_H

@class NSString, NSDictionary;
@protocol SFCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface SFAnnounceNotificationsEvent : NSObject <SFCoreAnalyticsEvent>



@property (nonatomic) BOOL customizedApps; // ivar: _customizedApps
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL tappedCustomize; // ivar: _tappedCustomize
@property (nonatomic) BOOL tappedDismissButton; // ivar: _tappedDismissButton
@property (nonatomic) BOOL tappedInitialEnable; // ivar: _tappedInitialEnable
@property (nonatomic) BOOL tappedNotNow; // ivar: _tappedNotNow


+(id)eventName;
-(void)submitEvent;


@end


#endif