// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITHOMECAMERACONFIGURATIONS_H
#define AWDHOMEKITHOMECAMERACONFIGURATIONS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface AWDHomeKitHomeCameraConfigurations : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int enabledResidentsDeviceCapabilities; // ivar: _enabledResidentsDeviceCapabilities
@property (nonatomic) BOOL hasEnabledResidentsDeviceCapabilities;
@property (nonatomic) BOOL hasIsFaceClassificationEnabled;
@property (nonatomic) BOOL hasIsOwner;
@property (retain, nonatomic) NSMutableArray *homeKitCameraSettings; // ivar: _homeKitCameraSettings
@property (retain, nonatomic) NSMutableArray *homeKitCameraUserSettings; // ivar: _homeKitCameraUserSettings
@property (nonatomic) BOOL isFaceClassificationEnabled; // ivar: _isFaceClassificationEnabled
@property (nonatomic) BOOL isOwner; // ivar: _isOwner


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)homeKitCameraSettingsAtIndex:(NSUInteger)arg0 ;
-(id)homeKitCameraUserSettingsAtIndex:(NSUInteger)arg0 ;
-(void)addHomeKitCameraSettings:(id)arg0 ;
-(void)addHomeKitCameraUserSettings:(id)arg0 ;
-(void)clearHomeKitCameraSettings;
-(void)clearHomeKitCameraUserSettings;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif