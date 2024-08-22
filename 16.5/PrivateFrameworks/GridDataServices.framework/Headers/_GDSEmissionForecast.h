// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GDSEMISSIONFORECAST_H
#define _GDSEMISSIONFORECAST_H

@class NSDate, NSDictionary;

#import <Foundation/Foundation.h>


@interface _GDSEmissionForecast : NSObject

@property (readonly, nonatomic) NSDate *fetchDate; // ivar: _fetchDate
@property (readonly, nonatomic) NSDictionary *forecastMap; // ivar: _forecastMap
@property (readonly, nonatomic) NSDate *generationDate; // ivar: _generationDate
@property (readonly, nonatomic) CGFloat refetchInterval; // ivar: _refetchInterval


-(id)initWithForecast:(id)arg0 generatedAt:(id)arg1 fetchedAt:(id)arg2 refetchInterval:(CGFloat)arg3 ;


@end


#endif