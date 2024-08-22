// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMSGEVENTMAPSWIDGETSINTERACTIONSESSION_H
#define GEOLOGMSGEVENTMAPSWIDGETSINTERACTIONSESSION_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEOMapsDestinationsWidget.h"
#import "GEOMapsNearbyWidget.h"
#import "GEOMapsTransitWidget.h"

@interface GEOLogMsgEventMapsWidgetsInteractionSession : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOMapsDestinationsWidget *_mapsDestinationsWidget;
    GEOMapsNearbyWidget *_mapsNearbyWidget;
    GEOMapsTransitWidget *_mapsTransitWidget;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _duration;
    int _endState;
    int _localDayOfWeek;
    int _localHour;
    int _mapsWidgetType;
    BOOL _lockedMode;
    ? _flags;
}


@property (nonatomic) int duration;
@property (nonatomic) int endState;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasEndState;
@property (nonatomic) BOOL hasLocalDayOfWeek;
@property (nonatomic) BOOL hasLocalHour;
@property (nonatomic) BOOL hasLockedMode;
@property (readonly, nonatomic) BOOL hasMapsDestinationsWidget;
@property (readonly, nonatomic) BOOL hasMapsNearbyWidget;
@property (readonly, nonatomic) BOOL hasMapsTransitWidget;
@property (nonatomic) BOOL hasMapsWidgetType;
@property (nonatomic) int localDayOfWeek;
@property (nonatomic) int localHour;
@property (nonatomic) BOOL lockedMode;
@property (retain, nonatomic) GEOMapsDestinationsWidget *mapsDestinationsWidget;
@property (retain, nonatomic) GEOMapsNearbyWidget *mapsNearbyWidget;
@property (retain, nonatomic) GEOMapsTransitWidget *mapsTransitWidget;
@property (nonatomic) int mapsWidgetType;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)endStateAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)mapsWidgetTypeAsString:(int)arg0 ;
-(int)StringAsEndState:(id)arg0 ;
-(int)StringAsMapsWidgetType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif