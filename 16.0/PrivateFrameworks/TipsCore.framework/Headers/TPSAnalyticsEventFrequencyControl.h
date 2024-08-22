// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSANALYTICSEVENTFREQUENCYCONTROL_H
#define TPSANALYTICSEVENTFREQUENCYCONTROL_H

@class NSNumber, NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventFrequencyControl : TPSAnalyticsEvent

@property (retain, nonatomic) NSNumber *displayCount; // ivar: _displayCount
@property (retain, nonatomic) NSString *displayType; // ivar: _displayType
@property (retain, nonatomic) NSString *experimentCampID; // ivar: _experimentCampID
@property (retain, nonatomic) NSString *experimentID; // ivar: _experimentID
@property (retain, nonatomic) NSNumber *notDisplayedDueToFrequencyControlCount; // ivar: _notDisplayedDueToFrequencyControlCount


+(BOOL)supportsSecureCoding;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayType:(id)arg0 displayCount:(id)arg1 notDisplayedDueToFrequencyControlCount:(id)arg2 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDataProvider:(id)arg0 ;


@end


#endif