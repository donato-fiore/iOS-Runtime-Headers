// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCSSETTINGSSTORE_H
#define GCSSETTINGSSTORE_H

@class NSString;
@protocol GCSSettingsStoreService, GCUserDefaults, GCSControllers, GCSCopilotFusedControllers, GCSGames, GCSProfiles;

#import <Foundation/Foundation.h>


@interface GCSSettingsStore : NSObject <GCSSettingsStoreService>

 {
    id<GCUserDefaults> *_defaults;
}


@property (readonly, nonatomic) NSObject<GCSControllers> *controllers; // ivar: _controllers
@property (readonly, nonatomic) NSObject<GCSCopilotFusedControllers> *copilotFusedControllers; // ivar: _copilotFusedControllers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<GCSGames> *games; // ivar: _games
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<GCSProfiles> *profiles; // ivar: _profiles
@property (retain, nonatomic) NSString *settingsVersion; // ivar: _settingsVersion
@property BOOL showGCPreferencesPane; // ivar: _showGCPreferencesPane
@property (readonly) Class superclass;


-(BOOL)savedDataMeetsRequiredVersion:(id)arg0 ;
-(id)initWithUserDefaults:(id)arg0 ;
-(id)profileForPersistentControllerIdentifier:(id)arg0 appBundleIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif