// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDTRANSITSCHEDULEGROUP_H
#define GEOPDTRANSITSCHEDULEGROUP_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEOPDTransitScheduleGroup : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _departureSequenceContainerIndexs;
    ? _departureSequenceIndexs;
    ? _incidentIds;
    NSString *_displayName;
    NSString *_pinnedDisplayName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _groupType;
    unsigned int _maxWalkingDistance;
    unsigned int _maxWalkingTime;
    unsigned int _minWalkingDistance;
    unsigned int _minWalkingTime;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif