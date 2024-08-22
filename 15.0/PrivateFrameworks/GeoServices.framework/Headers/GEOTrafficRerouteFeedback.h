// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTRAFFICREROUTEFEEDBACK_H
#define GEOTRAFFICREROUTEFEEDBACK_H

@class PBCodable, PBDataReader, NSData, NSMutableArray;
@protocol NSCopying;



@interface GEOTrafficRerouteFeedback : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSData *_oldRouteID;
    NSMutableArray *_oldRouteIncidents;
    NSData *_reroutedRouteID;
    NSData *_responseId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _actionType;
    int _alertType;
    unsigned int _oldRouteHistoricTravelTime;
    unsigned int _oldRouteTravelTime;
    int _rerouteType;
    unsigned int _reroutedRouteHistoricTravelTime;
    unsigned int _reroutedRouteTravelTime;
    BOOL _backgrounded;
    ? _flags;
}


@property (nonatomic) int actionType;
@property (nonatomic) int alertType;
@property (nonatomic) BOOL backgrounded;
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) BOOL hasAlertType;
@property (nonatomic) BOOL hasBackgrounded;
@property (nonatomic) BOOL hasOldRouteHistoricTravelTime;
@property (readonly, nonatomic) BOOL hasOldRouteID;
@property (nonatomic) BOOL hasOldRouteTravelTime;
@property (nonatomic) BOOL hasRerouteType;
@property (nonatomic) BOOL hasReroutedRouteHistoricTravelTime;
@property (readonly, nonatomic) BOOL hasReroutedRouteID;
@property (nonatomic) BOOL hasReroutedRouteTravelTime;
@property (readonly, nonatomic) BOOL hasResponseId;
@property (nonatomic) unsigned int oldRouteHistoricTravelTime;
@property (retain, nonatomic) NSData *oldRouteID;
@property (retain, nonatomic) NSMutableArray *oldRouteIncidents;
@property (nonatomic) unsigned int oldRouteTravelTime;
@property (nonatomic) int rerouteType;
@property (nonatomic) unsigned int reroutedRouteHistoricTravelTime;
@property (retain, nonatomic) NSData *reroutedRouteID;
@property (nonatomic) unsigned int reroutedRouteTravelTime;
@property (retain, nonatomic) NSData *responseId;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionTypeAsString:(int)arg0 ;
-(id)alertTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)oldRouteIncidentsAtIndex:(NSUInteger)arg0 ;
-(id)rerouteTypeAsString:(int)arg0 ;
-(int)StringAsActionType:(id)arg0 ;
-(int)StringAsAlertType:(id)arg0 ;
-(int)StringAsRerouteType:(id)arg0 ;
-(void)addOldRouteIncidents:(id)arg0 ;
-(void)clearOldRouteIncidents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif