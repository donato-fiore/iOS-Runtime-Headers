// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMEDIAGROUPPROTOMEDIADESTINATIONAGGREGATEDATA_H
#define HMMEDIAGROUPPROTOMEDIADESTINATIONAGGREGATEDATA_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HMMediaGroupProtoMediaDestinationAggregateData : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *destinationControllerDatas; // ivar: _destinationControllerDatas
@property (retain, nonatomic) NSMutableArray *destinations; // ivar: _destinations
@property (retain, nonatomic) NSMutableArray *groups; // ivar: _groups


+(Class)destinationControllerDataType;
+(Class)destinationType;
+(Class)groupType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)destinationAtIndex:(NSUInteger)arg0 ;
-(id)destinationControllerDataAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)groupAtIndex:(NSUInteger)arg0 ;
-(void)addDestination:(id)arg0 ;
-(void)addDestinationControllerData:(id)arg0 ;
-(void)addGroup:(id)arg0 ;
-(void)clearDestinationControllerDatas;
-(void)clearDestinations;
-(void)clearGroups;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif