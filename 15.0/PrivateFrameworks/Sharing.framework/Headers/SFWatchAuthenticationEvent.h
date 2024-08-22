// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFWATCHAUTHENTICATIONEVENT_H
#define SFWATCHAUTHENTICATIONEVENT_H

@class NSString, NSDictionary;
@protocol SFCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface SFWatchAuthenticationEvent : NSObject <SFCoreAnalyticsEvent>



@property (nonatomic) NSUInteger authenticationType; // ivar: _authenticationType
@property (nonatomic) CGFloat awdlBringUpDuration; // ivar: _awdlBringUpDuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (nonatomic) unsigned int failureReason; // ivar: _failureReason
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat keyExchangeDuration; // ivar: _keyExchangeDuration
@property (nonatomic) CGFloat peerFoundDuration; // ivar: _peerFoundDuration
@property (nonatomic) CGFloat rangingDuration; // ivar: _rangingDuration
@property (nonatomic) BOOL succeeded; // ivar: _succeeded
@property (readonly) Class superclass;
@property (nonatomic) CGFloat totalDuration; // ivar: _totalDuration
@property (copy, nonatomic) NSString *watchHardwareModel; // ivar: _watchHardwareModel
@property (copy, nonatomic) NSString *watchSoftwareVersion; // ivar: _watchSoftwareVersion


+(id)eventName;
-(void)submitEvent;


@end


#endif