// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCMAPSURLGENERATOR_H
#define DCMAPSURLGENERATOR_H

@class NSMutableDictionary;


#import "DCURLGenerator.h"
#import "DCMapsLink.h"

@interface DCMapsURLGenerator : DCURLGenerator

@property (readonly, nonatomic) DCMapsLink *mapsLink; // ivar: _mapsLink
@property (readonly, nonatomic) NSMutableDictionary *queryDictionary; // ivar: _queryDictionary


+(id)URLWithMapsLink:(id)arg0 ;
-(id)URL;
-(id)directionsMode;
-(id)host;
-(id)initWithMapsLink:(id)arg0 ;
-(id)mapType;
-(id)path;
-(id)query;
-(id)scheme;
-(void)populateQueryDictionary;
-(void)setString:(id)arg0 forQueryKey:(id)arg1 ;


@end


#endif