// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGM2CONTACTDETAILEXTRACTION_H
#define SGM2CONTACTDETAILEXTRACTION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SGM2ContactDetailExtraction : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int detail; // ivar: _detail
@property (nonatomic) unsigned int extractionModelVersion; // ivar: _extractionModelVersion
@property (nonatomic) int extractionSignatureSource; // ivar: _extractionSignatureSource
@property (nonatomic) int foundInSenderCNContact; // ivar: _foundInSenderCNContact
@property (nonatomic) BOOL hasDetail;
@property (nonatomic) BOOL hasExtractionModelVersion;
@property (nonatomic) BOOL hasExtractionSignatureSource;
@property (nonatomic) BOOL hasFoundInSenderCNContact;
@property (nonatomic) BOOL hasIsUnlikelyPhone;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasOutcome;
@property (nonatomic) BOOL hasSignature;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) BOOL isUnlikelyPhone; // ivar: _isUnlikelyPhone
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) int outcome; // ivar: _outcome
@property (nonatomic) BOOL signature; // ivar: _signature
@property (nonatomic) int source; // ivar: _source


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)detailAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)extractionSignatureSourceAsString:(int)arg0 ;
-(id)foundInSenderCNContactAsString:(int)arg0 ;
-(id)outcomeAsString:(int)arg0 ;
-(id)sourceAsString:(int)arg0 ;
-(int)StringAsDetail:(id)arg0 ;
-(int)StringAsExtractionSignatureSource:(id)arg0 ;
-(int)StringAsFoundInSenderCNContact:(id)arg0 ;
-(int)StringAsOutcome:(id)arg0 ;
-(int)StringAsSource:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif