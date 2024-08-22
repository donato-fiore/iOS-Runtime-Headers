// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPAGEZOOMPREFERENCEMANAGER_H
#define WBSPAGEZOOMPREFERENCEMANAGER_H

@class NSString;
@protocol WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerStorageDelegate;


#import "WBSPerSitePreferenceManager.h"
#import "WBSPerSitePreferencesSQLiteStore.h"
#import "WBSPerSitePreference.h"

@interface WBSPageZoomPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerStorageDelegate>

 {
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WBSPerSitePreference *pageZoomPreference; // ivar: _pageZoomPreference
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly) Class superclass;


+(id)pageZoomFactors;
-(BOOL)_canChangePageZoom:(BOOL)arg0 fromStep:(NSInteger)arg1 ;
-(CGFloat)_pageZoomStepToZoomFactor:(NSInteger)arg0 ;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg0 ;
-(id)initWithPerSitePreferencesStore:(id)arg0 ;
-(id)localizedStringForValue:(id)arg0 inPreference:(id)arg1 ;
-(id)preferenceNameForPreference:(id)arg0 ;
-(id)preferences;
-(id)valuesForPreference:(id)arg0 ;
-(void)_getDefaultZoomStep:(id)arg0 ;
-(void)_getZoomStepForDomain:(id)arg0 usingBlock:(id)arg1 ;
-(void)_incrementOrDecreaseZoomStep:(BOOL)arg0 forURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)didUpdatePreference:(id)arg0 toValue:(id)arg1 forDomain:(id)arg2 ;
-(void)getAvailableActionsForURL:(id)arg0 usingBlock:(id)arg1 ;
-(void)getPageZoomFactorForURL:(id)arg0 usingBlock:(id)arg1 ;
-(void)removeAllPageZoomPreferences;
-(void)removePageZoomPreferencesForHostnames:(id)arg0 ;
-(void)resetZoomLevelOnURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)zoomInOnURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)zoomOutOnURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif