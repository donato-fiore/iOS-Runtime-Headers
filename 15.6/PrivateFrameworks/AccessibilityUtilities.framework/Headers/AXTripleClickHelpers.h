// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXTRIPLECLICKHELPERS_H
#define AXTRIPLECLICKHELPERS_H


#import <Foundation/Foundation.h>


@interface AXTripleClickHelpers : NSObject



+(BOOL)_shouldShowFeatureInShortcutsControlCenterModule:(int)arg0 includeGuidedAccess:(BOOL)arg1 ;
+(BOOL)valueForTripleClickOption:(int)arg0 ;
+(id)_availableFeatures;
+(id)titleForTripleClickOption:(int)arg0 ;
+(id)tripleClickOptionsForAccessibilityShortcutControlCenterModuleIncludingGuidedAccess:(BOOL)arg0 ;
// +(void)_promptToDisableBrightnessFilters:(id)arg0 data:(unk)arg1  ;
+(void)_toggleAssistiveTouch;
+(void)_toggleSmartInvertColorsOffMainThread;
+(void)_toggleVoiceOver;
+(void)_toggleZoomOffMainThread;
+(void)toggleColorFilter;
+(void)toggleFullKeyboardAccess;
+(void)toggleGuidedAccessFromControlCenter;
+(void)toggleTripleClickOption:(int)arg0 ;


@end


#endif