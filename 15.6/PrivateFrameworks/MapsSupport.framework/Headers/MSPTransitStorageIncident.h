// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPTRANSITSTORAGEINCIDENT_H
#define MSPTRANSITSTORAGEINCIDENT_H

@class PBCodable, PBUnknownFields, NSArray, NSMutableArray, NSDate, NSString;
@protocol GEOTransitIncident, NSCopying;



@interface MSPTransitStorageIncident : PBCodable <GEOTransitIncident, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _has;
}


@property (readonly, nonatomic) NSArray *affectedEntities;
@property (retain, nonatomic) NSMutableArray *affectedEntities; // ivar: _affectedEntities
@property (readonly, nonatomic, getter=isBlockingIncident) BOOL blockingIncident;
@property (nonatomic) BOOL blockingIncident; // ivar: _blockingIncident
@property (readonly, nonatomic) NSDate *creationDate;
@property (nonatomic) unsigned int creationDatetime; // ivar: _creationDatetime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate;
@property (nonatomic) unsigned int endDatetime; // ivar: _endDatetime
@property (readonly, nonatomic) NSString *fullDescription;
@property (retain, nonatomic) NSString *fullDescription; // ivar: _fullDescription
@property (nonatomic) BOOL hasBlockingIncident;
@property (nonatomic) BOOL hasCreationDatetime;
@property (nonatomic) BOOL hasEndDatetime;
@property (readonly, nonatomic) BOOL hasFullDescription;
@property (nonatomic) BOOL hasIconType;
@property (nonatomic) BOOL hasLastUpdatedDatetime;
@property (readonly, nonatomic) BOOL hasMessageForNonRoutable;
@property (readonly, nonatomic) BOOL hasMessageForRoutePlanning;
@property (readonly, nonatomic) BOOL hasMessageForRouteStepping;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) BOOL hasStartDatetime;
@property (readonly, nonatomic) BOOL hasSummary;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int iconType;
@property (nonatomic) int iconType; // ivar: _iconType
@property (readonly, nonatomic) NSDate *lastUpdated;
@property (nonatomic) unsigned int lastUpdatedDatetime; // ivar: _lastUpdatedDatetime
@property (readonly, nonatomic) NSString *messageForNonRoutable;
@property (retain, nonatomic) NSString *messageForNonRoutable; // ivar: _messageForNonRoutable
@property (readonly, nonatomic) NSString *messageForRoutePlanning;
@property (retain, nonatomic) NSString *messageForRoutePlanning; // ivar: _messageForRoutePlanning
@property (readonly, nonatomic) NSString *messageForRouteStepping;
@property (retain, nonatomic) NSString *messageForRouteStepping; // ivar: _messageForRouteStepping
@property (readonly, nonatomic) NSUInteger muid;
@property (nonatomic) NSUInteger muid; // ivar: _muid
@property (readonly, nonatomic) NSDate *startDate;
@property (nonatomic) unsigned int startDatetime; // ivar: _startDatetime
@property (readonly, nonatomic) NSString *summary;
@property (retain, nonatomic) NSString *summary; // ivar: _summary
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)affectedEntitiesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)iconTypeAsString:(int)arg0 ;
-(id)initWithIncident:(id)arg0 ;
-(int)StringAsIconType:(id)arg0 ;
-(void)addAffectedEntities:(id)arg0 ;
-(void)clearAffectedEntities;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif