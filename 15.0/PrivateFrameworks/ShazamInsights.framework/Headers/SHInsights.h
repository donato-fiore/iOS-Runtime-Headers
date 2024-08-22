// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHINSIGHTS_H
#define SHINSIGHTS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface SHInsights : NSObject

@property (retain, nonatomic) NSDictionary *insightsDictionary; // ivar: _insightsDictionary


-(NSInteger)maxGeoChartsGeohashLength;
-(NSInteger)minGeoChartsGeohashLength;
-(id)geoChartsEndpointForDate:(id)arg0 geoHash:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)targetingEndpointForStorefront:(id)arg0 ;


@end


#endif