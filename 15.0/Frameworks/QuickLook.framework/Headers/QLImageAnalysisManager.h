// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLIMAGEANALYSISMANAGER_H
#define QLIMAGEANALYSISMANAGER_H

@class NSLayoutConstraint, UIButton, NSString, VKImageAnalyzer, VKImageAnalysisInteraction, UIView;
@protocol VKImageAnalysisInteractionDelegate, QLImageAnalysisManagerDelegate;

#import <Foundation/Foundation.h>

#import "QLToolbarButton.h"

@interface QLImageAnalysisManager : NSObject <VKImageAnalysisInteractionDelegate>

 {
    NSLayoutConstraint *_visualSearchCornerViewBottomConstraint;
    NSLayoutConstraint *_visualSearchCornerViewSafeAreaBottomConstraint;
    NSLayoutConstraint *_imageAnalysisBottomConstraint;
    NSLayoutConstraint *_imageAnalysisSafeAreaBottomConstraint;
    BOOL _shouldHighlightTextForNextAnalysis;
    BOOL _isFullScreen;
    BOOL _isImageAnalysisPopoverPresented;
    QLToolbarButton *_imageAnalysisToolbarButton;
}


@property (readonly, nonatomic) UIButton *analysisButton;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<QLImageAnalysisManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int imageAnalysisRequestId; // ivar: _imageAnalysisRequestId
@property (readonly, nonatomic) QLToolbarButton *imageAnalysisToolbarButton;
@property (retain, nonatomic) VKImageAnalyzer *imageAnalyzer; // ivar: _imageAnalyzer
@property (retain, nonatomic) VKImageAnalysisInteraction *imageInteraction; // ivar: _imageInteraction
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *visualSearchCornerView;


+(BOOL)shouldStartImageAnalysisForPresentationMode:(NSUInteger)arg0 ;
-(BOOL)dataDetectorExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)hasActiveTextSelection;
-(BOOL)hasResultsForVisualSearch;
-(BOOL)imageAnalysisInteraction:(id)arg0 shouldBeginAtPoint:(struct CGPoint )arg1 forAnalysisType:(NSUInteger)arg2 ;
-(BOOL)isInteractionActive;
-(BOOL)isTextSelectionEnabled;
-(BOOL)isVisualSearchEnabled;
-(BOOL)textExistsAtPoint:(struct CGPoint )arg0 ;
-(BOOL)visualSearchExistsAtPoint:(struct CGPoint )arg0 ;
-(id)image;
-(id)imageAnalysisQueue;
-(void)_activateInteractionTypes:(NSUInteger)arg0 ;
-(void)_handleImageAnalysis:(id)arg0 error:(id)arg1 ;
-(void)_startImageAnalysisWithRequest:(id)arg0 ;
-(void)_updateAnalysisButton;
-(void)_updateAnalysisButtonWithAnimation:(BOOL)arg0 ;
-(void)_updateInfoButtonWithAnimation:(BOOL)arg0 ;
-(void)activateVisualSearchInteraction;
-(void)addImageAnalysisViewsInView:(id)arg0 ;
-(void)cancelAllRequests;
-(void)enableMarkupMode:(BOOL)arg0 ;
-(void)imageAnalysisInteraction:(id)arg0 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect )arg1 ;
-(void)imageAnalysisInteraction:(id)arg0 prepareForCalloutAction:(SEL)arg1 competion:(id)arg2 ;
-(void)imageAnalysisInteractionDidDismissVisualSearchController:(id)arg0 ;
-(void)imageAnalysisPopoverDidDisappear;
-(void)imageAnalysisPopoverWillAppear;
-(void)infoButtonTapped;
-(void)scrollViewDidZoomToUnitRect:(struct CGRect )arg0 ;
-(void)setFirstTimeDataDetectorsAndTextSelectionInteractions;
-(void)setupImageAnalysis;
-(void)shouldHideInteraction:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)startImageAnalysis;
-(void)stopImageAnalysis;
-(void)updateConstraintsToUseSafeArea:(BOOL)arg0 ;
-(void)updateForFullScreen:(BOOL)arg0 ;


@end


#endif