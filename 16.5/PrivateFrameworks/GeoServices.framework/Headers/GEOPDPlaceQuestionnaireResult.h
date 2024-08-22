// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDPLACEQUESTIONNAIRERESULT_H
#define GEOPDPLACEQUESTIONNAIRERESULT_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;


#import "GEOPDMapsIdentifier.h"
#import "GEOPDPhotoConstraints.h"
#import "GEOPDScorecardLayout.h"

@interface GEOPDPlaceQuestionnaireResult : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_historicalMapsIds;
    GEOPDMapsIdentifier *_mapsId;
    GEOPDPhotoConstraints *_photoConstraints;
    GEOPDScorecardLayout *_scorecardLayout;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _status;
    BOOL _alwaysPositionInitialRatingCtaTowardsTop;
    BOOL _collectPhotos;
    BOOL _isOverride;
    BOOL _suppressOnExistingRichData;
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
-(void)writeTo:(id)arg0 ;


@end


#endif