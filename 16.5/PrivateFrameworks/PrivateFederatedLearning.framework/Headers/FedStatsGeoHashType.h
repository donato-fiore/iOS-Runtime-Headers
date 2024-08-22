// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FEDSTATSGEOHASHTYPE_H
#define FEDSTATSGEOHASHTYPE_H



#import "FedStatsBoundedULongType.h"

@interface FedStatsGeoHashType : FedStatsBoundedULongType

@property (nonatomic) NSUInteger hashLength; // ivar: _hashLength


+(NSUInteger)geoHashCharToInteger:(char)arg0 ;
+(id)createFromDict:(id)arg0 possibleError:(*id)arg1 ;
-(id)decodeFromIndex:(id)arg0 possibleError:(*id)arg1 ;
-(id)encodeToIndex:(id)arg0 possibleError:(*id)arg1 ;
-(id)initWithGeoHashLength:(NSUInteger)arg0 ;
-(id)sampleForIndex:(NSUInteger)arg0 ;


@end


#endif