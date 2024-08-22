// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPFEEDBACKLAYOUTFIELDNAME_H
#define GEORPFEEDBACKLAYOUTFIELDNAME_H

@class PBCodable;
@protocol NSCopying;


#import "GEORPIncidentField.h"

@interface GEORPFeedbackLayoutFieldName : PBCodable <NSCopying>

 {
    GEORPIncidentField *_incidentField;
    int _addressFieldName;
    int _curatedCollectionFieldName;
    int _groundviewFieldName;
    int _incidentType;
    int _otherFieldName;
    int _poiFieldName;
    int _poiImageCorrectionType;
    int _workflowFieldName;
    ? _flags;
}


@property (nonatomic) int addressFieldName;
@property (nonatomic) int curatedCollectionFieldName;
@property (nonatomic) int groundviewFieldName;
@property (nonatomic) BOOL hasAddressFieldName;
@property (nonatomic) BOOL hasCuratedCollectionFieldName;
@property (nonatomic) BOOL hasGroundviewFieldName;
@property (readonly, nonatomic) BOOL hasIncidentField;
@property (nonatomic) BOOL hasIncidentType;
@property (nonatomic) BOOL hasOtherFieldName;
@property (nonatomic) BOOL hasPoiFieldName;
@property (nonatomic) BOOL hasPoiImageCorrectionType;
@property (nonatomic) BOOL hasWorkflowFieldName;
@property (retain, nonatomic) GEORPIncidentField *incidentField;
@property (nonatomic) int incidentType;
@property (nonatomic) int otherFieldName;
@property (nonatomic) int poiFieldName;
@property (nonatomic) int poiImageCorrectionType;
@property (nonatomic) int workflowFieldName;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)addressFieldNameAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)curatedCollectionFieldNameAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)groundviewFieldNameAsString:(int)arg0 ;
-(id)incidentTypeAsString:(int)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)otherFieldNameAsString:(int)arg0 ;
-(id)poiFieldNameAsString:(int)arg0 ;
-(id)poiImageCorrectionTypeAsString:(int)arg0 ;
-(id)workflowFieldNameAsString:(int)arg0 ;
-(int)StringAsAddressFieldName:(id)arg0 ;
-(int)StringAsCuratedCollectionFieldName:(id)arg0 ;
-(int)StringAsGroundviewFieldName:(id)arg0 ;
-(int)StringAsIncidentType:(id)arg0 ;
-(int)StringAsOtherFieldName:(id)arg0 ;
-(int)StringAsPoiFieldName:(id)arg0 ;
-(int)StringAsPoiImageCorrectionType:(id)arg0 ;
-(int)StringAsWorkflowFieldName:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif