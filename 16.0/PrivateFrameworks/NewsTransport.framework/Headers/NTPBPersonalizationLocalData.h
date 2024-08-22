// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBPERSONALIZATIONLOCALDATA_H
#define NTPBPERSONALIZATIONLOCALDATA_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol NSCopying;



@interface NTPBPersonalizationLocalData : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *aggregates; // ivar: _aggregates
@property (retain, nonatomic) NSMutableArray *closedChangeGroups; // ivar: _closedChangeGroups
@property (retain, nonatomic) NSString *currentInstanceIdentifier; // ivar: _currentInstanceIdentifier
@property (readonly, nonatomic) BOOL hasCurrentInstanceIdentifier;
@property (readonly, nonatomic) BOOL hasRemoteRecordData;
@property (retain, nonatomic) NSMutableArray *openChangeGroupDeltas; // ivar: _openChangeGroupDeltas
@property (retain, nonatomic) NSData *remoteRecordData; // ivar: _remoteRecordData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)aggregatesAtIndex:(NSUInteger)arg0 ;
-(id)closedChangeGroupsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)openChangeGroupDeltasAtIndex:(NSUInteger)arg0 ;
-(void)addAggregates:(id)arg0 ;
-(void)addClosedChangeGroups:(id)arg0 ;
-(void)addOpenChangeGroupDeltas:(id)arg0 ;
-(void)clearAggregates;
-(void)clearClosedChangeGroups;
-(void)clearOpenChangeGroupDeltas;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif