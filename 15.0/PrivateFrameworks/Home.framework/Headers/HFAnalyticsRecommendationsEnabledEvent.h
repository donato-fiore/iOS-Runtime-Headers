// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFANALYTICSRECOMMENDATIONSENABLEDEVENT_H
#define HFANALYTICSRECOMMENDATIONSENABLEDEVENT_H

@class NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsRecommendationsEnabledEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *accessoryCategory; // ivar: _accessoryCategory
@property (retain, nonatomic) NSString *configurationType; // ivar: _configurationType
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSString *presentationContext; // ivar: _presentationContext
@property (nonatomic) CGFloat rank; // ivar: _rank
@property (nonatomic) int rankInt; // ivar: _rankInt
@property (nonatomic) int rankVersion; // ivar: _rankVersion
@property (retain, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (retain, nonatomic) NSString *source; // ivar: _source
@property (nonatomic) BOOL success; // ivar: _success


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif