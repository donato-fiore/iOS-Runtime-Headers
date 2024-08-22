// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKBASEERROREVENT_H
#define SKBASEERROREVENT_H

@class NSString, NSError;
@protocol SKAnalyticsEventProtocol;

#import <Foundation/Foundation.h>


@interface SKBaseErrorEvent : NSObject <SKAnalyticsEventProtocol>



@property (readonly, nonatomic) BOOL canCreatePayload;
@property (retain, nonatomic) NSString *environment; // ivar: _environment
@property (readonly, nonatomic) NSString *eventName; // ivar: _eventName
@property (retain, nonatomic) NSString *inAppPurchaseID; // ivar: _inAppPurchaseID
@property (retain, nonatomic) NSError *mappedError; // ivar: _mappedError
@property (retain, nonatomic) NSError *primaryError; // ivar: _primaryError
@property (retain, nonatomic) NSString *serverCorrelationID; // ivar: _serverCorrelationID
@property (nonatomic) NSInteger userAction; // ivar: _userAction


-(id)createPayload;


@end


#endif