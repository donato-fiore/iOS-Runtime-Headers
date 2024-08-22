// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKEMITTERCELL_H
#define OKEMITTERCELL_H

@class CAEmitterCell, NSURL, NSString;
@protocol OKSettingsSupport;



@interface OKEmitterCell : CAEmitterCell <OKSettingsSupport>

 {
    NSURL *_contentURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)supportedSettings;
-(BOOL)settingEnabled;
-(CGFloat)settingEmissionLatitude;
-(CGFloat)settingEmissionLongitude;
-(CGFloat)settingEmissionRange;
-(CGFloat)settingScale;
-(CGFloat)settingScaleRange;
-(CGFloat)settingScaleSpeed;
-(CGFloat)settingSpin;
-(CGFloat)settingSpinRange;
-(CGFloat)settingVelocity;
-(CGFloat)settingVelocityRange;
-(CGFloat)settingXAcceleration;
-(CGFloat)settingYAcceleration;
-(CGFloat)settingZAcceleration;
-(float)settingAlphaRange;
-(float)settingAlphaSpeed;
-(float)settingBirthRate;
-(float)settingBlueRange;
-(float)settingBlueSpeed;
-(float)settingGreenRange;
-(float)settingGreenSpeed;
-(float)settingLifetime;
-(float)settingLifetimeRange;
-(float)settingMinificationFilterBias;
-(float)settingRedRange;
-(float)settingRedSpeed;
-(id)initWithSettings:(id)arg0 ;
-(id)settingColor;
-(id)settingContents;
-(id)settingEmitterCells;
-(id)settingMagnificationFilter;
-(id)settingMinificationFilter;
-(id)settingName;
-(id)settingObjectForKey:(id)arg0 ;
-(id)settingStyle;
-(struct CGRect )settingContentsRect;
-(void)dealloc;
-(void)parentLoaded:(id)arg0 ;
-(void)setSettingAlphaRange:(float)arg0 ;
-(void)setSettingAlphaSpeed:(float)arg0 ;
-(void)setSettingBirthRate:(float)arg0 ;
-(void)setSettingBlueRange:(float)arg0 ;
-(void)setSettingBlueSpeed:(float)arg0 ;
-(void)setSettingColor:(id)arg0 ;
-(void)setSettingContents:(id)arg0 ;
-(void)setSettingContentsRect:(struct CGRect )arg0 ;
-(void)setSettingEmissionLatitude:(CGFloat)arg0 ;
-(void)setSettingEmissionLongitude:(CGFloat)arg0 ;
-(void)setSettingEmissionRange:(CGFloat)arg0 ;
-(void)setSettingEmitterCells:(id)arg0 ;
-(void)setSettingEnabled:(BOOL)arg0 ;
-(void)setSettingGreenRange:(float)arg0 ;
-(void)setSettingGreenSpeed:(float)arg0 ;
-(void)setSettingLifetime:(float)arg0 ;
-(void)setSettingLifetimeRange:(float)arg0 ;
-(void)setSettingMagnificationFilter:(id)arg0 ;
-(void)setSettingMinificationFilter:(id)arg0 ;
-(void)setSettingMinificationFilterBias:(float)arg0 ;
-(void)setSettingName:(id)arg0 ;
-(void)setSettingRedRange:(float)arg0 ;
-(void)setSettingRedSpeed:(float)arg0 ;
-(void)setSettingScale:(CGFloat)arg0 ;
-(void)setSettingScaleRange:(CGFloat)arg0 ;
-(void)setSettingScaleSpeed:(CGFloat)arg0 ;
-(void)setSettingSpin:(CGFloat)arg0 ;
-(void)setSettingSpinRange:(CGFloat)arg0 ;
-(void)setSettingStyle:(id)arg0 ;
-(void)setSettingVelocity:(CGFloat)arg0 ;
-(void)setSettingVelocityRange:(CGFloat)arg0 ;
-(void)setSettingXAcceleration:(CGFloat)arg0 ;
-(void)setSettingYAcceleration:(CGFloat)arg0 ;
-(void)setSettingZAcceleration:(CGFloat)arg0 ;
-(void)setUserSettingObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif