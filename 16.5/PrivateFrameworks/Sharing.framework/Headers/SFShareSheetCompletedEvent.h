// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSHARESHEETCOMPLETEDEVENT_H
#define SFSHARESHEETCOMPLETEDEVENT_H

@class NSString, NSDictionary;
@protocol SFCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface SFShareSheetCompletedEvent : NSObject <SFCoreAnalyticsEvent>



@property (copy, nonatomic) NSString *activityType; // ivar: _activityType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCollaborative; // ivar: _isCollaborative
@property (nonatomic) NSUInteger presentationMs; // ivar: _presentationMs
@property (copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic) BOOL success; // ivar: _success
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger totalShareTimeMs; // ivar: _totalShareTimeMs


+(id)eventName;
-(void)submitEvent;


@end


#endif