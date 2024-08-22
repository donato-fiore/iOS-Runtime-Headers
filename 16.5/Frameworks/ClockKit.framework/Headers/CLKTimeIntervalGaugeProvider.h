// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKTIMEINTERVALGAUGEPROVIDER_H
#define CLKTIMEINTERVALGAUGEPROVIDER_H

@class NSMutableDictionary, NSDate;


#import "CLKGaugeProvider.h"
#import "CLKClockTimerToken.h"

@interface CLKTimeIntervalGaugeProvider : CLKGaugeProvider {
    NSUInteger _nextUpdateToken;
    NSMutableDictionary *_updateHandlersByToken;
    CLKClockTimerToken *_timerToken;
    BOOL _paused;
}


@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic) float endFillFraction; // ivar: _endFillFraction
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) float startFillFraction; // ivar: _startFillFraction


+(BOOL)supportsSecureCoding;
+(id)gaugeProviderWithStyle:(NSInteger)arg0 gaugeColors:(id)arg1 gaugeColorLocations:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
+(id)gaugeProviderWithStyle:(NSInteger)arg0 gaugeColors:(id)arg1 gaugeColorLocations:(id)arg2 startDate:(id)arg3 startFillFraction:(float)arg4 endDate:(id)arg5 endFillFraction:(float)arg6 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)needsTimerUpdates;
-(BOOL)paused;
-(BOOL)validate;
-(CGFloat)progressFractionForNow:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObjectRepresentation:(id)arg0 ;
-(id)startUpdatesWithHandler:(id)arg0 ;
-(void)_maybeStartOrStopUpdates;
-(void)_update;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPaused:(BOOL)arg0 ;
-(void)stopUpdatesForToken:(id)arg0 ;


@end


#endif