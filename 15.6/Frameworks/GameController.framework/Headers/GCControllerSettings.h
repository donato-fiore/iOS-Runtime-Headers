// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCCONTROLLERSETTINGS_H
#define GCCONTROLLERSETTINGS_H

@class NSUserDefaults, NSDictionary, NSMutableDictionary, NSArray, NSUUID, NSMutableSet, NSString;
@protocol NSSecureCoding, NSCopying><NSObject><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCController.h"
#import "GCReplayKitGestureSettings.h"

@interface GCControllerSettings : NSObject <NSSecureCoding>

 {
    NSUserDefaults *_defaults;
    NSDictionary *_elementMappingKeyToElement;
    NSMutableDictionary *__elementMappingFromUserDefaults;
    NSArray *_customizedElementSettings;
    GCController *_controller;
    NSUUID *_customizedUUID;
    NSMutableDictionary *_elementSettings;
    BOOL _settingsAppOpenedAtLeastOnce;
    NSMutableSet *_observedKeyPaths;
}


@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) BOOL customizationsEnabled; // ivar: _customizationsEnabled
@property (nonatomic) BOOL customized; // ivar: _customized
@property (readonly, nonatomic) NSDictionary *elementMappings; // ivar: _elementMappings
@property (readonly, nonatomic) NSDictionary *general_gameIntentMappings; // ivar: _general_gameIntentMappings
@property (nonatomic) BOOL hapticsEnabled; // ivar: _hapticsEnabled
@property (copy, nonatomic) GCReplayKitGestureSettings *replayKitGestureSettings; // ivar: _replayKitGestureSettings
@property (nonatomic) BOOL screenShotEnabled; // ivar: _screenShotEnabled
@property (nonatomic) NSInteger screenShotGesture; // ivar: _screenShotGesture
@property (retain, nonatomic) NSString *screenShotKey; // ivar: _screenShotKey
@property (nonatomic) BOOL serialized; // ivar: _serialized
@property (copy, nonatomic) id *settingsChangedHandler; // ivar: _settingsChangedHandler
@property (nonatomic) NSUInteger settingsID; // ivar: _settingsID
@property (readonly, nonatomic) NSObject<NSCopying><NSObject><NSSecureCoding> *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (nonatomic) BOOL videoRecordingEnabled; // ivar: _videoRecordingEnabled
@property (nonatomic) NSInteger videoRecordingGesture; // ivar: _videoRecordingGesture
@property (retain, nonatomic) NSString *videoRecordingKey; // ivar: _videoRecordingKey
@property (nonatomic) NSInteger videoRecordingMode; // ivar: _videoRecordingMode


+(BOOL)settingsCustomizedForController:(id)arg0 forBundleIdentifier:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)controllerSettingsCustomizedChangedHandlers;
+(id)metaDefaults;
+(id)settingsCustomizedChangedHandlers;
+(id)settingsDispatchQueue;
// +(void)registerSettingsCustomizedHandler:(id)arg0 forController:(unk)arg1 forKey:(id)arg2  ;
// +(void)registerSettingsCustomizedHandler:(id)arg0 forKey:(unk)arg1  ;
+(void)setSettingsExist:(BOOL)arg0 forBundleIdentifier:(id)arg1 ;
+(void)setSettingsExist:(BOOL)arg0 forController:(id)arg1 forBundleIdentifier:(id)arg2 ;
+(void)unregisterSettingsCustomizedHandlerForController:(id)arg0 forKey:(id)arg1 ;
+(void)unregisterSettingsCustomizedHandlerForKey:(id)arg0 ;
-(id)defaultValues;
-(id)description;
-(id)elementSettingForKey:(id)arg0 ;
-(id)initForController:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 forController:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 forControllerIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mappingForButton:(id)arg0 ;
-(id)mappingForDirectionPad:(id)arg0 ;
-(id)mappingForElement:(id)arg0 ;
-(id)mappingForTouchpad:(id)arg0 ;
-(id)mappingKeyForElement:(id)arg0 ;
-(id)settingsForElement:(id)arg0 ;
-(id)staticDefaultValues;
-(id)suiteNameForBundleIdentifier:(id)arg0 ;
-(void)_updateControllerReference:(id)arg0 ;
-(void)dealloc;
-(void)deleteObjectForKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)eraseAllSettings;
-(void)initializeElementMappings;
-(void)initializeReplayKitDefaultMappings;
-(void)initializeUserDefaults;
-(void)observeDefaultsKeyPath:(id)arg0 options:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)observeDefaultsKeyPaths:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)populateElementSettings;
-(void)refreshSettingsExist;
-(void)registerForSettingsCustomized;
-(void)restoreElementMappingToDefault;
-(void)saveBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)saveObject:(id)arg0 forKey:(id)arg1 ;
-(void)setGameIntentMappings:(id)arg0 ;
-(void)setMappingForElement:(id)arg0 toElement:(id)arg1 ;
-(void)unregisterForSettingsCustomized;


@end


#endif