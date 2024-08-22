// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSLOCALDEFAULTS_H
#define BKSLOCALDEFAULTS_H

@class BSAbstractDefaultDomain, NSDictionary, NSString, NSData, NSArray;



@interface BKSLocalDefaults : BSAbstractDefaultDomain

@property (nonatomic) float ALSDelayOnUnlock;
@property (nonatomic, getter=isALSEnabled) BOOL ALSEnabled;
@property (nonatomic) NSInteger ALSEpoch;
@property (retain, nonatomic) NSDictionary *ALSUserPreferences;
@property (nonatomic) int brightnessCurve;
@property (nonatomic, getter=isDigitizerSignpostsEnabled) BOOL digitizerSignpostsEnabled;
@property (nonatomic) BOOL digitizerVisualizeHitTestRegions;
@property (nonatomic) BOOL digitizerVisualizeTouches;
@property (nonatomic) BOOL disableCAOverscan;
@property (nonatomic) BOOL disableCAScaling;
@property (nonatomic) BOOL disableCAYUV;
@property (nonatomic) BOOL disableCloneMirroring;
@property (nonatomic) BOOL disableStudyLogALSLogging; // ivar: _disableStudyLogALSLogging
@property (nonatomic) BOOL disableStudyLogAccelerometerLogging; // ivar: _disableStudyLogAccelerometerLogging
@property (nonatomic) BOOL disableStudyLogBTKeyboardEventLogging;
@property (nonatomic) BOOL disableStudyLogBTKeyboardEventRedirection;
@property (nonatomic) BOOL disableStudyLogButtonLogging;
@property (nonatomic) BOOL disableStudyLogCameraKeyLogging;
@property (nonatomic) BOOL disableStudyLogGyroLogging; // ivar: _disableStudyLogGyroLogging
@property (nonatomic) BOOL disableStudyLogHomeButtonLogging;
@property (nonatomic) BOOL disableStudyLogPowerButtonLogging;
@property (nonatomic) BOOL disableStudyLogVolumeKeyLogging;
@property (nonatomic, getter=isDitheringEnabled) BOOL ditheringEnabled;
@property (nonatomic) BOOL forceCloneMirroring;
@property (weak, nonatomic) NSString *forceMirroredOrientation;
@property (retain, nonatomic) NSData *globalMouseDevicePreferences;
@property (nonatomic) BOOL hideAppleLogoOnLaunch;
@property (nonatomic) BOOL ignoreAccelerometerAndOrientationEvents;
@property (nonatomic) BOOL ignoreTetheringPreferences;
@property (weak, nonatomic) NSArray *loggingTypesEnabled;
@property (nonatomic) NSArray *mouseInterpolation;
@property (nonatomic) BOOL showBuildNumber;
@property (nonatomic) BOOL simulatePhoneButton;
@property (nonatomic, getter=isSteveNoteOverscanEnabled) BOOL steveNoteOverscanEnabled;
@property (nonatomic, getter=isSteveNoteRotationEnabled) BOOL steveNoteRotationEnabled;
@property (nonatomic) BOOL visualizeMousePointer;


-(id)init;
-(id)valueForKey:(id)arg0 defaultValueProvider:(id)arg1 ;
-(void)_bindAndRegisterDefaults;
-(void)migrateDefaultsIfNecessary;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif