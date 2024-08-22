// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVVISUALANALYSISVIEW_H
#define AVVISUALANALYSISVIEW_H

@class UIView, VKCImageAnalysis, NSString, VKImageAnalysisInteraction;
@protocol VKCImageAnalysisInteractionDelegate, AVVisualAnalysisViewDelegate;



@interface AVVisualAnalysisView : UIView <VKCImageAnalysisInteractionDelegate>



@property (copy, nonatomic) VKCImageAnalysis *analysis; // ivar: _analysis
@property (nonatomic) CGFloat analysisButtonBottomInset; // ivar: _analysisButtonBottomInset
@property (nonatomic) BOOL analysisButtonVisibleOnlyWhenSelected; // ivar: _analysisButtonVisibleOnlyWhenSelected
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVVisualAnalysisViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasProminentText;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlightsInteractableAreas;
@property (retain, nonatomic) VKImageAnalysisInteraction *imageAnalysisInteraction; // ivar: _imageAnalysisInteraction
@property (nonatomic, getter=isInteractionInProgress) BOOL interactionInProgress; // ivar: _interactionInProgress
@property (nonatomic) BOOL showsAnalysisButtonIfAvailable; // ivar: _showsAnalysisButtonIfAvailable
@property (readonly) Class superclass;


-(BOOL)hasActiveTextSelection;
-(BOOL)highlightsSelectableItems;
-(BOOL)imageAnalysisInteraction:(id)arg0 shouldBeginAtPoint:(struct CGPoint )arg1 forAnalysisType:(NSUInteger)arg2 ;
-(void)_addInteractionIfNeeded;
-(void)_removeInteractionIfNeeded;
-(void)_updateActionInfoViewHiddenStateIfNeeded;
-(void)hasActiveTextSelectionDidChangeForImageAnalysisInteraction:(id)arg0 ;
-(void)imageAnalysisInteraction:(id)arg0 didRequestLiveTextButtonSelectedState:(BOOL)arg1 ;
-(void)imageAnalysisInteraction:(id)arg0 imageAnalysisButtonPressed:(id)arg1 ;
-(void)imageAnalysisInteraction:(id)arg0 liveTextButtonDidChangeToVisible:(BOOL)arg1 ;
-(void)imageAnalysisInteraction:(id)arg0 prepareForCalloutAction:(SEL)arg1 competion:(id)arg2 ;
-(void)resetSelection;


@end


#endif