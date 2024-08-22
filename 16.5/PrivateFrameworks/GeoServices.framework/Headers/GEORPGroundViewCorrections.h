// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPGROUNDVIEWCORRECTIONS_H
#define GEORPGROUNDVIEWCORRECTIONS_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;


#import "GEORPFeedbackAddressFields.h"

@interface GEORPGroundViewCorrections : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    GEORPFeedbackAddressFields *_addressToCensor;
    int _correctionType;
    ? _flags;
}


@property (retain, nonatomic) GEORPFeedbackAddressFields *addressToCensor;
@property (nonatomic) int correctionType;
@property (readonly, nonatomic) BOOL hasAddressToCensor;
@property (nonatomic) BOOL hasCorrectionType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)correctionTypeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsCorrectionType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif