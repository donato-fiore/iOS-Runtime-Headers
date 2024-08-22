// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPFIELDDATE_H
#define PKPAYMENTSETUPFIELDDATE_H

@class NSDateFormatter, NSCalendar, NSDate, NSLocale, NSString;


#import "PKPaymentSetupFieldText.h"

@interface PKPaymentSetupFieldDate : PKPaymentSetupFieldText {
    NSDateFormatter *_displayDateFormatter;
}


@property (retain, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (copy, nonatomic) NSDate *currentValue;
@property (copy, nonatomic) NSDate *defaultDate; // ivar: _defaultDate
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (nonatomic) BOOL showsDay; // ivar: _showsDay
@property (nonatomic) BOOL showsMonth; // ivar: _showsMonth
@property (nonatomic) BOOL showsYear; // ivar: _showsYear
@property (copy, nonatomic) NSString *submissionFormat; // ivar: _submissionFormat


-(BOOL)submissionStringMeetsAllRequirements;
-(NSUInteger)fieldType;
-(id)_defaultValueAsDateForCurrentLocale;
-(id)_submissionStringForValue:(id)arg0 ;
-(id)displayString;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
-(void)_commonUpdate;
-(void)updateWithAttribute:(id)arg0 ;
-(void)updateWithConfiguration:(id)arg0 ;


@end


#endif