// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHEURISTICAIRPORTCITY_H
#define ATXHEURISTICAIRPORTCITY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXHeuristicAirportCity : NSObject

@property (readonly, nonatomic) NSString *iata; // ivar: _iata
@property (readonly, nonatomic) NSString *isoLanguage; // ivar: _isoLanguage
@property (readonly, nonatomic) CGFloat latitude; // ivar: _latitude
@property (readonly, nonatomic) CGFloat longitude; // ivar: _longitude
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(id)cityForAirport:(id)arg0 ;
+(id)cityForAirport:(id)arg0 language:(id)arg1 ;
+(id)supportedLanguages;


@end


#endif