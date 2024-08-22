// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSTRANSLATIONCONTEXT_H
#define WBSTRANSLATIONCONTEXT_H

@class _LTTranslator, _LTTranslationSession, NSString, NSNumber, NSURL, NSArray, NSMutableSet;
@protocol WBSTranslationErrorControllerDelegate, WBSFluidProgressStateSource, WBSTranslationContentExtractionDelegate, WBSTranslationContentFillingDelegate, WBSTranslationContextTranslating, OS_dispatch_queue, WBSTranslationContentExtracting, WBSTranslationContentFilling, WBSTranslationContextLanguageDetecting, WBSTranslationContextDelegate, WBSTranslationContextPreferenceProviding;

#import <Foundation/Foundation.h>

#import "WBSTranslationDiagnosticData.h"
#import "WBSTranslationErrorController.h"
#import "WBSTranslationContextSnapshot.h"
#import "WBSTranslationScrollInteractionAnalyticsHelper.h"
#import "WBSFluidProgressState.h"
#import "WBSFluidProgressController.h"

@interface WBSTranslationContext : NSObject <WBSTranslationErrorControllerDelegate, WBSFluidProgressStateSource, WBSTranslationContentExtractionDelegate, WBSTranslationContentFillingDelegate, WBSTranslationContextTranslating>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
    _LTTranslator *_translator;
    _LTTranslationSession *_cachedSession;
    id<WBSTranslationContextTranslating> *_contentTranslator;
    id<WBSTranslationContentExtracting> *_contentExtractor;
    id<WBSTranslationContentFilling> *_contentFiller;
    id<WBSTranslationContextLanguageDetecting> *_languageDetector;
    id<WBSTranslationContextDelegate> *_delegate;
    NSString *_targetLocale;
    WBSTranslationDiagnosticData *_diagnosticData;
    NSNumber *_cachedClientIsUsingPrivateBrowsingValue;
    NSURL *_cachedWebViewURL;
    WBSTranslationErrorController *_errorController;
    WBSTranslationContextSnapshot *_snapshotToRestoreOnNextNavigation;
    NSArray *_cachedTextSamples;
    BOOL _hasReportedFirstParagraphFinishedFillingForAnalytics;
    BOOL _hasReportedInitialPageFinishedFillingForAnalytics;
    WBSTranslationScrollInteractionAnalyticsHelper *_scrollInteractionAnalyticsHelper;
    NSString *_previousPageTargetLocale;
    NSString *_previousPageSourceLocale;
    NSString *_previousPageHighLevelDomain;
    BOOL _nextNavigationIsEligibleForContinuedTranslation;
    os_unfair_lock_s _synchronousIvarLock;
    NSUInteger _state;
    NSString *_webpageLocale;
    id<WBSTranslationContextPreferenceProviding> *_preferenceProvider;
    NSArray *_cachedSupportedLocalePairs;
    NSNumber *_cachedTranslationSupportedInCurrentRegion;
    NSUInteger _initiallyExtractedParagraphCount;
    NSUInteger _translatedParagraphCount;
    NSMutableSet *_initiallyVisibleParagraphIdentifiersQueuedForTranslation;
    NSUInteger _initiallyVisibleParagraphCount;
    BOOL _hasReportedInitialVisibleParagraphsFinishedFillingForAnalytics;
    BOOL _hasFinishedInitialExtraction;
    WBSFluidProgressState *_fluidProgressState;
    WBSFluidProgressController *_fluidProgressController;
    NSArray *_cachedAllowedTargetLocaleIdentifiers;
    NSArray *_cachedAvailablePreferredTargetLocalesFilteredBySupportedLocales;
}


@property (readonly, nonatomic) NSArray *allowedTargetLocaleIdentifiers;
@property (readonly, nonatomic) NSArray *availableTargetLocaleIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<WBSTranslationContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger detectionNotificationLevel;
@property (weak, nonatomic) WBSFluidProgressController *fluidProgressController;
@property (readonly, nonatomic) BOOL hasStartedTranslating;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldOfferTranslationUI;
@property (readonly, nonatomic) NSUInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *webpageLocale;


+(id)translationContextWithWebView:(id)arg0 delegate:(id)arg1 ;
-(BOOL)_canLogSourcePageURL;
-(BOOL)_nextURLIsEligibleForContinuedTranslation:(id)arg0 ;
-(BOOL)_restoreContextSnapshotIfNeeded:(id)arg0 forURL:(id)arg1 ;
-(BOOL)_translationSupportedInCurrentRegion;
-(BOOL)_validateTargetLocaleSynchronously:(id)arg0 ;
-(BOOL)createFluidProgressState;
-(BOOL)debugAlwaysShowConsentAlert;
-(BOOL)debugDelayLanguageDetection;
-(BOOL)hasConsentedToFirstTimeAlert;
-(BOOL)hasFailedURL;
-(BOOL)hideMessageInUnifiedField;
-(BOOL)isContinuedTranslationEnabled;
-(BOOL)isTranslationEnabled;
-(BOOL)validateTargetLocale:(id)arg0 ;
-(CGFloat)_estimatedProgressWithScope:(NSInteger)arg0 ;
-(CGFloat)estimatedProgress;
-(id)_availableTargetLocaleIdentifiersConsideringCurrentWebpageLocale:(BOOL)arg0 ;
-(id)_currentSession;
-(id)_currentSnapshot;
-(id)_genericErrorMessage;
-(id)_userVisibleErrorMessageForError:(id)arg0 ;
-(id)expectedOrCurrentURL;
-(id)initWithContentExtractor:(id)arg0 contentFiller:(id)arg1 delegate:(id)arg2 ;
-(id)progressState;
-(id)targetLocaleForContentExtractor:(id)arg0 ;
-(id)userPreferredTargetLocales;
-(void)_cancelProgressForNavigation:(BOOL)arg0 ;
-(void)_computeVisibleParagraphsIfDuringInitialExtraction:(id)arg0 ;
-(void)_dominantLocaleForTextSamples:(id)arg0 url:(id)arg1 completionHandler:(id)arg2 ;
-(void)_generateJSONVersionOfContent:(id)arg0 forPurpose:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)_generateJSONVersionOfErrors:(id)arg0 completionHandler:(id)arg1 ;
-(void)_notifyDelegateToReportProgressInUnifiedField:(BOOL)arg0 ;
-(void)_promptIfNeededToConsentToTranslationWithCompletionHandler:(id)arg0 ;
-(void)_reportFilledFirstParagraphIfNeeded;
-(void)_reportFinishedFillingInitialPageContentIfNeeded;
-(void)_reportFinishedFillingInitialVisiblePageContentIfNeeded;
-(void)_reportLanguageDetectionAnalyticsForWebpageLocale:(id)arg0 notificationLevel:(NSUInteger)arg1 ;
-(void)_reportRequestedTranslationAnalyticsForWebpageLocale:(id)arg0 targetLocale:(id)arg1 requestType:(NSInteger)arg2 ;
-(void)_requestTranslatingWebpageToLocale:(id)arg0 requestType:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)_startProgressForExtractingContent;
-(void)_updateCachedAPISupportedValues;
-(void)_updateProgressForFinishingInitialContentExtraction;
-(void)_updateProgressWithExtractedParagraphCount:(NSUInteger)arg0 ;
-(void)_updateProgressWithTranslatedParagraphCount:(NSUInteger)arg0 ;
-(void)cacheTextSamples:(id)arg0 ;
-(void)clearFluidProgressState;
-(void)contentExtractor:(id)arg0 didExtractContent:(id)arg1 ;
-(void)contentExtractorDidFinishExtractingInitialContent:(id)arg0 ;
-(void)contentFiller:(id)arg0 didCompleteFillingItem:(id)arg1 withError:(id)arg2 ;
-(void)dominantLocaleForTextSamples:(id)arg0 completionHandler:(id)arg1 ;
-(void)dominantLocaleForTextSamples:(id)arg0 url:(id)arg1 completionHandler:(id)arg2 ;
-(void)errorController:(id)arg0 didReachThresholdForError:(id)arg1 ;
-(void)generateDiagnosticDataForPurpose:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)isTranslationSupportedForCurrentRegionWithCompletionHandler:(id)arg0 ;
-(void)owningWebViewDidCommitNavigationWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)owningWebViewDidDecidePolicy:(NSInteger)arg0 forNavigationAction:(id)arg1 currentBackForwardListItem:(id)arg2 ;
-(void)owningWebViewWillNavigateAndSaveCurrentSnapshotToStore:(id)arg0 isEligibleForContinuedTranslation:(BOOL)arg1 ;
-(void)owningWebViewWillNavigateToBackForwardListItem:(id)arg0 inPageCache:(BOOL)arg1 ;
-(void)owningWebViewWillNavigateToBackForwardListItemWithSnapshotStore:(id)arg0 inPageCache:(BOOL)arg1 ;
-(void)reloadPageInOriginalLanguage;
-(void)requestSendFeedbackWithCompletionHandler:(id)arg0 ;
-(void)requestTranslatingWebpageToLocale:(id)arg0 completionHandler:(id)arg1 ;
-(void)setConsentedToFirstTimeAlert:(BOOL)arg0 ;
-(void)setContentTranslator:(id)arg0 ;
-(void)setPreferenceProvider:(id)arg0 ;
-(void)supportedLocalePairsWithCompletionHandler:(id)arg0 ;
-(void)translationContext:(id)arg0 translateWebpageContents:(id)arg1 toTargetLocale:(id)arg2 translationHandler:(id)arg3 ;
-(void)updateMaxVisibleHeightPercentageIfNeeded:(CGFloat)arg0 userDriven:(BOOL)arg1 ;
-(void)validateTargetLocale:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif