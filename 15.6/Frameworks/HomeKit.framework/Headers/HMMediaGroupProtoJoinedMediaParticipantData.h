// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMMEDIAGROUPPROTOJOINEDMEDIAPARTICIPANTDATA_H
#define HMMEDIAGROUPPROTOJOINEDMEDIAPARTICIPANTDATA_H

@class PBCodable;
@protocol NSCopying;


#import "HMMediaGroupProtoJoinedMediaDestination.h"
#import "HMMediaGroupProtoMediaDestinationControllerData.h"

@interface HMMediaGroupProtoJoinedMediaParticipantData : PBCodable <NSCopying>



@property (retain, nonatomic) HMMediaGroupProtoJoinedMediaDestination *destination; // ivar: _destination
@property (retain, nonatomic) HMMediaGroupProtoMediaDestinationControllerData *destinationController; // ivar: _destinationController
@property (readonly, nonatomic) BOOL hasDestination;
@property (readonly, nonatomic) BOOL hasDestinationController;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif