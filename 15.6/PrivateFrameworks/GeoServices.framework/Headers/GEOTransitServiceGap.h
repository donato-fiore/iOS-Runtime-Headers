// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTRANSITSERVICEGAP_H
#define GEOTRANSITSERVICEGAP_H

@class PBCodable, PBUnknownFields, NSString, NSDate;
@protocol GEOServiceGap, NSCopying, GEOServerFormattedString;


#import "GEOFormattedString.h"

@interface GEOTransitServiceGap : PBCodable <GEOServiceGap, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_displayMessage;
    unsigned int _absEndTime;
    unsigned int _absStartTime;
    unsigned int _appearsBeforeSuggestedRouteIndex;
    ? _flags;
}


@property (nonatomic) unsigned int absEndTime;
@property (nonatomic) unsigned int absStartTime;
@property (nonatomic) unsigned int appearsBeforeSuggestedRouteIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *displayMessagFormatString;
@property (retain, nonatomic) GEOFormattedString *displayMessage;
@property (readonly, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL hasAbsEndTime;
@property (nonatomic) BOOL hasAbsStartTime;
@property (nonatomic) BOOL hasAppearsBeforeSuggestedRouteIndex;
@property (readonly, nonatomic) BOOL hasDisplayMessage;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger routeListInsertBeforeIndex;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif