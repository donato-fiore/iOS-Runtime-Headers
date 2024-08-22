// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARCUSTOMTECHNIQUESCONFIGURATION_H
#define ARCUSTOMTECHNIQUESCONFIGURATION_H

@class NSArray;


#import "ARConfiguration.h"
#import "ARWorldMap.h"

@interface ARCustomTechniquesConfiguration : ARConfiguration {
    BOOL _needsEnsureTechniqueAndCustomSensorCompatibility;
    BOOL _needsConfigureRecordingTechnique;
}


@property (readonly, nonatomic) ARWorldMap *initialWorldMap;
@property (copy, nonatomic) NSArray *techniques; // ivar: _techniques
@property (copy, nonatomic) ARConfiguration *templateConfiguration; // ivar: _templateConfiguration


+(id)new;
+(id)supportedVideoFormats;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLightEstimationEnabled;
-(NSInteger)worldAlignment;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)imageSensorSettings;
-(id)imageSensorSettingsForUltraWide;
-(id)init;
-(id)initPrivate;
-(void)_configureRecordingTechniqueIfNeeded;
-(void)_ensureTechniqueAndCustomSensorCompatibilityIfNeeded;
-(void)_updateCaptureSettings;
-(void)configureRecordingTechnique;
-(void)ensureTechniqueAndCustomSensorCompatibility;
-(void)setCameraPosition:(NSInteger)arg0 ;
-(void)setCustomSensors:(id)arg0 ;
-(void)setProvidesAudioData:(BOOL)arg0 ;
-(void)setVideoFormat:(id)arg0 ;


@end


#endif