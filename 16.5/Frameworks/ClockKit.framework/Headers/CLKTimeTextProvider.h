// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKTIMETEXTPROVIDER_H
#define CLKTIMETEXTPROVIDER_H

@class NSDateFormatter, NSMutableArray, NSDate, NSTimeZone;


#import "CLKTextProvider.h"

@interface CLKTimeTextProvider : CLKTextProvider {
    NSDateFormatter *_dateFormatter;
    NSMutableArray *_sizingFallbackBlocks;
}


@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) BOOL disallowBothMinutesAndDesignator; // ivar: _disallowBothMinutesAndDesignator
@property (nonatomic) BOOL prefersDesignatorToMinutes; // ivar: _prefersDesignatorToMinutes
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


+(BOOL)supportsSecureCoding;
+(id)textProviderWithDate:(id)arg0 ;
+(id)textProviderWithDate:(id)arg0 timeZone:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)_initWithJSONObjectRepresentation:(id)arg0 ;
-(id)_sessionAttributedTextForIndex:(NSUInteger)arg0 withStyle:(id)arg1 ;
-(id)_timeAttributedTextWithStyle:(id)arg0 dropMinutes:(BOOL)arg1 dropDesignator:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 ;
-(id)initWithDate:(id)arg0 timeZone:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif