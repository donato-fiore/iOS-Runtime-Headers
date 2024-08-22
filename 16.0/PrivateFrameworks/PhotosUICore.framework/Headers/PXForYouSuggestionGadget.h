// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFORYOUSUGGESTIONGADGET_H
#define PXFORYOUSUGGESTIONGADGET_H

@class NSString, UIImage;
@protocol PXDiagnosticsEnvironment, PXGadget, PXForYouSuggestionGadgetDelegate, PXDisplayAsset, PXDisplaySuggestion;

#import <Foundation/Foundation.h>

#import "PXForYouSuggestionGadgetContentView.h"
#import "PXGadgetSpec.h"
#import "PXUIMediaProvider.h"
#import "PXRegionOfInterest.h"

@interface PXForYouSuggestionGadget : NSObject <PXDiagnosticsEnvironment, PXGadget>



@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (nonatomic) BOOL blursDegradedContent; // ivar: _blursDegradedContent
@property (nonatomic) CGSize cachedHeightForWidth; // ivar: _cachedHeightForWidth
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic, getter=isContentHidden) BOOL contentHidden; // ivar: _contentHidden
@property (retain, nonatomic) PXForYouSuggestionGadgetContentView *contentView; // ivar: _contentView
@property (nonatomic) BOOL contentViewVisible; // ivar: _contentViewVisible
@property (readonly, nonatomic) UIImage *currentImage;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXForYouSuggestionGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (retain, nonatomic) NSObject<PXDisplayAsset> *keyAsset; // ivar: _keyAsset
@property (readonly, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) PXRegionOfInterest *regionOfInterestForOneUpTransition;
@property (nonatomic) BOOL shouldShowSyndicationAttributionView; // ivar: _shouldShowSyndicationAttributionView
@property (nonatomic) BOOL shouldSuppressSelectionAnimation; // ivar: _shouldSuppressSelectionAnimation
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSObject<PXDisplaySuggestion> *suggestion; // ivar: _suggestion
@property (nonatomic) unsigned short suggestionType; // ivar: _suggestionType
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) CGRect visibleContentRect; // ivar: _visibleContentRect
@property (readonly, nonatomic) BOOL wantsMultilineTitle;


+(id)fetchQueue;
+(void)preloadResources;
-(id)debugDictionary;
-(id)debugURLsForDiagnostics;
-(id)init;
-(id)initWithSuggestion:(id)arg0 ;
-(id)previewViewControllerAtLocation:(struct CGPoint )arg0 fromSourceView:(id)arg1 ;
-(id)px_diagnosticsItemProvidersForPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)syndicationReplyAction;
-(id)targetPreviewViewForLocation:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)uniqueGadgetIdentifier;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_handleDismiss;
-(void)_markSuggestionAsActive;
-(void)_markSuggestionAsDeclined;
-(void)_updateContentViewMode;
-(void)_updateKeyAsset;
-(void)_updateSyndicationHighlightForContentView:(id)arg0 ;
-(void)commitPreviewViewController:(id)arg0 ;
-(void)contentHasBeenSeen;
-(void)dealloc;
-(void)didDismissPreviewViewController:(id)arg0 committing:(BOOL)arg1 ;
-(void)gadgetControllerHasAppeared;
-(void)userDidSelectGadget;


@end


#endif