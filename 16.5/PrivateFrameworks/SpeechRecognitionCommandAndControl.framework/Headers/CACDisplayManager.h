// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACDISPLAYMANAGER_H
#define CACDISPLAYMANAGER_H

@class NSMutableArray, NSOperationQueue, NSMutableSet, SBSSystemApertureLayoutMonitor, NSString, UIView, NSTimer, STVoiceControlStatusDomainPublisher;
@protocol SBSSystemApertureLayoutMonitoring;

#import <Foundation/Foundation.h>

#import "CACVoiceOverAnnouncer.h"

@interface CACDisplayManager : NSObject <SBSSystemApertureLayoutMonitoring>

 {
    NSMutableArray *_sceneManagers;
    NSOperationQueue *_messageDisplayOperationQueue;
    NSMutableSet *_modalAlerts;
    os_unfair_lock_s _modalAlertsLock;
    CACVoiceOverAnnouncer *_voiceOverAnnouncer;
    SBSSystemApertureLayoutMonitor *_layoutMonitor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGPoint defaultPortraitUpPointForGestures;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *overlayView;
@property (retain, nonatomic) NSTimer *statusIndicatorAnimationTimer; // ivar: _statusIndicatorAnimationTimer
@property (nonatomic) NSInteger statusIndicatorType; // ivar: _statusIndicatorType
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) STVoiceControlStatusDomainPublisher *voiceControlStatusPublisher; // ivar: _voiceControlStatusPublisher
@property (readonly, nonatomic) CACVoiceOverAnnouncer *voiceOverAnnouncer;


+(CGFloat)durationToDisplayMessageString:(id)arg0 ;
+(id)sharedManager;
+(void)initialize;
-(BOOL)_hasModalAlert;
-(BOOL)_hasModalAlertWithTitle:(id)arg0 ;
-(BOOL)isDisplayingAnyContentView;
-(BOOL)isDisplayingAnyInteractiveContentInProcess;
-(BOOL)isDisplayingAnyOutOfProcessPresentation;
-(BOOL)isDisplayingAnyOverlay;
-(BOOL)isDisplayingAnyPresentation;
-(BOOL)isDisplayingConfirmationModalAlert;
-(BOOL)isDisplayingCorrections;
-(BOOL)isGridAtTopLevel;
-(BOOL)updateGridLayoutFromPreferences;
-(BOOL)updateGridWithPortraitUpRect:(struct CGRect )arg0 gridContainingLabel:(id)arg1 ;
-(BOOL)verifyElementExists:(id)arg0 ;
-(id)_mainScreenSceneManager;
-(id)_sceneForModalAlerts;
-(id)contactDisambiguationPresentationManager;
-(id)contextCluesPresentationManager;
-(id)correctionPresentationManager;
-(id)customCommandEditorPresentationManager;
-(id)dictationRecognizerModeOverlayManager;
-(id)elementActionsPresentationManager;
-(id)elementNamesOverlayManager;
-(id)init;
-(id)labeledElementsForGrid;
-(id)labeledElementsForItemNumbers;
-(id)labeledElementsOverlayManager;
-(id)overlayViewForDisplayID:(unsigned int)arg0 ;
-(void)_initializeWindows;
-(void)_initializeWindowsWithScene:(id)arg0 ;
-(void)_showBannerViewWithText:(id)arg0 type:(NSInteger)arg1 ;
-(void)_trackModalAlert:(id)arg0 ;
-(void)_untrackModalAlert:(id)arg0 ;
-(void)_updateForCurrentStatusIndicatorType;
-(void)addPointsToLiveRecordingGesturePreviewByFingerIdentifier:(id)arg0 forces:(id)arg1 atTime:(CGFloat)arg2 ;
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
-(void)initializeWindowsWithScene:(id)arg0 ;
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
-(void)systemApertureLayoutDidChange:(id)arg0 ;
-(void)updateGridLayoutWithNumberOfRows:(NSUInteger)arg0 numberOfColumns:(NSUInteger)arg1 shouldPreferRows:(BOOL)arg2 ;
-(void)updatePreferencesFromCurrentGridLayoutForRows:(BOOL)arg0 forColumns:(BOOL)arg1 ;
-(void)updatePresentationForActiveOverlay;


@end


#endif