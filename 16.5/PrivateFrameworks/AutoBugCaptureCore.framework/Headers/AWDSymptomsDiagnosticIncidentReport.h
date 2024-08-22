// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDSYMPTOMSDIAGNOSTICINCIDENTREPORT_H
#define AWDSYMPTOMSDIAGNOSTICINCIDENTREPORT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface AWDSymptomsDiagnosticIncidentReport : PBCodable <NSCopying>

 {
    ? _timestampsIncidentEvents;
    ? _has;
}


@property (nonatomic) int dampeningType; // ivar: _dampeningType
@property (retain, nonatomic) NSString *detectedName; // ivar: _detectedName
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (retain, nonatomic) NSString *effectiveName; // ivar: _effectiveName
@property (retain, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (nonatomic) int handledResult; // ivar: _handledResult
@property (nonatomic) BOOL hasDampeningType;
@property (readonly, nonatomic) BOOL hasDetectedName;
@property (readonly, nonatomic) BOOL hasDomain;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasEffectiveName;
@property (readonly, nonatomic) BOOL hasGroupIdentifier;
@property (nonatomic) BOOL hasHandledResult;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasSubtype;
@property (readonly, nonatomic) BOOL hasSubtypeContext;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSMutableArray *incidentEvents; // ivar: _incidentEvents
@property (retain, nonatomic) NSMutableArray *relatedNames; // ivar: _relatedNames
@property (retain, nonatomic) NSString *subtype; // ivar: _subtype
@property (retain, nonatomic) NSString *subtypeContext; // ivar: _subtypeContext
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (readonly, nonatomic) *NSUInteger timestampsIncidentEvents;
@property (readonly, nonatomic) NSUInteger timestampsIncidentEventsCount;
@property (retain, nonatomic) NSString *type; // ivar: _type
@property (nonatomic) NSUInteger version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)timestampsIncidentEventsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dampeningTypeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)handledResultAsString:(int)arg0 ;
-(id)incidentEventsAtIndex:(NSUInteger)arg0 ;
-(id)relatedNamesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsDampeningType:(id)arg0 ;
-(int)StringAsHandledResult:(id)arg0 ;
-(void)addIncidentEvents:(id)arg0 ;
-(void)addRelatedNames:(id)arg0 ;
-(void)addTimestampsIncidentEvents:(NSUInteger)arg0 ;
-(void)clearIncidentEvents;
-(void)clearRelatedNames;
-(void)clearTimestampsIncidentEvents;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif