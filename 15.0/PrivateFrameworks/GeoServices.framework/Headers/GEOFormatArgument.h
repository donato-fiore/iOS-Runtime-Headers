// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOFORMATARGUMENT_H
#define GEOFORMATARGUMENT_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString, NSArray;
@protocol GEOServerFormatToken, NSCopying, GEOTransitArtworkDataSource, GEOServerFormatTokenCountdownValue, GEOServerFormatTokenManeuverValue, GEOServerFormatTokenNumberData, GEOServerFormatTokenPriceValue, GEOServerFormatTokenUrlValue;


#import "GEOPBTransitArtwork.h"
#import "GEOCountdownData.h"
#import "GEOManeuverData.h"
#import "GEOMeasurementData.h"
#import "GEONumberData.h"
#import "GEOPrice.h"
#import "GEOURLData.h"

@interface GEOFormatArgument : PBCodable <GEOServerFormatToken, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _valInt3s;
    GEOPBTransitArtwork *_artwork;
    GEOCountdownData *_countdownData;
    GEOManeuverData *_maneuverData;
    GEOMeasurementData *_measurementData;
    GEONumberData *_numberData;
    GEOPrice *_price;
    NSMutableArray *_timestampDatas;
    NSString *_token;
    GEOURLData *_urlData;
    NSString *_valString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _format;
    unsigned int _valInt1;
    unsigned int _valInt2;
    ? _flags;
}


@property (retain, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *artworkValue;
@property (retain, nonatomic) GEOCountdownData *countdownData;
@property (readonly, nonatomic) NSObject<GEOServerFormatTokenCountdownValue> *countdownValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int format;
@property (readonly, nonatomic) BOOL hasArtwork;
@property (readonly, nonatomic) BOOL hasCountdownData;
@property (nonatomic) BOOL hasFormat;
@property (readonly, nonatomic) BOOL hasManeuverData;
@property (readonly, nonatomic) BOOL hasMeasurementData;
@property (readonly, nonatomic) BOOL hasNumberData;
@property (readonly, nonatomic) BOOL hasPrice;
@property (readonly, nonatomic) BOOL hasToken;
@property (readonly, nonatomic) BOOL hasUrlData;
@property (nonatomic) BOOL hasValInt1;
@property (nonatomic) BOOL hasValInt2;
@property (readonly, nonatomic) BOOL hasValString;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEOManeuverData *maneuverData;
@property (readonly, nonatomic) NSObject<GEOServerFormatTokenManeuverValue> *maneuverValue;
@property (retain, nonatomic) GEOMeasurementData *measurementData;
@property (readonly, nonatomic) NSObject<GEOServerFormatTokenNumberData> *numberData;
@property (retain, nonatomic) GEONumberData *numberData;
@property (readonly, nonatomic) float percentageValue;
@property (retain, nonatomic) GEOPrice *price;
@property (readonly, nonatomic) NSObject<GEOServerFormatTokenPriceValue> *priceValue;
@property (readonly, nonatomic) BOOL shouldScaleUnits;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *timeStampValues;
@property (retain, nonatomic) NSMutableArray *timestampDatas;
@property (readonly, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *token;
@property (readonly, nonatomic) NSInteger type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) GEOURLData *urlData;
@property (readonly, nonatomic) NSObject<GEOServerFormatTokenUrlValue> *urlValue;
@property (nonatomic) unsigned int valInt1;
@property (nonatomic) unsigned int valInt2;
@property (readonly, nonatomic) *unsigned int valInt3s;
@property (readonly, nonatomic) NSUInteger valInt3sCount;
@property (retain, nonatomic) NSString *valString;
@property (readonly, nonatomic) unsigned int value1;
@property (readonly, nonatomic) unsigned int value2;
@property (readonly, nonatomic) NSArray *value3s;


+(BOOL)isValid:(id)arg0 ;
+(Class)timestampDataType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)_secondsRoundedUpToNearestMinute:(CGFloat)arg0 ;
-(id)_stringForDurationSeconds:(CGFloat)arg0 unitsStyle:(NSInteger)arg1 ;
-(id)_stringForPower:(CGFloat)arg0 unit:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)formatAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)stringWithDefaultValues;
-(id)timestampDataAtIndex:(NSUInteger)arg0 ;
-(int)StringAsFormat:(id)arg0 ;
-(unsigned int)valInt3AtIndex:(NSUInteger)arg0 ;
-(void)addTimestampData:(id)arg0 ;
-(void)addValInt3:(unsigned int)arg0 ;
-(void)clearTimestampDatas;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)clearValInt3s;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif