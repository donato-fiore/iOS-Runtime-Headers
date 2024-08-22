// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLIMAGEANALYSISMANAGER_H
#define QLIMAGEANALYSISMANAGER_H

@class QLToolbarButton, UIView, NSLayoutConstraint, NSString, VKCImageAnalyzer, VKCImageAnalysisInteraction;
@protocol VKCImageAnalysisInteractionDelegate, QLImageAnalysisManagerDelegate;

#import <Foundation/Foundation.h>


@interface QLImageAnalysisManager : NSObject <VKCImageAnalysisInteractionDelegate>

 {
    BOOL _isFullScreen;
    BOOL _isImageAnalysisPopoverPresented;
    QLToolbarButton *_imageAnalysisToolbarButton;
    UIView *_presentingView;
    UIView *_bottomRightButtonsContainer;
    UIView *_analysisButtonContainer;
    UIView *_visualSearchViewContainer;
    NSLayoutConstraint *_bottomRightButtonsContainerRightConstraint;
    NSLayoutConstraint *_bottomRightButtonsContainerBottomConstraint;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<QLImageAnalysisManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int imageAnalysisRequestId; // ivar: _imageAnalysisRequestId
@property (readonly, nonatomic) QLToolbarButton *imageAnalysisToolbarButton;
@property (retain, nonatomic) VKCImageAnalyzer *imageAnalyzer; // ivar: _imageAnalyzer
@property (retain, nonatomic) VKCImageAnalysisInteraction *imageInteraction; // ivar: _imageInteraction
@property (nonatomic) BOOL shouldEnterVisualSearchAfterNextAnalysis; // ivar: _shouldEnterVisualSearchAfterNextAnalysis
@property (nonatomic) BOOL shouldHighlightTextAndDDAfterNextAnalysis; // ivar: _shouldHighlightTextAndDDAfterNextAnalysis
@property (nonatomic) BOOL shouldUpliftSubjectAfterNextAnalysis; // ivar: _shouldUpliftSubjectAfterNextAnalysis
@property (readonly) Class superclass;


+(BOOL)shouldStartImageAnalysisForPresentationMode:(NSUInteger)arg0 ;
-(BOOL)actionInfoItemExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)addInteractionIfNeeded;
-(BOOL)dataDetectorExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)hasActiveTextSelection;
-(BOOL)hasAnalysis;
-(BOOL)hasResultsForVisualSearch;
-(BOOL)imageAnalysisInteraction:(id)arg0 shouldBeginAtPoint:(struct CGPoint )arg1 forAnalysisType:(NSUInteger)arg2 ;
-(BOOL)imageSubjectExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)isAnalysisOngoing;
-(BOOL)isImageSubjectHighlightingEnabled;
-(BOOL)isInteractionActive;
-(BOOL)isTextSelectionEnabled;
-(BOOL)isVisualSearchEnabled;
-(BOOL)textExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)visualSearchExistsAtPoint:(struct CGPoint )arg0 ;
-(NSUInteger)_defaultInteractionTypes;
-(id)image;
-(id)imageAnalysisQueue;
-(id)initWithDelegate:(id)arg0 presentingView:(id)arg1 ;
-(id)presentingViewControllerForImageAnalysisInteraction:(id)arg0 ;
-(void)_activateInteractionTypes:(NSUInteger)arg0 ;
-(void)_handleImageAnalysis:(id)arg0 error:(id)arg1 ;
-(void)_setupAnalysisButtonsContainerInView:(id)arg0 ;
-(void)_setupImageAnalysis;
-(void)_setupNotificationsObservation;
-(void)_startImageAnalysisWithRequest:(id)arg0 ;
-(void)_updateAnalysisButtonContainerWithAnimation:(BOOL)arg0 ;
-(void)_updateAnalysisButtonWithAnimation:(BOOL)arg0 ;
-(void)_updateInfoButtonWithAnimation:(BOOL)arg0 ;
-(void)activateVisualSearchInteraction;
-(void)adjustImageInteractionForScrollView:(id)arg0 ;
-(void)cancelAllRequests;
-(void)dataDetectorDetectionControllerDidDismissAction:(id)arg0 ;
-(void)dataDetectorDetectionControllerWillPresentAction:(id)arg0 ;
-(void)dealloc;
-(void)enableMarkupMode:(BOOL)arg0 ;
-(void)imageAnalysisInteraction:(id)arg0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect )arg1 ;
-(void)imageAnalysisInteraction:(id)arg0 prepareForCalloutAction:(SEL)arg1 competion:(id)arg2 ;
-(void)imageAnalysisInteractionDidDismissVisualSearchController:(id)arg0 ;
-(void)imageAnalysisPopoverDidDisappear;
-(void)imageAnalysisPopoverWillAppear;
-(void)infoButtonTapped;
-(void)setupAnalysisButtonsContainer;
-(void)shouldHideInteraction:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)startImageAnalysis;
-(void)stopImageAnalysis;
-(void)updateBottomRightContainerPositionForImageView:(id)arg0 view:(id)arg1 ;
-(void)updateForFullScreen:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif