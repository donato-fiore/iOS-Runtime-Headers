// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWKUINEXTHOURPRECIPITATIONVIEWMODEL_H
#define NWKUINEXTHOURPRECIPITATIONVIEWMODEL_H

@class NSString, NSDate, NSArray, WFNextHourPrecipitation;

#import <Foundation/Foundation.h>


@interface NWKUINextHourPrecipitationViewModel : NSObject {
    NSString *_conditionText;
}


@property (readonly, nonatomic) NSString *conditionText;
@property (readonly, nonatomic) NSString *conditionTitleText; // ivar: _conditionTitleText
@property (readonly, nonatomic) NSDate *currentTime; // ivar: _currentTime
@property (nonatomic) BOOL isRTL; // ivar: _isRTL
@property (readonly, nonatomic) NSArray *minuteStrings;
@property (readonly, nonatomic) WFNextHourPrecipitation *nextHourPrecipitation; // ivar: _nextHourPrecipitation


-(BOOL)isEqual:(id)arg0 ;
-(id)_arrayOfZerosOfSize:(NSUInteger)arg0 ;
-(id)_percentPrecipitationIntensitiesForMinutesOut:(NSUInteger)arg0 resolution:(NSUInteger)arg1 ;
-(id)attributedConditionsTextWithFont:(id)arg0 ;
-(id)initWithNextHourPrecipitation:(id)arg0 currentTime:(id)arg1 ;
-(id)percentPrecipitationIntensities;
-(struct _NSRange )_conditionRangeForDescription:(id)arg0 ;


@end


#endif