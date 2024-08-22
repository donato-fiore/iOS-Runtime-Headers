// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKTIMEINTERVALTEXTPROVIDER_H
#define CLKTIMEINTERVALTEXTPROVIDER_H

@class NSDateFormatter, NSArray, NSDate, NSTimeZone;


#import "CLKTextProvider.h"

@interface CLKTimeIntervalTextProvider : CLKTextProvider {
    NSDateFormatter *_dateFormatter;
    NSArray *_fallbackSequence;
}


@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


+(BOOL)supportsSecureCoding;
+(id)finalizedTextProviderWithStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)finalizedTextProviderWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 ;
+(id)textProviderWithStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)textProviderWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 ;
-(BOOL)_validate;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)_attributedTextForSequenceItem:(NSInteger)arg0 style:(id)arg1 ;
-(id)_dateIntervalAttributedTextWithStyle:(id)arg0 narrow:(BOOL)arg1 ;
-(id)_dateIntervalNarrowAttributedTextWithStyle:(id)arg0 ;
-(id)_dateIntervalWideAttributedTextWithStyle:(id)arg0 ;
-(id)_fallbackSequence;
-(id)_initWithJSONObjectRepresentation:(id)arg0 ;
-(id)_sessionAttributedTextForIndex:(NSUInteger)arg0 withStyle:(id)arg1 ;
-(id)_startTimeDropMinutesAttributedTextWithStyle:(id)arg0 ;
-(id)_startTimeFullAttributedTextWithStyle:(id)arg0 ;
-(id)_stringByRemovingDesignatorRange:(struct _NSRange )arg0 fromString:(id)arg1 ;
-(id)_timeIntervalAttributedTextWithStyle:(id)arg0 dropMinutes:(BOOL)arg1 onlyStartDate:(BOOL)arg2 ;
-(id)_timeIntervalDropMinutesAttributedTextWithStyle:(id)arg0 ;
-(id)_timeIntervalFullAttributedTextWithStyle:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 ;
-(struct _NSRange )_rangeOfAnnontatedTime:(id)arg0 matchingPattern:(id)arg1 ;
-(struct _NSRange )_rangeOfDesignatorInAnnotatedTime:(id)arg0 ;
-(struct _NSRange )_rangeOfHoursInAnnotatedTime:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif