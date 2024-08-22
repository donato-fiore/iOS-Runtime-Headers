// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKPROTOPIGMENT_H
#define NTKPROTOPIGMENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTKProtoPigment : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *alternativeLocalizedStringTableName; // ivar: _alternativeLocalizedStringTableName
@property (retain, nonatomic) NSString *bundlePrincipalClassName; // ivar: _bundlePrincipalClassName
@property (retain, nonatomic) NSString *collectionName; // ivar: _collectionName
@property (nonatomic) float colorFraction; // ivar: _colorFraction
@property (nonatomic) BOOL fromStore; // ivar: _fromStore
@property (readonly, nonatomic) BOOL hasAlternativeLocalizedStringTableName;
@property (readonly, nonatomic) BOOL hasBundlePrincipalClassName;
@property (readonly, nonatomic) BOOL hasCollectionName;
@property (nonatomic) BOOL hasColorFraction;
@property (nonatomic) BOOL hasFromStore;
@property (nonatomic) BOOL hasIsAddable;
@property (readonly, nonatomic) BOOL hasOptionName;
@property (nonatomic) BOOL hasSupportsSlider;
@property (nonatomic) BOOL isAddable; // ivar: _isAddable
@property (retain, nonatomic) NSString *optionName; // ivar: _optionName
@property (nonatomic) BOOL supportsSlider; // ivar: _supportsSlider


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