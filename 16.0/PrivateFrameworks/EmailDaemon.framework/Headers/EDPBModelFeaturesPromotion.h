// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDPBMODELFEATURESPROMOTION_H
#define EDPBMODELFEATURESPROMOTION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface EDPBModelFeaturesPromotion : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasHeaderKeyFilteredCount;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (nonatomic) BOOL hasToCount;
@property (nonatomic) BOOL hasUnknownFeatureCount;
@property (nonatomic) unsigned int headerKeyFilteredCount; // ivar: _headerKeyFilteredCount
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (nonatomic) unsigned int toCount; // ivar: _toCount
@property (nonatomic) unsigned int unknownFeatureCount; // ivar: _unknownFeatureCount


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif