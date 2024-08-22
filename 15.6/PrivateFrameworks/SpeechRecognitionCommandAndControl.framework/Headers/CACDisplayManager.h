// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACDISPLAYMANAGER_H
#define CACDISPLAYMANAGER_H

@class NSMutableArray, NSOperationQueue, NSMutableSet, UIView, UIWindow, NSTimer, STVoiceControlStatusDomainPublisher;
@protocol CACSimpleContentViewManagerDelegate, CACLabeledElementsOverlayManagerDelegate, CACLabeledGridOverlayManagerDelegate, CACDictationRecognizerModeOverlayManagerDelegate;

#import <Foundation/Foundation.h>

#import "CACContainerViewController.h"
#import "CACLabeledElementsOverlayManager.h"
#import "CACLabeledGridOverlayManager.h"
#import "CACElementNamesOverlayManager.h"
#import "CACGestureLivePreviewOverlayManager.h"
#import "CACElementActionsPresentationManager.h"
#import "CACCorrectionPresentationManager.h"
#import "CACCustomCommandEditorPresentationManager.h"
#import "CACDictationRecognizerModeOverlayManager.h"
#import "CACDisambiguationPresentationManager.h"
#import "CACContextCluesPresentationManager.h"
#import "CACVoiceOverAnnouncer.h"
#import "CACBannerViewPresenter.h"

@interface CACDisplayManager : NSObject <CACSimpleContentViewManagerDelegate, CACLabeledElementsOverlayManagerDelegate, CACLabeledGridOverlayManagerDelegate, CACDictationRecognizerModeOverlayManagerDelegate>

 {
    NSMutableArray *_registeredPresentationManagers;
    CACContainerViewController *_windowContainerViewController;
    CACContainerViewController *_overlayContainerViewController;
    NSOperationQueue *_messageDisplayOperationQueue;
    CACLabeledElementsOverlayManager *_labeledElementsOverlayManager;
    CACLabeledGridOverlayManager *_labeledGridOverlayManager;
    CACElementNamesOverlayManager *_elementNamesOverlayManager;
    CACGestureLivePreviewOverlayManager *_gestureLivePreviewOverlayManager;
    CACElementActionsPresentationManager *_elementActionsPresentationManager;
    CACCorrectionPresentationManager *_correctionPresentationManager;
    CACCustomCommandEditorPresentationManager *_customCommandEditorPresentationManager;
    CACDictationRecognizerModeOverlayManager *_dictationRecognizerModeOverlayManager;
    CACDisambiguationPresentationManager *_contactDisambiguationPresentationManager;
    CACContextCluesPresentationManager *_contextCluesPresentationManager;
    NSMutableSet *_modalAlerts;
    os_unfair_lock_s _modalAlertsLock;
    CACVoiceOverAnnouncer *_voiceOverAnnouncer;
}


@property (retain, nonatomic) CACBannerViewPresenter *bannerViewPresenter; // ivar: _bannerViewPresenter
@property (readonly, nonatomic) CACDisambiguationPresentationManager *contactDisambiguationPresentationManager;
@property (readonly, nonatomic) CACContextCluesPresentationManager *contextCluesPresentationManager;
@property (readonly, nonatomic) CACCorrectionPresentationManager *correctionPresentationManager;
@property (readonly, nonatomic) CACCustomCommandEditorPresentationManager *customCommandEditorPresentationManager;
@property (readonly, nonatomic) CGPoint defaultPortraitUpPointForGestures;
@property (readonly, nonatomic) CACDictationRecognizerModeOverlayManager *dictationRecognizerModeOverlayManager;
@property (readonly, nonatomic) CACElementActionsPresentationManager *elementActionsPresentationManager;
@property (readonly, nonatomic) CACElementNamesOverlayManager *elementNamesOverlayManager;
@property (readonly, nonatomic) CACGestureLivePreviewOverlayManager *gestureLivePreviewPresentationOverlayManager;
@property (readonly, nonatomic) CACLabeledElementsOverlayManager *labeledElementsOverlayManager;
@property (readonly, nonatomic) CACLabeledGridOverlayManager *labeledGridOverlayManager;
@property (readonly, nonatomic) UIView *overlayView;
@property (retain, nonatomic) UIWindow *overlayWindow; // ivar: _overlayWindow
@property (retain, nonatomic) NSTimer *statusIndicatorAnimationTimer; // ivar: _statusIndicatorAnimationTimer
@property (nonatomic) NSInteger statusIndicatorType; // ivar: _statusIndicatorType
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) STVoiceControlStatusDomainPublisher *voiceControlStatusPublisher; // ivar: _voiceControlStatusPublisher
@property (readonly, nonatomic) CACVoiceOverAnnouncer *voiceOverAnnouncer;
@property (retain, nonatomic) UIWindow *window; // ivar: _window


+(CGFloat)durationToDisplayMessageString:(id)arg0 ;
+(id)sharedManager;
+(void)initialize;
-(BOOL)_hasModalAlert;
-(BOOL)_hasModalAlertWithTitle:(id)arg0 ;
-(BOOL)isAlwaysShowingLabeledElementsOverlayManager:(id)arg0 ;
-(BOOL)isAlwaysShowingLabeledGridOverlayManager:(id)arg0 ;
-(BOOL)isDisplayingAnyContentView;
-(BOOL)isDisplayingAnyInteractiveContentInProcess;
-(BOOL)isDisplayingAnyOutOfProcessPresentation;
-(BOOL)isDisplayingAnyOverlay;
-(BOOL)isDisplayingAnyPresentation;
-(BOOL)isDisplayingConfirmationModalAlert;
-(BOOL)isDisplayingCorrections;
-(BOOL)isGridAtTopLevel;
-(BOOL)isHandlingDisambiguationForLabeledElementsOverlayManager:(id)arg0 ;
-(BOOL)isMaximumDensityEnabledForLabeledGridOverlayManager:(id)arg0 ;
-(BOOL)isOverlayFadingEnabledForLabeledElementsOverlayManager:(id)arg0 ;
-(BOOL)isOverlayFadingEnabledForLabeledGridOverlayManager:(id)arg0 ;
-(BOOL)isPressOnFirstLevelEnabledForLabeledGridOverlayManager:(id)arg0 ;
-(BOOL)isZoomEnabledForGridOverlayManager:(id)arg0 ;
-(BOOL)shouldAssignNumbersRandomlyInLabeledElementsOverlayManager:(id)arg0 ;
-(BOOL)showsNumbersInTopLeftForLabeledGridOverlayManager:(id)arg0 ;
-(BOOL)updateGridLayoutFromPreferences;
-(BOOL)updateGridWithPortraitUpRect:(struct CGRect )arg0 gridContainingLabel:(id)arg1 ;
-(CGFloat)overlayFadeDelayForLabeledElementsOverlayManager:(id)arg0 ;
-(CGFloat)overlayFadeDelayForLabeledGridOverlayManager:(id)arg0 ;
-(NSInteger)defaultNumberOfColumnsForLabeledGridOverlayManager:(id)arg0 ;
-(NSInteger)maximumLevelForLabeledGridOverlayManager:(id)arg0 ;
-(float)overlayFadeOpacityForLabeledElementsOverlayManager:(id)arg0 ;
-(float)overlayFadeOpacityForLabeledGridOverlayManager:(id)arg0 ;
-(id)_containerViewControllerForViewController:(id)arg0 ;
-(id)existingOverlayManagerForType:(id)arg0 ;
-(id)init;
-(id)labeledElementsForGrid;
-(id)labeledElementsForItemNumbers;
-(id)labeledGridOverlayManager:(id)arg0 elementWithTitle:(id)arg1 rectangle:(struct CGRect )arg2 ;
-(id)localeForLabeledElementsOverlayManager:(id)arg0 ;
-(int)modeForDictationRecognizerModeOverlayManager:(id)arg0 ;
-(struct CGRect )imageRectForDictationRecognizerModeOverlayManager:(id)arg0 ;
-(struct CGRect )topLevelPortraitUpRectForLabeledGridOverlayManager:(id)arg0 ;
-(void)_installViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_registerPresentationManager:(id)arg0 ;
-(void)_showBannerViewWithText:(id)arg0 type:(NSInteger)arg1 ;
-(void)_trackModalAlert:(id)arg0 ;
-(void)_uninstallViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_untrackModalAlert:(id)arg0 ;
-(void)_updateForCurrentStatusIndicatorType;
-(void)addPointsToLiveRecordingGesturePreviewByFingerIdentifier:(id)arg0 forces:(id)arg1 atTime:(CGFloat)arg2 ;
-(void)contentViewManager:(id)arg0 dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)contentViewManager:(id)arg0 presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)didAssignNumbersInLabeledElementsOverlayManager:(id)arg0 ;
-(void)didUpdateElementsForLabeledGridOverlayManager:(id)arg0 ;
-(void)didUpdateOrientation;
-(void)displayMessageString:(id)arg0 type:(NSInteger)arg1 ;
-(void)displayMessageString:(id)arg0 type:(NSInteger)arg1 announcementCompletion:(id)arg2 ;
-(void)displayReadyToUseWithLanguageMessage;
-(void)enableStatusBarOverride:(BOOL)arg0 ;
-(void)hideAnyInProcessPresentation;
-(void)hideAnyNonInteractiveOverlay;
-(void)hideAnyOverlay;
-(void)hideAnyOverlayAnimated:(BOOL)arg0 ;
-(void)hideAnyOverlayAnimated:(BOOL)arg0 includeInteractiveOverlays:(BOOL)arg1 ;
-(void)hideAnyPresentation;
-(void)hideAnyPresentationAnimated:(BOOL)arg0 ;
-(void)hideAnyPresentationAnimated:(BOOL)arg0 includingOutOfProcessPresentations:(BOOL)arg1 ;
-(void)hideContactDisambiguation;
-(void)hideCorrections;
-(void)hideDictationRecognizerModeOverlayNow;
-(void)hideObsoletePresentationsIfNeededForElements:(id)arg0 ;
// -(void)presentModalAlertWithTitle:(id)arg0 description:(id)arg1 button1Text:(id)arg2 button1Style:(NSInteger)arg3 button2Text:(id)arg4 button2Style:(NSInteger)arg5 object:(id)arg6 button1Handler:(id)arg7 button2Handler:(unk)arg8  ;
-(void)presentModalAlertWithTitle:(id)arg0 description:(id)arg1 okButtonText:(id)arg2 cancelButtonText:(id)arg3 object:(id)arg4 okButtonHandler:(id)arg5 ;
-(void)refreshOverlays;
-(void)removeTrackingForFingerIdentifier:(id)arg0 ;
-(void)resetGrid;
-(void)resetGridIdleTimer;
-(void)showContactDisambiguationItems:(id)arg0 ;
-(void)showContextCluesViewWithCommands:(id)arg0 ;
-(void)showCorrectionsForElement:(id)arg0 nBestStrings:(id)arg1 ;
-(void)showCustomCommandEditorWithGesture:(id)arg0 ;
-(void)showCustomCommandEditorWithRecordedUserActionFlow:(id)arg0 ;
-(void)showCustomCommandEditorWithShortcutsWorkflow:(id)arg0 ;
-(void)showCustomCommandEditorWithTextToInsert:(id)arg0 ;
-(void)showElementActionsForElement:(id)arg0 usingPortraitUpRect:(struct CGRect )arg1 ;
-(void)showOverlayForDictiationRecognizerMode;
-(void)speakVoiceOverDescriptionForActiveOverlayIfNeeded;
-(void)startShowingTransientOverlayForType:(id)arg0 ;
-(void)updateGridLayoutWithNumberOfRows:(NSUInteger)arg0 numberOfColumns:(NSUInteger)arg1 shouldPreferRows:(BOOL)arg2 ;
-(void)updatePreferencesFromCurrentGridLayoutForRows:(BOOL)arg0 forColumns:(BOOL)arg1 ;
-(void)updatePresentationForActiveOverlay;


@end


#endif