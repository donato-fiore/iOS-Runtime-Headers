// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFANALYTICSAUTOMATIONNEWNAMEASSIGNEDEVENT_H
#define HFANALYTICSAUTOMATIONNEWNAMEASSIGNEDEVENT_H

@class NSNumber;


#import "HFAnalyticsEvent.h"

@interface HFAnalyticsAutomationNewNameAssignedEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *didNamingSucceed; // ivar: _didNamingSucceed
@property (retain, nonatomic) NSNumber *errorType; // ivar: _errorType
@property (retain, nonatomic) NSNumber *modifiesExistingTrigger; // ivar: _modifiesExistingTrigger
@property (retain, nonatomic) NSNumber *namingType; // ivar: _namingType


-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif