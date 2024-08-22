// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMEDIAGROUPPROTOMEDIAPARTICIPANTDATA_H
#define HMMEDIAGROUPPROTOMEDIAPARTICIPANTDATA_H

@class PBCodable, NSMutableArray, HMMediaGroupProtoMediaDestination, HMMediaGroupProtoMediaDestinationControllerData;
@protocol NSCopying;



@interface HMMediaGroupProtoMediaParticipantData : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *backupGroups; // ivar: _backupGroups
@property (retain, nonatomic) HMMediaGroupProtoMediaDestination *destination; // ivar: _destination
@property (retain, nonatomic) HMMediaGroupProtoMediaDestinationControllerData *destinationController; // ivar: _destinationController
@property (readonly, nonatomic) BOOL hasDestination;
@property (readonly, nonatomic) BOOL hasDestinationController;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)backupGroupsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addBackupGroups:(id)arg0 ;
-(void)clearBackupGroups;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif