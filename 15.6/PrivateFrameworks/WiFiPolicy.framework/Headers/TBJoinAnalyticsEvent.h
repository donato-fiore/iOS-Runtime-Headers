// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TBJOINANALYTICSEVENT_H
#define TBJOINANALYTICSEVENT_H

@class NSString, NSDictionary, NSNumber;
@protocol TBAnalyticsEvent;

#import <Foundation/Foundation.h>


@interface TBJoinAnalyticsEvent : NSObject <TBAnalyticsEvent>



@property (nonatomic) NSUInteger action; // ivar: _action
@property (copy, nonatomic) NSString *bssid; // ivar: _bssid
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *eventDictionary;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *latitude; // ivar: _latitude
@property (retain, nonatomic) NSNumber *longitude; // ivar: _longitude
@property (retain, nonatomic) NSNumber *score; // ivar: _score
@property (nonatomic) NSUInteger source; // ivar: _source
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) NSNumber *visibleDuration; // ivar: _visibleDuration


+(id)joinAlertEventWithSource:(NSUInteger)arg0 action:(NSUInteger)arg1 visibleDuration:(id)arg2 ;
+(id)joinRecommendationEventWithSource:(NSUInteger)arg0 action:(NSUInteger)arg1 BSSID:(id)arg2 latitude:(id)arg3 longitude:(id)arg4 score:(id)arg5 visibleDuration:(id)arg6 ;


@end


#endif