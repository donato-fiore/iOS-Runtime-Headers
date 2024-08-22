// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFANALYTICSAUTOMATIONNAMINGTYPEPROPORTIONEVENT_H
#define HFANALYTICSAUTOMATIONNAMINGTYPEPROPORTIONEVENT_H

@class NSNumber;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsAutomationNamingTypeProportionEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *percentUsingConfiguredName; // ivar: _percentUsingConfiguredName


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif