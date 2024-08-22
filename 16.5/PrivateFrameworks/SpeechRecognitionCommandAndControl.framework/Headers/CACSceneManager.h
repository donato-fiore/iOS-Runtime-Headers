// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACSCENEMANAGER_H
#define CACSCENEMANAGER_H

@class UIWindow, NSMutableArray, UIWindowScene;
@protocol CACSimpleContentViewManagerDelegate, CACLabeledElementsOverlayManagerDelegate, CACLabeledGridOverlayManagerDelegate, CACDictationRecognizerModeOverlayManagerDelegate, CACElementNamesOverlayManagerDelegate;

#import <Foundation/Foundation.h>

#import "CACBannerViewPresenter.h"
#import "CACDisambiguationPresentationManager.h"
#import "CACContextCluesPresentationManager.h"
#import "CACCorrectionPresentationManager.h"
#import "CACCustomCommandEditorPresentationManager.h"
#import "CACDictationRecognizerModeOverlayManager.h"
#import "CACElementActionsPresentationManager.h"
#import "CACElementNamesOverlayManager.h"
#import "CACGestureLivePreviewOverlayManager.h"
#import "CACLabeledElementsOverlayManager.h"
#import "CACLabeledGridOverlayManager.h"
#import "CACContainerViewController.h"

@interface CACSceneManager : NSObject <CACSimpleContentViewManagerDelegate, CACLabeledElementsOverlayManagerDelegate, CACLabeledGridOverlayManagerDelegate, CACDictationRecognizerModeOverlayManagerDelegate, CACElementNamesOverlayManagerDelegate>



@property (retain, nonatomic) CACBannerViewPresenter *bannerViewPresenter; // ivar: _bannerViewPresenter
@property (retain, nonatomic) CACDisambiguationPresentationManager *contactDisambiguationPresentationManager; // ivar: _contactDisambiguationPresentationManager
@property (retain, nonatomic) CACContextCluesPresentationManager *contextCluesPresentationManager; // ivar: _contextCluesPresentationManager
@property (retain, nonatomic) CACCorrectionPresentationManager *correctionPresentationManager; // ivar: _correctionPresentationManager
@property (retain, nonatomic) CACCustomCommandEditorPresentationManager *customCommandEditorPresentationManager; // ivar: _customCommandEditorPresentationManager
@property (retain, nonatomic) CACDictationRecognizerModeOverlayManager *dictationRecognizerModeOverlayManager; // ivar: _dictationRecognizerModeOverlayManager
@property (readonly, nonatomic) unsigned int displayID;
@property (retain, nonatomic) CACElementActionsPresentationManager *elementActionsPresentationManager; // ivar: _elementActionsPresentationManager
@property (retain, nonatomic) CACElementNamesOverlayManager *elementNamesOverlayManager; // ivar: _elementNamesOverlayManager
@property (retain, nonatomic) CACGestureLivePreviewOverlayManager *gestureLivePreviewOverlayManager; // ivar: _gestureLivePreviewOverlayManager
@property (retain, nonatomic) CACGestureLivePreviewOverlayManager *gestureLivePreviewPresentationOverlayManager; // ivar: _gestureLivePreviewPresentationOverlayManager
@property (retain, nonatomic) CACLabeledElementsOverlayManager *labeledElementsOverlayManager; // ivar: _labeledElementsOverlayManager
@property (retain, nonatomic) CACLabeledGridOverlayManager *labeledGridOverlayManager; // ivar: _labeledGridOverlayManager
@property (nonatomic) CGRect minimumSystemAperatureRect; // ivar: _minimumSystemAperatureRect
@property (retain, nonatomic) CACContainerViewController *overlayContainerViewController; // ivar: _overlayContainerViewController
@property (retain, nonatomic) UIWindow *overlayWindow; // ivar: _overlayWindow
@property (retain, nonatomic) NSMutableArray *registeredPresentationManagers; // ivar: _registeredPresentationManagers
@property (retain, nonatomic) UIWindowScene *scene; // ivar: _scene
@property (nonatomic) CGRect systemAperatureRect; // ivar: _systemAperatureRect
@property (retain, nonatomic) UIWindow *window; // ivar: _window
@property (retain, nonatomic) CACContainerViewController *windowContainerViewController; // ivar: _windowContainerViewController


-(BOOL)isAlwaysShowingElementNamesOverlayManager:(id)arg0 ;
-(BOOL)isAlwaysShowingLabeledElementsOverlayManager:(id)arg0 ;
-(BOOL)isAlwaysShowingLabeledGridOverlayManager:(id)arg0 ;
-(BOOL)isDisplayingAnyContentView;
-(BOOL)isDisplayingAnyInteractiveContentInProcess;
-(BOOL)isDisplayingAnyOutOfProcessPresentation;
-(BOOL)isDisplayingAnyOverlay;
-(BOOL)isDisplayingAnyPresentation;
-(BOOL)isDisplayingCorrections;
-(BOOL)isHandlingDisambiguationForLabeledElementsOverlayManager:(id)arg0 ;
-(BOOL)isOverlayFadingEnabledForElementNamesOverlayManager:(id)arg0 ;
-(BOOL)isOverlayFadingEnabledForLabeledElementsOverlayManager:(id)arg0 ;
-(BOOL)isOverlayFadingEnabledForLabeledGridOverlayManager:(id)arg0 ;
-(BOOL)isPressOnFirstLevelEnabledForLabeledGridOverlayManager:(id)arg0 ;
-(BOOL)isZoomEnabledForGridOverlayManager:(id)arg0 ;
-(BOOL)shouldAssignNumbersRandomlyInLabeledElementsOverlayManager:(id)arg0 ;
-(BOOL)showsNumbersInTopLeftForLabeledGridOverlayManager:(id)arg0 ;
-(BOOL)updateGridLayoutFromPreferences;
-(CGFloat)overlayFadeDelayForElementNamesOverlayManager:(id)arg0 ;
-(CGFloat)overlayFadeDelayForLabeledElementsOverlayManager:(id)arg0 ;
-(CGFloat)overlayFadeDelayForLabeledGridOverlayManager:(id)arg0 ;
-(NSInteger)defaultNumberOfColumnsForLabeledGridOverlayManager:(id)arg0 ;
-(NSInteger)maximumLevelForLabeledGridOverlayManager:(id)arg0 ;
-(NSUInteger)numberOfLabelsForGridManager;
-(NSUInteger)updateGridLayoutWithNumberOfRows:(NSUInteger)arg0 numberOfColumns:(NSUInteger)arg1 shouldPreferRows:(BOOL)arg2 startingNumber:(NSUInteger)arg3 ;
-(float)overlayFadeOpacityForElementNamesOverlayManager:(id)arg0 ;
-(float)overlayFadeOpacityForLabeledElementsOverlayManager:(id)arg0 ;
-(float)overlayFadeOpacityForLabeledGridOverlayManager:(id)arg0 ;
-(id)_containerViewControllerForViewController:(id)arg0 ;
-(id)init;
-(id)labeledGridOverlayManager:(id)arg0 elementWithTitle:(id)arg1 rectangle:(struct CGRect )arg2 ;
-(id)localeForLabeledElementsOverlayManager:(id)arg0 ;
-(id)screen;
-(id)screenForLabeledElementsOverlayManager:(id)arg0 ;
-(id)screenForLabeledGridOverlayManager:(id)arg0 ;
-(int)modeForDictationRecognizerModeOverlayManager:(id)arg0 ;
-(struct CGRect )imageRectForDictationRecognizerModeOverlayManager:(id)arg0 ;
-(struct CGRect )systemAperatureMinimumRectForLabeledElementsOverlayManager:(id)arg0 ;
-(struct CGRect )systemAperatureRectForLabeledElementsOverlayManager:(id)arg0 ;
-(struct CGRect )topLevelPortraitUpRectForLabeledGridOverlayManager:(id)arg0 ;
-(void)_installViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_uninstallViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)contentViewManager:(id)arg0 dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)contentViewManager:(id)arg0 presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)didAssignNumbersInLabeledElementsOverlayManager:(id)arg0 ;
-(void)didUpdateElementsForLabeledGridOverlayManager:(id)arg0 ;
-(void)hideAnyOverlayAnimated:(BOOL)arg0 includeInteractiveOverlays:(BOOL)arg1 ;
-(void)hideAnyPresentationAnimated:(BOOL)arg0 includingOutOfProcessPresentations:(BOOL)arg1 ;
-(void)hideDictationRecognizerModeOverlayNow;
-(void)redrawGridIfExists;
-(void)registerPresentationManager:(id)arg0 ;
-(void)showBannerViewWithText:(id)arg0 type:(NSInteger)arg1 ;


@end


#endif