// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLPRFPERAPPLICATIONSETTINGSMODEL_H
#define CSLPRFPERAPPLICATIONSETTINGSMODEL_H

@class NSMutableDictionary, NSArray, NSString;
@protocol CSLPRFApplicationLibraryObserving, CSLPRFTwoWaySyncSettingDelegate, CSLPRFPerApplicationSettingsDelegate, CSLPRFApplicationLibrary, CSLPRFPerApplicationSettings;

#import <Foundation/Foundation.h>

#import "CSLPRFObservationHelper.h"
#import "CSLPRFTwoWaySyncSetting.h"

@interface CSLPRFPerApplicationSettingsModel : NSObject <CSLPRFApplicationLibraryObserving, CSLPRFTwoWaySyncSettingDelegate, CSLPRFPerApplicationSettingsDelegate>

 {
    id<CSLPRFApplicationLibrary> *_applicationLibrary;
    Class _perApplicationSettingsClass;
    CSLPRFObservationHelper *_observationHelper;
    CSLPRFTwoWaySyncSetting *_syncedSettings;
    NSMutableDictionary *_lock_settings;
    id<CSLPRFPerApplicationSettings> *_lock_globalSettings;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSArray *allApplicationSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_globalSettingsForCustomizedSettings:(id)arg0 ;
-(id)globalSettings;
-(id)initWithApplicationLibrary:(id)arg0 perApplicationSettingsClass:(Class)arg1 ;
-(id)resolvedSettingsForApplication:(id)arg0 ;
-(id)resolvedSettingsForBundleIdentifier:(id)arg0 ;
-(id)settingsForApplication:(id)arg0 ;
-(id)settingsForBundleIdentifier:(id)arg0 ;
-(void)_processAddedOrUpdatedApplications:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)applicationLibrary:(id)arg0 didAddApplications:(id)arg1 ;
-(void)applicationLibrary:(id)arg0 didRemoveApplications:(id)arg1 ;
-(void)applicationLibrary:(id)arg0 didUpdateApplications:(id)arg1 ;
-(void)didUpdateSettings:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)twoWaySyncSettingDidUpdate:(id)arg0 ;


@end


#endif