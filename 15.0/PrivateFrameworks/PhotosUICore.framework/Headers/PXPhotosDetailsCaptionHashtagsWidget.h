// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSDETAILSCAPTIONHASHTAGSWIDGET_H
#define PXPHOTOSDETAILSCAPTIONHASHTAGSWIDGET_H

@class PHAsset, NSString, UIView;
@protocol PXCaptionHashtagsEntryViewDelegate, PXPhotoLibraryUIChangeObserver, PXWidget, PXAnonymousView, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate;

#import <Foundation/Foundation.h>

#import "PXAssetActionManager.h"
#import "_PXUIContainerView.h"
#import "PXTilingController.h"
#import "PXPhotosDetailsContext.h"
#import "PXSectionedSelectionManager.h"
#import "PXWidgetSpec.h"
#import "PXCaptionHashtagsEntryView.h"

@interface PXPhotosDetailsCaptionHashtagsWidget : NSObject <PXCaptionHashtagsEntryViewDelegate, PXPhotoLibraryUIChangeObserver, PXWidget>



@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (retain) PHAsset *asset; // ivar: _asset
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property (readonly, nonatomic) _PXUIContainerView *containerView; // ivar: _containerView
@property (readonly, nonatomic) NSInteger contentLayoutStyle;
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) NSInteger contentViewAnchoringType;
@property (retain, nonatomic) PXPhotosDetailsContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id *deferredAppearingAnimation; // ivar: _deferredAppearingAnimation
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger exitEditChangesSavingMode; // ivar: _exitEditChangesSavingMode
@property (readonly, nonatomic) CGFloat extraSpaceNeededAtContentBottom;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (readonly, nonatomic) BOOL hasLoadedContentData;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInEditMode; // ivar: _isInEditMode
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) CGSize maxVisibleSizeInEditMode; // ivar: _maxVisibleSizeInEditMode
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property (retain, nonatomic) PXWidgetSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (readonly, nonatomic) PXCaptionHashtagsEntryView *textEntryView; // ivar: _textEntryView
@property (readonly, nonatomic) UIView *textViewContainer; // ivar: _textViewContainer
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly, nonatomic) BOOL wantsFocus;
@property (weak, nonatomic) NSObject<PXWidgetDelegate> *widgetDelegate; // ivar: _widgetDelegate
@property (weak, nonatomic) NSObject<PXWidgetEditingDelegate> *widgetEditingDelegate; // ivar: _widgetEditingDelegate
@property (weak, nonatomic) NSObject<PXWidgetInteractionDelegate> *widgetInteractionDelegate;
@property (weak, nonatomic) NSObject<PXWidgetUnlockDelegate> *widgetUnlockDelegate;


-(BOOL)_fadeInEnabled;
-(BOOL)_prefersFloatingiPadInfoPanelLayout;
-(BOOL)canSnapToEdges;
-(BOOL)captionHashtagsEntryViewShouldBeginEditing:(id)arg0 ;
-(BOOL)captionHashtagsEntryViewShouldEndEditing:(id)arg0 ;
-(CGFloat)currentContentHeight;
-(CGFloat)preferredContentHeightForWidth:(CGFloat)arg0 ;
-(id)init;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(struct CGRect )_textEntryViewFrameForSize:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_contentInsets;
-(void)_addSeparatorView;
-(void)_applySpec;
-(void)_configureFadeInAnimation;
-(void)_configureTextViewVisibility:(BOOL)arg0 ;
-(void)_logCPAnalyticsEventsForCommittedCaption:(id)arg0 numOfHashtags:(NSUInteger)arg1 ;
-(void)_removeSeparatorView;
-(void)captionHashtagsEntryViewDidBeginEditing:(id)arg0 ;
-(void)captionHashtagsEntryViewDidEndEditing:(id)arg0 ;
-(void)captionHashtagsEntryViewPreferredHeightDidChange:(id)arg0 ;
-(void)captionHashtagsEntryViewRequestFocus:(id)arg0 ;
-(void)captionHashtagsEntryViewWillBeginEditing:(id)arg0 ;
-(void)contentViewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)loadContentData;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;
-(void)requestExitEditWithChangesSavingMode:(NSInteger)arg0 ;
-(void)unloadContentData;


@end


#endif