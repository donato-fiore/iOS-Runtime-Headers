// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFANALYTICSSECTIONREORDERINGEVENT_H
#define HFANALYTICSSECTIONREORDERINGEVENT_H

@class NSNumber, NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsSectionReorderingEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *numberOfSections; // ivar: _numberOfSections
@property (retain, nonatomic) NSString *reorderingAction; // ivar: _reorderingAction


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif