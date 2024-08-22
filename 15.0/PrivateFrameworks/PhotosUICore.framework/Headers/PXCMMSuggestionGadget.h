// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMSUGGESTIONGADGET_H
#define PXCMMSUGGESTIONGADGET_H

@class NSString;
@protocol PXCMMSuggestionViewDelegate, PXDiagnosticsEnvironment, PXGadget, PXGadgetDelegate, PXCMMSuggestion, PXCMMWorkflowPresenting;

#import <Foundation/Foundation.h>

#import "PXCMMSuggestionViewModel.h"
#import "PXCMMSuggestionView.h"
#import "PXFaceTileImageCombiner.h"
#import "PXGadgetSpec.h"

@interface PXCMMSuggestionGadget : NSObject <PXCMMSuggestionViewDelegate, PXDiagnosticsEnvironment, PXGadget>

 {
    BOOL _didLoadSuggestion;
    PXCMMSuggestionViewModel *_suggestionViewModel;
    PXCMMSuggestionView *_suggestionView;
    CGSize _requestedPosterImageSize;
    CGFloat _requestedWidth;
    BOOL _didRequestCachingOfPosterImage;
    PXFaceTileImageCombiner *_faceTileImageCombiner;
}


@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) NSInteger priority;
@property (retain, nonatomic) NSObject<PXCMMSuggestion> *suggestion; // ivar: _suggestion
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleContentRect;
@property (readonly, nonatomic) NSObject<PXCMMWorkflowPresenting> *workflowPresenter; // ivar: _workflowPresenter


+(id)_imageRequestOptions;
-(BOOL)supportsHighlighting;
-(id)init;
-(id)initWithWorkflowPresenter:(id)arg0 ;
-(id)previewViewControllerAtLocation:(struct CGPoint )arg0 fromSourceView:(id)arg1 ;
-(id)px_diagnosticsItemProvidersForPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)targetPreviewViewForLocation:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)uniqueGadgetIdentifier;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_cachePosterImageWithWidth:(CGFloat)arg0 ;
-(void)_clearPosterImageCache;
-(void)_loadSuggestionIfNecessary;
-(void)_presentDetailViewAnimated:(BOOL)arg0 pptConfigurationBlock:(id)arg1 ;
-(void)_setCombinedFaceTileImage:(id)arg0 ;
-(void)_updatePeopleSuggestionFaceTileImagesForPersons:(id)arg0 mutableViewModel:(id)arg1 ;
-(void)commitPreviewViewController:(id)arg0 ;
-(void)contentHasBeenSeen;
-(void)dynamicUserInterfaceTraitDidChange;
-(void)gadgetControllerHasAppeared;
-(void)ppt_presentComposeRecipientViewAfterDelay:(CGFloat)arg0 ;
-(void)prefetchDuringScrollingForWidth:(CGFloat)arg0 ;
-(void)prepareCollectionViewItem:(id)arg0 ;
-(void)presentDetailViewAnimated:(BOOL)arg0 ;
-(void)presentDetailViewForSuggestionView:(id)arg0 animated:(BOOL)arg1 ;
-(void)suggestionViewSizeThatFitsDidChange:(id)arg0 ;
-(void)userDidSelectGadget;


@end


#endif