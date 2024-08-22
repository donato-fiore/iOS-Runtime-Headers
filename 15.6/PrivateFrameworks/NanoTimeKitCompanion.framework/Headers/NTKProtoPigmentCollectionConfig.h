// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKPROTOPIGMENTCOLLECTIONCONFIG_H
#define NTKPROTOPIGMENTCOLLECTIONCONFIG_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NTKProtoPigmentCollectionConfig : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *collectionOverride; // ivar: _collectionOverride
@property (retain, nonatomic) NSString *defaultColorOptionName; // ivar: _defaultColorOptionName
@property (retain, nonatomic) NSString *defaultConfigAttributeName; // ivar: _defaultConfigAttributeName
@property (retain, nonatomic) NSMutableArray *defaultGalleryColorNames; // ivar: _defaultGalleryColorNames
@property (nonatomic) BOOL excludesDuotone; // ivar: _excludesDuotone
@property (retain, nonatomic) NSMutableArray *exclusions; // ivar: _exclusions
@property (retain, nonatomic) NSString *fallbackDefaultColorOptionName; // ivar: _fallbackDefaultColorOptionName
@property (retain, nonatomic) NSString *featureFlag; // ivar: _featureFlag
@property (readonly, nonatomic) BOOL hasCollectionOverride;
@property (readonly, nonatomic) BOOL hasDefaultColorOptionName;
@property (readonly, nonatomic) BOOL hasDefaultConfigAttributeName;
@property (nonatomic) BOOL hasExcludesDuotone;
@property (readonly, nonatomic) BOOL hasFallbackDefaultColorOptionName;
@property (readonly, nonatomic) BOOL hasFeatureFlag;
@property (nonatomic) BOOL hasIsAddable;
@property (nonatomic) BOOL hasSensitivity;
@property (nonatomic) BOOL hasSortedByHue;
@property (nonatomic) BOOL hasSupportsSlider;
@property (nonatomic) BOOL isAddable; // ivar: _isAddable
@property (retain, nonatomic) NSMutableArray *migrations; // ivar: _migrations
@property (nonatomic) BOOL sensitivity; // ivar: _sensitivity
@property (nonatomic) BOOL sortedByHue; // ivar: _sortedByHue
@property (nonatomic) BOOL supportsSlider; // ivar: _supportsSlider


+(Class)migrationType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultGalleryColorNamesAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)exclusionsAtIndex:(NSUInteger)arg0 ;
-(id)migrationAtIndex:(NSUInteger)arg0 ;
-(void)addDefaultGalleryColorNames:(id)arg0 ;
-(void)addExclusions:(id)arg0 ;
-(void)addMigration:(id)arg0 ;
-(void)clearDefaultGalleryColorNames;
-(void)clearExclusions;
-(void)clearMigrations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif