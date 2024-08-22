// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSRECURRENCERULE_H
#define ICSRECURRENCERULE_H

@class NSMutableDictionary, NSArray, NSNumber;
@protocol NSSecureCoding, ICSWriting;

#import <Foundation/Foundation.h>

#import "ICSDateValue.h"

@interface ICSRecurrenceRule : NSObject <NSSecureCoding, ICSWriting>

 {
    NSUInteger _freq;
    NSMutableDictionary *_parameters;
}


@property (retain, nonatomic) NSArray *byday;
@property (retain, nonatomic) NSArray *byhour;
@property (retain, nonatomic) NSArray *byminute;
@property (retain, nonatomic) NSArray *bymonth;
@property (retain, nonatomic) NSArray *bymonthday;
@property (retain, nonatomic) NSArray *bysecond;
@property (retain, nonatomic) NSArray *bysetpos;
@property (retain, nonatomic) NSArray *byweekno;
@property (retain, nonatomic) NSArray *byyearday;
@property (nonatomic) NSNumber *count;
@property (nonatomic) NSUInteger freq;
@property (nonatomic) NSNumber *interval;
@property (retain, nonatomic) ICSDateValue *until;
@property (nonatomic) NSNumber *wkst;


+(BOOL)supportsSecureCoding;
+(id)recurrenceRuleFromICSCString:(char *)arg0 withTokenizer:(id)arg1 ;
+(id)recurrenceRuleFromICSString:(id)arg0 ;
-(BOOL)shouldObscureValue;
-(id)ICSStringWithOptions:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrequency:(NSUInteger)arg0 ;
-(id)occurrencesForStartDate:(id)arg0 fromDate:(id)arg1 toDate:(id)arg2 inTimeZone:(id)arg3 ;
-(id)parameterValueForName:(id)arg0 ;
-(id)parametersToIncludeForChecksumVersion:(int)arg0 ;
-(id)parametersToObscure;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg0 ;
-(id)propertiesToIncludeForChecksumVersion:(int)arg0 ;
-(id)propertiesToObscure;
-(void)ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;
-(void)cleanUpForStartDate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeParameterValueForName:(id)arg0 ;
-(void)setParameterValue:(id)arg0 forName:(id)arg1 ;


@end


#endif