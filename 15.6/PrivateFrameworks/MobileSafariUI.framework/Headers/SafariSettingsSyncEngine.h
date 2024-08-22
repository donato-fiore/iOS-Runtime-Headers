// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAFARISETTINGSSYNCENGINE_H
#define SAFARISETTINGSSYNCENGINE_H

@class WBSSafariSettingsSyncEngine, WBSStartPageSectionManager;
@protocol WBSUserDefaultObservation;



@interface SafariSettingsSyncEngine : WBSSafariSettingsSyncEngine {
    id<WBSUserDefaultObservation> *_wallpaperDefaultsObservation;
    WBSStartPageSectionManager *_lazyStartPageSectionsManager;
}




-(BOOL)syncEnabled;
-(id)_sectionIdentifierToSettingName:(id)arg0 ;
-(id)init;
-(id)startPageSectionsManager;
-(void)_backgroundImageChanged:(id)arg0 ;
-(void)_cloudBackgroundImageDidUpdateOnServer:(id)arg0 ;
-(void)_cloudBackgroundImageWasDeletedOnServer:(id)arg0 ;
-(void)_cloudSettingsDidUpdateOnServer:(id)arg0 ;
-(void)_customizationPaletteWasDismissed:(id)arg0 ;
-(void)_didUpdateStartPageBackgroundImageVisibility;
-(void)_didUpdateStartPageSectionOrder:(id)arg0 ;
-(void)_didUpdateStartPageVisibility:(id)arg0 ;


@end


#endif