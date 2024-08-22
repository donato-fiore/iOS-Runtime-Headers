// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRISYSTEMDIMENSIONS_H
#define TRISYSTEMDIMENSIONS_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface TRISystemDimensions : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *deviceClass; // ivar: _deviceClass
@property (readonly, nonatomic) BOOL hasDeviceClass;
@property (nonatomic) BOOL hasIsBetaUser;
@property (nonatomic) BOOL hasIsInternalBuild;
@property (readonly, nonatomic) BOOL hasOsBuild;
@property (nonatomic) BOOL hasTargetedPopulation;
@property (readonly, nonatomic) BOOL hasUserSettingsBcp47DeviceLocale;
@property (readonly, nonatomic) BOOL hasUserSettingsLanguageCode;
@property (readonly, nonatomic) BOOL hasUserSettingsRegionCode;
@property (readonly, nonatomic) BOOL hasVersionTag;
@property (nonatomic) BOOL isBetaUser; // ivar: _isBetaUser
@property (nonatomic) BOOL isInternalBuild; // ivar: _isInternalBuild
@property (retain, nonatomic) NSString *osBuild; // ivar: _osBuild
@property (nonatomic) int targetedPopulation; // ivar: _targetedPopulation
@property (retain, nonatomic) NSMutableArray *userKeyboardEnabledInputModeIdentifiers; // ivar: _userKeyboardEnabledInputModeIdentifiers
@property (retain, nonatomic) NSString *userSettingsBcp47DeviceLocale; // ivar: _userSettingsBcp47DeviceLocale
@property (retain, nonatomic) NSString *userSettingsLanguageCode; // ivar: _userSettingsLanguageCode
@property (retain, nonatomic) NSString *userSettingsRegionCode; // ivar: _userSettingsRegionCode
@property (retain, nonatomic) NSString *versionTag; // ivar: _versionTag


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)targetedPopulationAsString:(int)arg0 ;
-(id)userKeyboardEnabledInputModeIdentifiersAtIndex:(NSUInteger)arg0 ;
-(int)StringAsTargetedPopulation:(id)arg0 ;
-(void)addUserKeyboardEnabledInputModeIdentifiers:(id)arg0 ;
-(void)clearUserKeyboardEnabledInputModeIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif