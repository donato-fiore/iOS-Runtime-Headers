// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSALTERNATEHEADLINE_H
#define COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSALTERNATEHEADLINE_H

@class PBCodable;
@protocol NSCopying;



@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSAlternateHeadline : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int articleHeadlineTreatmentId; // ivar: _articleHeadlineTreatmentId
@property (nonatomic) int articleHeadlineTreatmentState; // ivar: _articleHeadlineTreatmentState
@property (nonatomic) BOOL hasArticleHeadlineTreatmentId;
@property (nonatomic) BOOL hasArticleHeadlineTreatmentState;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)articleHeadlineTreatmentStateAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsArticleHeadlineTreatmentState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif