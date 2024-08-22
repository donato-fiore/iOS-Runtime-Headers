// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFANNOUNCEMESSAGESEVENT_H
#define SFANNOUNCEMESSAGESEVENT_H

@class NSString, NSDictionary;
@protocol SFCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface SFAnnounceMessagesEvent : NSObject <SFCoreAnalyticsEvent>



@property (nonatomic) BOOL allowsSiriWhenLocked; // ivar: _allowsSiriWhenLocked
@property (nonatomic) BOOL announceMessagesAlreadyEnabled; // ivar: _announceMessagesAlreadyEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger pairingExitView; // ivar: _pairingExitView
@property (nonatomic) BOOL skippedTutorialCards; // ivar: _skippedTutorialCards
@property (readonly) Class superclass;
@property (nonatomic) BOOL userAutomaticallyEnrolled; // ivar: _userAutomaticallyEnrolled
@property (nonatomic) BOOL userExplicitlyOptedIn; // ivar: _userExplicitlyOptedIn
@property (nonatomic) BOOL userExplicitlyOptedOut; // ivar: _userExplicitlyOptedOut


+(id)eventName;
+(id)stringForExitView:(NSInteger)arg0 ;
-(void)submitEvent;


@end


#endif