// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBALTERNATEHEADLINE_H
#define NTPBALTERNATEHEADLINE_H

@class PBCodable;
@protocol NSCopying;



@interface NTPBAlternateHeadline : PBCodable <NSCopying>

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
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif