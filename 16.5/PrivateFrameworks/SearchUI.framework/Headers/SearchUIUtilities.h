// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIUTILITIES_H
#define SEARCHUIUTILITIES_H


#import <Foundation/Foundation.h>


@interface SearchUIUtilities : NSObject



+(BOOL)appIsValidForBundleIdentifier:(id)arg0 ;
+(BOOL)backgroundColorPrefersWhiteForegroundText:(id)arg0 ;
+(BOOL)bundleIdentifierIsBlockedForScreenTimeExpiration:(id)arg0 ;
+(BOOL)canShowViewController:(id)arg0 ;
+(BOOL)deviceIsAuthenticated;
+(BOOL)deviceSupportsRotation;
+(BOOL)downloadDemotedAppIfNecessaryForBundleIdentifier:(id)arg0 presentingViewControllerForExplanationAlert:(id)arg1 ;
+(BOOL)isAppInstalledWithBundleId:(id)arg0 ;
+(BOOL)isIpad;
+(BOOL)isLargeIpad;
+(BOOL)isMinimizedHardwareKeyboardMode;
+(BOOL)isPortraitForWindow:(id)arg0 ;
+(BOOL)isWideScreen;
+(BOOL)resultBlockedForScreenTime:(id)arg0 ;
+(BOOL)resultIsSiriAction:(id)arg0 ;
+(CGFloat)imageAccessoryAdditionalCompactHorizontalMargin;
+(CGFloat)onePixelForCurrentScreenResolution;
+(CGFloat)standardCompactHorizontalMargin;
+(CGFloat)standardTableCellContentInset;
+(id)addAspectRatioConstraintForSize:(struct CGSize )arg0 toView:(id)arg1 ;
+(id)bundleIdentifierForApp:(NSUInteger)arg0 ;
+(id)cachedColorForSFColor:(id)arg0 ;
+(id)colorForSFColor:(id)arg0 ;
+(id)defaultBrowserBundleIdentifier;
+(id)environmentForDelegate:(id)arg0 ;
+(id)fileProviderItemIDForCoreSpotlightIdentifier:(id)arg0 fileProviderIdentifier:(id)arg1 ;
+(id)fileProviderItemIDForFileResult:(id)arg0 ;
+(id)fmfHandlesFromContact:(id)arg0 ;
+(id)focusGroupIdentifier;
+(id)hyphenatableStringForString:(id)arg0 ;
+(id)imageForBlockedApp;
+(id)localizedStringForKey:(id)arg0 ;
+(id)openApplicationOptions;
+(id)pointerKeyMapTable;
+(id)sharedColorCache;
+(id)skHandlesFromContact:(id)arg0 ;
+(id)stringForSFRichText:(id)arg0 ;
+(id)stringForSFRichTextArray:(id)arg0 ;
+(id)stringHandlesFromContact:(id)arg0 ;
+(id)uiColorForSFColor:(id)arg0 ;
+(void)dispatchAsyncIfNecessary:(id)arg0 ;
+(void)dispatchMainIfNecessary:(id)arg0 ;
+(void)fetchColorForSFColor:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)fetchURLForCoreSpotlightIdentifier:(id)arg0 fileProviderIdentifier:(id)arg1 completionHandler:(id)arg2 ;
+(void)fetchURLForFileResult:(id)arg0 completionHandler:(id)arg1 ;
+(void)openPunchout:(id)arg0 ;
+(void)openPunchout:(id)arg0 completion:(id)arg1 ;
+(void)openURL:(id)arg0 withCompletion:(id)arg1 ;
+(void)performAnimatableChanges:(id)arg0 ;
// +(void)performAnimatableChanges:(id)arg0 animated:(unk)arg1  ;
// +(void)performAnimatableChanges:(id)arg0 animated:(unk)arg1 completion:(BOOL)arg2  ;
+(void)playNegativeHaptic;
+(void)prewarmApplicationLibrary;
+(void)requestClipInstallWithURL:(id)arg0 completion:(id)arg1 ;
+(void)requestDeviceUnlock:(id)arg0 ;
+(void)requestDeviceUnlockWithSuccessHandler:(id)arg0 ;


@end


#endif