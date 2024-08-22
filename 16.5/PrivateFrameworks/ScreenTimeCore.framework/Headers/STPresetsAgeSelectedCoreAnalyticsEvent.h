// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STPRESETSAGESELECTEDCOREANALYTICSEVENT_H
#define STPRESETSAGESELECTEDCOREANALYTICSEVENT_H

@class NSString, NSDictionary;
@protocol STCoreAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface STPresetsAgeSelectedCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>



@property (readonly, copy) NSString *description;
@property (readonly) NSInteger lowerBoundAgeRange; // ivar: _lowerBoundAgeRange
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) NSString *sessionId; // ivar: _sessionId
@property (readonly) NSInteger upperBoundAgeRange; // ivar: _upperBoundAgeRange


-(id)initWithSessionId:(id)arg0 lowerBoundAgeRange:(NSInteger)arg1 upperBoundAgeRange:(NSInteger)arg2 ;


@end


#endif