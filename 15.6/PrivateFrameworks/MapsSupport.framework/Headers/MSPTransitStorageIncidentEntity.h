// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPTRANSITSTORAGEINCIDENTENTITY_H
#define MSPTRANSITSTORAGEINCIDENTENTITY_H

@class PBCodable, PBUnknownFields, NSString, NSSet;
@protocol GEOTransitIncidentEntity, NSCopying;



@interface MSPTransitStorageIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _nextStopsMuids;
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasMuid;
@property (readonly, nonatomic) BOOL hasNextStopIDs;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger muid;
@property (nonatomic) NSUInteger muid; // ivar: _muid
@property (readonly, nonatomic) NSSet *nextStopIDs;
@property (readonly, nonatomic) *NSUInteger nextStopsMuids;
@property (readonly, nonatomic) NSUInteger nextStopsMuidsCount;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)nextStopsMuidsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithIncidentEntity:(id)arg0 ;
-(void)addNextStopsMuids:(NSUInteger)arg0 ;
-(void)clearNextStopsMuids;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif