// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGM2BIRTHDAYEXTRACTIONWITHSUPERVISION_H
#define SGM2BIRTHDAYEXTRACTIONWITHSUPERVISION_H

@class PBCodable;
@protocol NSCopying;



@interface SGM2BirthdayExtractionWithSupervision : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL dateIsCorrect; // ivar: _dateIsCorrect
@property (nonatomic) BOOL didRegexTrigger; // ivar: _didRegexTrigger
@property (nonatomic) BOOL didResponseKitTrigger; // ivar: _didResponseKitTrigger
@property (nonatomic) BOOL hasDateIsCorrect;
@property (nonatomic) BOOL hasDidRegexTrigger;
@property (nonatomic) BOOL hasDidResponseKitTrigger;
@property (nonatomic) BOOL hasIsFromCongratulation;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) BOOL hasOffset;
@property (nonatomic) BOOL isFromCongratulation; // ivar: _isFromCongratulation
@property (nonatomic) unsigned int modelVersion; // ivar: _modelVersion
@property (nonatomic) int offset; // ivar: _offset


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)offsetAsString:(int)arg0 ;
-(int)StringAsOffset:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif