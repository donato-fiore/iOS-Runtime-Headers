// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTDEVICE_H
#define SUSCRIPTDEVICE_H

@class NSMutableArray, NSString, NSArray, NSNumber;


#import "SUScriptObject.h"
#import "SUScriptColor.h"
#import "SUScriptDictionary.h"

@interface SUScriptDevice : SUScriptObject {
    NSMutableArray *_scriptFunctions;
}


@property (readonly) NSString *UTIImage;
@property (readonly) NSString *UTIMovie;
@property (readonly) NSString *UTIText;
@property (readonly) id *accessibilityBoldTextEnabled;
@property (readonly) id *accessibilityButtonShapesEnabled;
@property (readonly) id *accessibilityDarkenSystemColors;
@property (readonly) id *accessibilityEnhanceBackgroundContrast;
@property (readonly) id *accessibilityMotionAutoPlayVideo;
@property (readonly) SUScriptColor *accessibilitySingleColor;
@property (readonly) id *accessibilitySingleColorSelected;
@property (readonly) id *accessibilityUseDarkerKeyboard;
@property (readonly) NSInteger activeNetworkType;
@property (readonly) NSArray *automaticDownloadMediaTypes;
@property (readonly) NSString *capabilityNameEmail;
@property (readonly) NSString *capabilityNameExplicitMedia;
@property (readonly) NSString *capabilityNameHDVideo;
@property (readonly) NSString *capabilityNameHDVideo1080p;
@property (readonly) NSString *capabilityNameHDVideo720p;
@property (readonly) NSString *capabilityNamePodcasts;
@property (readonly) NSString *capabilityNameWiFi;
@property (readonly) unsigned int deviceTypeIdentifier;
@property (readonly) NSNumber *diskSpaceAvailable;
@property (readonly) SUScriptDictionary *diskUsageDictionary;
@property (readonly) NSInteger freeSpaceEffortLevelAutomaticOnly;
@property (readonly) NSInteger freeSpaceEffortLevelDoNothing;
@property (readonly) NSInteger freeSpaceEffortLevelManualSpaceManagement;
@property (readonly) NSInteger freeSpaceEffortLevelPromptUser;
@property (readonly) NSString *freeSpaceOptionEffortLevel;
@property (readonly) NSInteger hardwareType;
@property (readonly) NSInteger hardwareTypeAppleTVJ33;
@property (readonly) NSInteger hardwareTypeAppleTVK66;
@property (readonly) NSInteger hardwareTypeIPadJ1;
@property (readonly) NSInteger hardwareTypeIPadJ2;
@property (readonly) NSInteger hardwareTypeIPadJ2a;
@property (readonly) NSInteger hardwareTypeIPadK93;
@property (readonly) NSInteger hardwareTypeIPadK93a;
@property (readonly) NSInteger hardwareTypeIPadK94;
@property (readonly) NSInteger hardwareTypeIPadK95;
@property (readonly) NSInteger hardwareTypeIPhoneM68;
@property (readonly) NSInteger hardwareTypeIPhoneN82;
@property (readonly) NSInteger hardwareTypeIPhoneN88;
@property (readonly) NSInteger hardwareTypeIPhoneN90;
@property (readonly) NSInteger hardwareTypeIPhoneN92;
@property (readonly) NSInteger hardwareTypeIPhoneN94;
@property (readonly) NSInteger hardwareTypeIPodTouchN18;
@property (readonly) NSInteger hardwareTypeIPodTouchN45;
@property (readonly) NSInteger hardwareTypeIPodTouchN72;
@property (readonly) NSInteger hardwareTypeIPodTouchN81;
@property (readonly) NSInteger hardwareTypeIPodTouchN81a;
@property (readonly) NSInteger hardwareTypeUnknown;
@property (readonly) NSInteger hardwareTypeWildcatK48;
@property (readonly) NSNumber *mainScreenScale;
@property (readonly) NSNumber *metricsPostFrequencyOverride;
@property (readonly) id *needsToneRegrantOption;
@property (readonly) NSInteger networkType2G;
@property (readonly) NSInteger networkType3G;
@property (readonly) NSInteger networkType4G;
@property (readonly) NSInteger networkType5G;
@property (readonly) NSInteger networkType6G;
@property (readonly) NSInteger networkType7G;
@property (readonly) NSInteger networkType8G;
@property (readonly) NSInteger networkType9G;
@property (readonly) NSInteger networkTypeNone;
@property (readonly) NSInteger networkTypeWiFi;
@property (readonly) NSString *orientationStringLandscapeLeft;
@property (readonly) NSString *orientationStringLandscapeRight;
@property (readonly) NSString *orientationStringPortrait;
@property (readonly) NSString *orientationStringPortraitUpsideDown;
@property (readonly) NSString *restrictionAccountModificationAllowed;
@property (readonly) NSString *restrictionAllowGlobalBackgroundFetchWhenRoaming;
@property (readonly) NSString *restrictionAllowVoiceDialing;
@property (readonly) NSString *restrictionAppInstallationAllowed;
@property (readonly) NSString *restrictionAppRemovalAllowed;
@property (readonly) NSString *restrictionBookStoreAllowed;
@property (readonly) NSString *restrictionBookStoreEroticaAllowed;
@property (readonly) NSInteger restrictionBoolNo;
@property (readonly) NSInteger restrictionBoolNoData;
@property (readonly) NSInteger restrictionBoolYes;
@property (readonly) NSString *restrictionCameraAllowed;
@property (readonly) NSString *restrictionCellularHDUploadsAllowed;
@property (readonly) NSString *restrictionITunesAllowed;
@property (readonly) NSString *restrictionITunesSocialAllowed;
@property (readonly) NSString *restrictionMultiplayerGamingAllowed;
@property (readonly) NSString *restrictionSafariAllowed;
@property (readonly) NSString *restrictionScreenShotAllowed;
@property (readonly) NSString *restrictionTypeApplications;
@property (readonly) NSString *restrictionTypeMovies;
@property (readonly) NSString *restrictionTypeTelevision;
@property (readonly) NSString *restrictionVideoConferencingAllowed;
@property (readonly) NSString *restrictionYouTubeAllowed;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(NSInteger)_deviceCapabilityForString:(id)arg0 ;
-(NSInteger)boolValueForRestriction:(id)arg0 ;
-(id)UTIForURL:(id)arg0 ;
-(id)_className;
-(id)attributeKeys;
-(id)checkCapabilitiesPropertyListString:(id)arg0 showFailureDialog:(BOOL)arg1 ;
-(id)getMachineIdentifierForAccountIdentifier:(id)arg0 ;
-(id)hasCapability:(id)arg0 ;
-(id)init;
-(id)isRestrictionLockedDown:(id)arg0 ;
-(id)restrictionExplicitMedia;
-(id)restrictionLevelForType:(id)arg0 ;
-(id)scriptAttributeKeys;
-(id)valueForRestriction:(id)arg0 ;
-(void)_accessibilitySettingsChangedNotification:(id)arg0 ;
-(void)_addScriptFunction:(id)arg0 ;
-(void)_autoDownloadKindsChangedNotification:(id)arg0 ;
-(void)_removeScriptFunction:(id)arg0 ;
-(void)dealloc;
-(void)requestFreeSpaceWithBytes:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)setAutomaticDownloadKinds:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setValueForRestriction:(id)arg0 enabled:(id)arg1 ;


@end


#endif