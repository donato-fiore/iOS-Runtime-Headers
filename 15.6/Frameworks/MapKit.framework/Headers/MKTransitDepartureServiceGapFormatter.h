// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKTRANSITDEPARTURESERVICEGAPFORMATTER_H
#define MKTRANSITDEPARTURESERVICEGAPFORMATTER_H

@class NSDate, NSTimeZone;

#import <Foundation/Foundation.h>


@interface MKTransitDepartureServiceGapFormatter : NSObject

@property (readonly, nonatomic) NSDate *departureCutoffDate; // ivar: _departureCutoffDate
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


-(id)_descriptionForDepartureDate:(id)arg0 canIncludeDate:(BOOL)arg1 outDateFormat:(*NSUInteger)arg2 ;
-(id)initWithTimeZone:(id)arg0 departureCutoffDate:(id)arg1 ;
-(id)lastDepartureAtStringFromDate:(id)arg0 ;
-(id)lastDepartureString;
-(id)lastDepartureUntilStringFromDate:(id)arg0 ;


@end


#endif