// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFANALYTICSLEARNTABINTERACTIONEVENT_H
#define HFANALYTICSLEARNTABINTERACTIONEVENT_H

@class NSString;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsLearnTabInteractionEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *interactionType; // ivar: _interactionType


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif