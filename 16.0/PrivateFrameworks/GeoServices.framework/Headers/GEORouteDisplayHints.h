// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOROUTEDISPLAYHINTS_H
#define GEOROUTEDISPLAYHINTS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSArray;
@protocol NSCopying, GEOSurchargeOption;


#import "GEORequestOptions.h"

@interface GEORouteDisplayHints : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _availablePaymentTypes;
    ? _availablePrioritizations;
    GEORequestOptions *_transitSurchargeOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _showTransitSchedules;
    ? _flags;
}


@property (readonly, nonatomic) *int availablePaymentTypes;
@property (readonly, nonatomic) NSUInteger availablePaymentTypesCount;
@property (readonly, nonatomic) *int availablePrioritizations;
@property (readonly, nonatomic) NSUInteger availablePrioritizationsCount;
@property (nonatomic) BOOL hasShowTransitSchedules;
@property (readonly, nonatomic) BOOL hasTransitSurchargeOptions;
@property (readonly, nonatomic) NSArray *prioritizationOptions;
@property (nonatomic) BOOL showTransitSchedules;
@property (readonly, nonatomic) NSObject<GEOSurchargeOption> *surchargeOptions;
@property (retain, nonatomic) GEORequestOptions *transitSurchargeOptions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)availablePaymentTypesAsString:(int)arg0 ;
-(id)availablePrioritizationsAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsAvailablePaymentTypes:(id)arg0 ;
-(int)StringAsAvailablePrioritizations:(id)arg0 ;
-(int)availablePaymentTypeAtIndex:(NSUInteger)arg0 ;
-(int)availablePrioritizationAtIndex:(NSUInteger)arg0 ;
-(void)addAvailablePaymentType:(int)arg0 ;
-(void)addAvailablePrioritization:(int)arg0 ;
-(void)clearAvailablePaymentTypes;
-(void)clearAvailablePrioritizations;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif