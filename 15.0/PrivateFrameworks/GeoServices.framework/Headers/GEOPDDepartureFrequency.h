// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDDEPARTUREFREQUENCY_H
#define GEOPDDEPARTUREFREQUENCY_H

@class PBCodable, PBUnknownFields, NSString, NSDate;
@protocol GEOTransitDepartureFrequency, NSCopying;



@interface GEOPDDepartureFrequency : PBCodable <GEOTransitDepartureFrequency, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    unsigned int _displayDepartureFrequency;
    unsigned int _earliestDepartureTime;
    unsigned int _latestDepartureTime;
    unsigned int _maxDepartureFrequency;
    unsigned int _minDepartureFrequency;
    BOOL _isEstimated;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int displayDepartureFrequency;
@property (readonly, nonatomic) NSInteger displayFrequency;
@property (nonatomic) unsigned int earliestDepartureTime;
@property (readonly, nonatomic) NSDate *firstTimeInFrequency;
@property (readonly, nonatomic) CGFloat frequencyForSorting;
@property (readonly, nonatomic) NSInteger frequencyType;
@property (nonatomic) BOOL hasDisplayDepartureFrequency;
@property (nonatomic) BOOL hasEarliestDepartureTime;
@property (nonatomic) BOOL hasIsEstimated;
@property (nonatomic) BOOL hasLatestDepartureTime;
@property (nonatomic) BOOL hasMaxDepartureFrequency;
@property (nonatomic) BOOL hasMinDepartureFrequency;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEstimate;
@property (nonatomic) BOOL isEstimated;
@property (readonly, nonatomic) NSDate *lastTimeInFrequency;
@property (nonatomic) unsigned int latestDepartureTime;
@property (nonatomic) unsigned int maxDepartureFrequency;
@property (readonly, nonatomic) NSInteger maxFrequency;
@property (nonatomic) unsigned int minDepartureFrequency;
@property (readonly, nonatomic) NSInteger minFrequency;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidAtDate:(id)arg0 ;
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