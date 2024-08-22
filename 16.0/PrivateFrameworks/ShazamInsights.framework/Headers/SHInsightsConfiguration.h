// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHINSIGHTSCONFIGURATION_H
#define SHINSIGHTSCONFIGURATION_H

@class SHBagContract;

#import <Foundation/Foundation.h>


@interface SHInsightsConfiguration : NSObject

@property (readonly, nonatomic) CGFloat artistsCachedDataMaxAge;
@property (readonly, nonatomic) BOOL artistsEnabled;
@property (readonly, nonatomic) SHBagContract *bagContract; // ivar: _bagContract
@property (readonly, nonatomic) NSInteger maxGeoChartsGeohashLength;
@property (readonly, nonatomic) NSInteger minGeoChartsGeohashLength;
@property (readonly, nonatomic) CGFloat tracksCachedDataMaxAge;
@property (readonly, nonatomic) BOOL tracksEnabled;


+(void)fetchSharedInstanceWithCompletion:(id)arg0 ;
-(id)artistsClusterEndpoint;
-(id)geoChartsEndpointForDate:(id)arg0 geoHash:(id)arg1 ;
-(id)init;
-(id)initWithBagContract:(id)arg0 ;
-(id)tokenizedURLForBagPathKey:(id)arg0 ;
-(id)tracksClusterEndpointForStorefront:(id)arg0 ;


@end


#endif