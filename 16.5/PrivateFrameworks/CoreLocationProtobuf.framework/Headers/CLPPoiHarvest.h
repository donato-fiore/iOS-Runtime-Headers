// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPPOIHARVEST_H
#define CLPPOIHARVEST_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "CLPPoiTriggerEvent.h"

@interface CLPPoiHarvest : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *accessPoints; // ivar: _accessPoints
@property (retain, nonatomic) NSMutableArray *locations; // ivar: _locations
@property (retain, nonatomic) CLPPoiTriggerEvent *triggerEvent; // ivar: _triggerEvent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)accessPointsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)locationsAtIndex:(NSUInteger)arg0 ;
-(void)addAccessPoints:(id)arg0 ;
-(void)addLocations:(id)arg0 ;
-(void)clearAccessPoints;
-(void)clearLocations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif