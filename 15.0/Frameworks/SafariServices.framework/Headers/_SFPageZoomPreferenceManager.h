// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPAGEZOOMPREFERENCEMANAGER_H
#define _SFPAGEZOOMPREFERENCEMANAGER_H

@class WBSPageZoomPreferenceManager;



@interface _SFPageZoomPreferenceManager : WBSPageZoomPreferenceManager



+(id)sharedManager;
-(id)initWithPerSitePreferencesStore:(id)arg0 ;
-(void)_didRemoveHostnames:(id)arg0 ;
-(void)_historyWasCleared:(id)arg0 ;
-(void)dealloc;
-(void)removePreferenceValuesForDomains:(id)arg0 fromPreference:(id)arg1 completionHandler:(id)arg2 ;
-(void)setDefaultValue:(id)arg0 ofPreference:(id)arg1 completionHandler:(id)arg2 ;
-(void)setValue:(id)arg0 ofPreference:(id)arg1 forDomain:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif