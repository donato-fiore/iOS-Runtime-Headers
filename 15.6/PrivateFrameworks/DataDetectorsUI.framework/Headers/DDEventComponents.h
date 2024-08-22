// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DDEVENTCOMPONENTS_H
#define DDEVENTCOMPONENTS_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DDEventComponents : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (copy, nonatomic) NSString *eventTypeIdentifier; // ivar: _eventTypeIdentifier
@property (nonatomic) _NSRange originRange; // ivar: _originRange
@property (nonatomic) NSInteger source; // ivar: _source
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (copy, nonatomic) NSString *title; // ivar: _title


+(?)_eventComponents:(?)arg0 matchingResultcontext;
+(?)bestEventComponentsForResult:(?)arg0 withNaturalLanguageContext:(?)arg1 suggestionsContextcontext;
+(BOOL)supportsSecureCoding;
+(id)_eventsFromIntelligentSuggestions:(id)arg0 ;
+(id)_eventsFromNaturalLanguageText:(id)arg0 context:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif