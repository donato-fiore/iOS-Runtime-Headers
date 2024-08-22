// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKPIGMENTEDITOPTION_H
#define NTKPIGMENTEDITOPTION_H

@class NSString, NSNumber, NSBundle;
@protocol NSCopying, NTKPigmentEditOptionConvertible, NSSecureCoding;


#import "NTKEditOption.h"

@interface NTKPigmentEditOption : NTKEditOption <NSCopying, NTKPigmentEditOptionConvertible, NSSecureCoding>

 {
    NSString *_localizedName;
    NSString *_localizedCollectionName;
}


@property (retain, nonatomic) NSString *alternativeLocalizedStringTableName; // ivar: _alternativeLocalizedStringTableName
@property (retain, nonatomic) NSString *bundlePrincipalClassName; // ivar: _bundlePrincipalClassName
@property (readonly, nonatomic) NSString *collectionName; // ivar: _collectionName
@property (readonly, nonatomic) CGFloat colorFraction; // ivar: _colorFraction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *desiredPosition; // ivar: _desiredPosition
@property (retain, nonatomic) NSString *effectiveCollectionName; // ivar: _effectiveCollectionName
@property (retain, nonatomic) NSString *effectiveOptionName; // ivar: _effectiveOptionName
@property (nonatomic, getter=isFromStore) BOOL fromStore; // ivar: _fromStore
@property (retain, nonatomic) NSString *fullname; // ivar: _fullname
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isAddable; // ivar: _isAddable
@property (nonatomic) BOOL isSensitiveUI; // ivar: _isSensitiveUI
@property (readonly, nonatomic) BOOL isVisible;
@property (nonatomic) BOOL loadedBundleFromClass; // ivar: _loadedBundleFromClass
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) NSBundle *mainBundle; // ivar: _mainBundle
@property (readonly, nonatomic) NSString *optionName; // ivar: _optionName
@property (nonatomic) BOOL sortedByHue; // ivar: _sortedByHue
@property (retain, nonatomic) NSBundle *sourceBundle; // ivar: _sourceBundle
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsSlider; // ivar: _supportsSlider


+(BOOL)hasInlineCollectionInOptionName:(id)arg0 ;
+(BOOL)isMultitoneOptionWithOptionName:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(CGFloat)defaultFraction;
+(id)duotoneNameWithName:(id)arg0 otherName:(id)arg1 ;
+(id)fullnameWithCollectionName:(id)arg0 optionName:(id)arg1 ;
+(id)legacyOptionWithPigmentEditOption:(id)arg0 forDevice:(id)arg1 ;
+(id)multitoneColorNames:(id)arg0 ;
+(id)multitonePigmentAtIndex:(NSUInteger)arg0 forColorName:(id)arg1 groupName:(id)arg2 ;
+(id)pigmentNamed:(id)arg0 ;
+(void)effectiveNamesFromName:(id)arg0 effectiveCollectionName:(*id)arg1 effectiveOptionName:(*id)arg2 ;
+(void)parseFullname:(id)arg0 collectionName:(*id)arg1 optionName:(*id)arg2 fraction:(*CGFloat)arg3 ;
+(void)parserIdentifier:(id)arg0 collectionName:(*id)arg1 optionName:(*id)arg2 colorFraction:(*CGFloat)arg3 separator:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualIgnoringFraction:(id)arg0 ;
-(BOOL)isEquivalentToOption:(id)arg0 ;
-(BOOL)isMultiColor;
-(BOOL)isMultitoneOption;
-(BOOL)isPrideOption;
-(BOOL)isRainbowColor;
-(BOOL)isValidOption;
-(BOOL)isWhiteColor;
-(NSInteger)swatchStyle;
-(id)JSONObjectRepresentation;
-(id)JSONObjectRepresentationForFace:(id)arg0 ;
-(id)_buildFullname;
-(id)_resolveBundleWithBundlePrincipalClassName:(id)arg0 ;
-(id)copyWithCollectionOverride:(id)arg0 ;
-(id)copyWithColorFraction:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dailySnapshotKey;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithFullname:(id)arg0 ;
-(id)initWithJSONObjectRepresentation:(id)arg0 forDevice:(id)arg1 ;
-(id)initWithOptionName:(id)arg0 collectionName:(id)arg1 ;
-(id)initWithOptionName:(id)arg0 collectionName:(id)arg1 colorFraction:(CGFloat)arg2 ;
-(id)initWithProtoBuffer:(id)arg0 ;
-(id)json;
-(id)legacyJSONRepresentationForFace:(id)arg0 ;
-(id)localizationTableNames;
-(id)localizedCollectionName;
-(id)localizedName;
-(id)localizedNameForKey:(id)arg0 ;
-(id)localizedNameForKey:(id)arg0 fromTable:(id)arg1 separatorString:(id)arg2 ;
-(id)localizedNameForKey:(id)arg0 table:(id)arg1 ;
-(id)multitoneNamesWithoutCollection;
-(id)pigmentEditOption;
-(id)protoBuffer;
-(id)uniqueName;
-(void)encodeWithCoder:(id)arg0 ;
-(void)extractEffectiveCollectionName:(*id)arg0 effectiveOptionName:(*id)arg1 ;
-(void)loadEffectiveNames;


@end


#endif