// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIUTILITIES_H
#define SEARCHUIUTILITIES_H


#import <Foundation/Foundation.h>


@interface SearchUIUtilities : NSObject



+(BOOL)appIsValidForBundleIdentifier:(id)arg0 ;
+(BOOL)backgroundColorPrefersWhiteForegroundText:(id)arg0 ;
+(BOOL)bundleIdentifierIsBlockedForScreenTimeExpiration:(id)arg0 ;
+(BOOL)deviceIsAuthenticated;
+(BOOL)deviceSupportsRotation;
+(BOOL)isIpad;
+(BOOL)isLargeIpad;
+(BOOL)isMinimizedHardwareKeyboardMode;
+(BOOL)isPortraitForWindow:(id)arg0 ;
+(BOOL)isWideScreen;
+(BOOL)resultBlockedForScreenTime:(id)arg0 ;
+(BOOL)resultIsSiriAction:(id)arg0 ;
+(BOOL)shouldHandleCardSectionEngagement:(id)arg0 feedbackListener:(id)arg1 ;
+(CGFloat)onePixelForCurrentScreenResolution;
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
+(id)openOptions;
+(id)pointerKeyMapTable;
+(id)sendFeedbackForPunchout:(id)arg0 toListener:(id)arg1 fromCardSection:(id)arg2 triggerEvent:(NSUInteger)arg3 queryId:(NSUInteger)arg4 ;
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
+(void)openApplicationWithBundleIdentifier:(id)arg0 ;
+(void)openApplicationWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
+(void)openPunchout:(id)arg0 ;
+(void)openPunchout:(id)arg0 completion:(id)arg1 ;
+(void)openPunchout:(id)arg0 fromCardSection:(id)arg1 toListener:(id)arg2 triggerEvent:(NSUInteger)arg3 queryId:(NSUInteger)arg4 ;
+(void)openPunchout:(id)arg0 fromCardSection:(id)arg1 toListener:(id)arg2 triggerEvent:(NSUInteger)arg3 queryId:(NSUInteger)arg4 completion:(id)arg5 ;
+(void)openURL:(id)arg0 withCompletion:(id)arg1 ;
+(void)openUserActivity:(id)arg0 applicationBundleIdentifier:(id)arg1 ;
+(void)openUserActivity:(id)arg0 applicationBundleIdentifier:(id)arg1 completion:(id)arg2 ;
+(void)performAnimatableChanges:(id)arg0 ;
// +(void)performAnimatableChanges:(id)arg0 animated:(unk)arg1  ;
// +(void)performAnimatableChanges:(id)arg0 animated:(unk)arg1 completion:(BOOL)arg2  ;
+(void)performOpenTask:(id)arg0 ;
+(void)playNegativeHaptic;
+(void)presentViewController:(id)arg0 environment:(id)arg1 prefersModalPresentation:(BOOL)arg2 ;
+(void)prewarmApplicationLibrary;
+(void)requestClipInstallWithURL:(id)arg0 completion:(id)arg1 ;
+(void)requestDeviceUnlock:(id)arg0 ;
+(void)requestDeviceUnlockWithSuccessHandler:(id)arg0 ;


@end


#endif