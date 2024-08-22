// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXTRIPLECLICKHELPERS_H
#define AXTRIPLECLICKHELPERS_H


#import <Foundation/Foundation.h>


@interface AXTripleClickHelpers : NSObject



+(BOOL)_localValueForTripleClickOption:(int)arg0 ;
+(BOOL)_npsValueForTripleClickOption:(int)arg0 ;
+(BOOL)_shouldShowFeatureInShortcutsControlCenterModule:(int)arg0 includeGuidedAccess:(BOOL)arg1 ;
+(BOOL)valueForTripleClickOption:(int)arg0 ;
+(BOOL)valueForTripleClickOption:(int)arg0 fromSource:(NSInteger)arg1 ;
+(BOOL)valueForZoomTripleClickOption;
+(id)_allAvailableFeaturesIOS;
+(id)_allAvailableFeaturesWatchOS;
+(id)_availableFeatures;
+(id)_npsKeyForTripleClickOption:(int)arg0 ;
+(id)allTripleClickOptions;
+(id)allTripleClickOptionsForPlatform:(NSInteger)arg0 ;
+(id)domainAccessorForTripleClickOption:(int)arg0 ;
+(id)titleForTripleClickOption:(int)arg0 ;
+(id)tripleClickOptionDidChangeNotification;
+(id)tripleClickOptionsForAccessibilityShortcutControlCenterModuleIncludingGuidedAccess:(BOOL)arg0 ;
+(void)_localToggleTripleClickOption:(int)arg0 ;
+(void)_npsToggleTripleClickOption:(int)arg0 ;
// +(void)_promptToDisableBrightnessFilters:(id)arg0 data:(unk)arg1  ;
+(void)_toggleAssistiveTouch;
+(void)_toggleSmartInvertColorsOffMainThread;
+(void)_toggleVoiceOver;
+(void)attemptToEnterClarityBoard;
+(void)attemptToPresentNearbyDeviceControlPicker;
+(void)attemptToToggleTwiceRemoteScreen;
+(void)toggleColorFilter;
+(void)toggleFullKeyboardAccess;
+(void)toggleGuidedAccessFromControlCenter;
+(void)toggleHoverText;
+(void)toggleReduceWhitePoint;
+(void)toggleTripleClickOption:(int)arg0 ;
+(void)toggleTripleClickOption:(int)arg0 fromSource:(NSInteger)arg1 ;
+(void)toggleZoomOffMainThread;


@end


#endif