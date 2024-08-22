// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHCODABLEACHIEVEMENT_H
#define ACHCODABLEACHIEVEMENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "ACHCodableTemplate.h"
#import "ACHCodableColor.h"

@interface ACHCodableAchievement : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ACHCodableTemplate *achievementTemplate; // ivar: _achievementTemplate
@property (retain, nonatomic) ACHCodableColor *badgeEnamelColor; // ivar: _badgeEnamelColor
@property (retain, nonatomic) ACHCodableColor *badgeMetalColor; // ivar: _badgeMetalColor
@property (nonatomic) NSInteger badgeModelVersion; // ivar: _badgeModelVersion
@property (retain, nonatomic) NSString *badgeShapeName; // ivar: _badgeShapeName
@property (nonatomic) BOOL badgeUsesFullColorEnamel; // ivar: _badgeUsesFullColorEnamel
@property (nonatomic) BOOL badgeUsesTriColorEnamel; // ivar: _badgeUsesTriColorEnamel
@property (retain, nonatomic) NSMutableArray *customPlaceholderValues; // ivar: _customPlaceholderValues
@property (retain, nonatomic) NSMutableArray *earnedInstances; // ivar: _earnedInstances
@property (retain, nonatomic) ACHCodableColor *enamelTriColor1; // ivar: _enamelTriColor1
@property (retain, nonatomic) ACHCodableColor *enamelTriColor2; // ivar: _enamelTriColor2
@property (retain, nonatomic) ACHCodableColor *enamelTriColor3; // ivar: _enamelTriColor3
@property (nonatomic) BOOL faceHasMetalInlay; // ivar: _faceHasMetalInlay
@property (retain, nonatomic) NSString *goalUnitString; // ivar: _goalUnitString
@property (nonatomic) CGFloat goalValue; // ivar: _goalValue
@property (readonly, nonatomic) BOOL hasAchievementTemplate;
@property (readonly, nonatomic) BOOL hasBadgeEnamelColor;
@property (readonly, nonatomic) BOOL hasBadgeMetalColor;
@property (nonatomic) BOOL hasBadgeModelVersion;
@property (readonly, nonatomic) BOOL hasBadgeShapeName;
@property (nonatomic) BOOL hasBadgeUsesFullColorEnamel;
@property (nonatomic) BOOL hasBadgeUsesTriColorEnamel;
@property (readonly, nonatomic) BOOL hasEnamelTriColor1;
@property (readonly, nonatomic) BOOL hasEnamelTriColor2;
@property (readonly, nonatomic) BOOL hasEnamelTriColor3;
@property (nonatomic) BOOL hasFaceHasMetalInlay;
@property (readonly, nonatomic) BOOL hasGoalUnitString;
@property (nonatomic) BOOL hasGoalValue;
@property (readonly, nonatomic) BOOL hasLocalizationBundleURL;
@property (readonly, nonatomic) BOOL hasProgressUnitString;
@property (nonatomic) BOOL hasProgressValue;
@property (readonly, nonatomic) BOOL hasPropertyListBundleURL;
@property (readonly, nonatomic) BOOL hasResourceBundleURL;
@property (readonly, nonatomic) BOOL hasSection;
@property (readonly, nonatomic) BOOL hasStickerBundleURL;
@property (readonly, nonatomic) BOOL hasTextureFilename;
@property (nonatomic) BOOL hasUnearnedUsesTwoToneEnamel;
@property (retain, nonatomic) NSString *localizationBundleURL; // ivar: _localizationBundleURL
@property (retain, nonatomic) NSString *progressUnitString; // ivar: _progressUnitString
@property (nonatomic) CGFloat progressValue; // ivar: _progressValue
@property (retain, nonatomic) NSString *propertyListBundleURL; // ivar: _propertyListBundleURL
@property (retain, nonatomic) NSString *resourceBundleURL; // ivar: _resourceBundleURL
@property (retain, nonatomic) NSString *section; // ivar: _section
@property (retain, nonatomic) NSString *stickerBundleURL; // ivar: _stickerBundleURL
@property (retain, nonatomic) NSString *textureFilename; // ivar: _textureFilename
@property (nonatomic) BOOL unearnedUsesTwoToneEnamel; // ivar: _unearnedUsesTwoToneEnamel


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customPlaceholderValuesAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)earnedInstancesAtIndex:(NSUInteger)arg0 ;
-(void)addCustomPlaceholderValues:(id)arg0 ;
-(void)addEarnedInstances:(id)arg0 ;
-(void)clearCustomPlaceholderValues;
-(void)clearEarnedInstances;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif