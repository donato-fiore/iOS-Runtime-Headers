// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICLAYOUTMANAGER_H
#define ICLAYOUTMANAGER_H

@class ICBaseLayoutManager, NSMutableDictionary, ICNAEventReporter, NSSet, NSRegularExpression, NSDictionary, ICSelectorDelayer, NSManagedObjectContext;
@protocol ICTrackedAttributeDelegate, ICAttachmentViewDelegate;


#import "ICTextAttachmentLocationCache.h"

@interface ICLayoutManager : ICBaseLayoutManager <ICTrackedAttributeDelegate>



@property (retain, nonatomic) NSMutableDictionary *activeSupplementalViews; // ivar: _activeSupplementalViews
@property (weak, nonatomic) NSObject<ICAttachmentViewDelegate> *attachmentViewDelegate; // ivar: _attachmentViewDelegate
@property (nonatomic) CGPoint cachedOrigin; // ivar: _cachedOrigin
@property (nonatomic) CGSize cachedTextContainerSize; // ivar: _cachedTextContainerSize
@property (retain, nonatomic) NSMutableDictionary *delayedScrollOutViewDictionary; // ivar: _delayedScrollOutViewDictionary
@property (retain, nonatomic) ICNAEventReporter *eventReporter; // ivar: _eventReporter
@property (retain, nonatomic) NSMutableDictionary *hiddenSupplementalViews; // ivar: _hiddenSupplementalViews
@property (retain, nonatomic) NSSet *hiddenTodosForManualLayout; // ivar: _hiddenTodosForManualLayout
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex; // ivar: _highlightPatternRegex
@property (retain, nonatomic) ICTextAttachmentLocationCache *inlineAttachmentLocationCache; // ivar: _inlineAttachmentLocationCache
@property (nonatomic) BOOL isDraggingChecklistItem; // ivar: _isDraggingChecklistItem
@property (nonatomic) BOOL isRenderingImageForPrint; // ivar: _isRenderingImageForPrint
@property (nonatomic) BOOL isRenderingPreviewForDragAndDrop; // ivar: _isRenderingPreviewForDragAndDrop
@property (nonatomic) BOOL isSettingLinkTextAttributes; // ivar: _isSettingLinkTextAttributes
@property (nonatomic) BOOL isUpdatingForAttachmentViewTypeChange; // ivar: _isUpdatingForAttachmentViewTypeChange
@property (nonatomic) BOOL isZooming; // ivar: _isZooming
@property (nonatomic) CGRect layoutEnsuredBounds; // ivar: _layoutEnsuredBounds
@property (nonatomic) BOOL lineHeightIncludeParagraphSpacing; // ivar: _lineHeightIncludeParagraphSpacing
@property (nonatomic) BOOL needsClearRemovedAttachments; // ivar: _needsClearRemovedAttachments
@property (nonatomic) BOOL shouldAdjustTodoButtonFramesForPrinting; // ivar: _shouldAdjustTodoButtonFramesForPrinting
@property (nonatomic) BOOL shouldIgnoreCachedOriginUpdates; // ivar: _shouldIgnoreCachedOriginUpdates
@property (nonatomic) BOOL shouldManuallyRenderSeparateSubviews; // ivar: _shouldManuallyRenderSeparateSubviews
@property (retain, nonatomic) NSMutableDictionary *supplementalViewControllers; // ivar: _supplementalViewControllers
@property (retain, nonatomic) NSMutableDictionary *supplementalViewProviders; // ivar: _supplementalViewProviders
@property (retain, nonatomic) NSMutableDictionary *todoButtonsByTrackingUUID; // ivar: _todoButtonsByTrackingUUID
@property (copy, nonatomic) NSDictionary *trackedToDoParagraphs; // ivar: _trackedToDoParagraphs
@property (retain, nonatomic) ICSelectorDelayer *updateHiddenViewsSelectorDelayer; // ivar: _updateHiddenViewsSelectorDelayer
@property (retain, nonatomic) NSManagedObjectContext *workerContext; // ivar: _workerContext


-(BOOL)selectedRangesIntersectWithRange:(struct _NSRange )arg0 ;
-(BOOL)unhideSupplementalView:(id)arg0 forIdentifier:(id)arg1 ;
-(NSUInteger)lineCountForCharacterRange:(struct _NSRange )arg0 ;
-(id)drawTodoViewForListRange:(struct _NSRange )arg0 paragraphStyle:(id)arg1 checkmarkHighlightValue:(id)arg2 atPoint:(struct CGPoint )arg3 ;
-(id)glyphIndexesForMatchesInTextStorage:(id)arg0 regex:(id)arg1 glyphRange:(struct _NSRange )arg2 ;
-(id)icTextView;
-(id)icaxTodoButtonForParagraphStyle:(id)arg0 ;
-(id)init;
-(id)initForTemporaryProcessing:(BOOL)arg0 ;
-(id)linkAttributesForLink:(id)arg0 forCharacterAtIndex:(NSUInteger)arg1 ;
-(id)paragraphStyleForCharacterIndex:(NSUInteger)arg0 ;
-(id)supplementalViewForIdentifier:(id)arg0 allowHiddenViews:(BOOL)arg1 ;
-(id)textContainerForGlyphAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)todoButtonForTrackedParagraphIfExists:(id)arg0 ;
-(id)todoButtonsForCharacterRange:(struct _NSRange )arg0 ;
-(id)trackedTodoParagraphAtIndexIfExists:(NSUInteger)arg0 ;
-(id)viewControllerForTextAttachment:(id)arg0 ;
-(id)viewControllerForTextAttachment:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)viewControllerForTextAttachmentNoCreate:(id)arg0 ;
-(id)viewForBaseTextAttachmentNoCreate:(id)arg0 ;
-(id)viewForTextAttachment:(id)arg0 ;
-(id)viewForTextAttachment:(id)arg0 initialCharacterIndex:(NSUInteger)arg1 ;
-(id)viewForTextAttachmentNoCreate:(id)arg0 ;
-(id)viewProviderForTextAttachment:(id)arg0 parentView:(id)arg1 characterIndex:(NSUInteger)arg2 ;
-(struct CGRect )boundingRectForGlyphRange:(struct _NSRange )arg0 inTextContainer:(id)arg1 ;
-(struct CGRect )lineFragmentRectForGlyphAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(struct CGRect )lineRectForRange:(struct _NSRange )arg0 ;
-(struct CGRect )usedLineRectForRange:(struct _NSRange )arg0 ;
-(struct _NSRange )rangeForAttachment:(id)arg0 withTextAttachment:(*id)arg1 ;
-(struct _NSRange )rangeForBaseAttachment:(id)arg0 withTextAttachment:(*id)arg1 ;
-(void)_clearRemovedAttachments;
-(void)attachmentDidLoad:(id)arg0 ;
-(void)attachmentInlineDrawingMergeableDataDidChange:(id)arg0 ;
-(void)cleanUpAfterScreenshot;
-(void)cleanupStaleTodoButtons;
-(void)cleanupStaleTodoButtonsAndUpdateSupplementalViewsForDictionary:(id)arg0 ;
-(void)clearAllSupplementalViews;
-(void)clearAllTodoSupplementalViews;
-(void)clearAllTodos;
-(void)clearLayoutEnsuredBounds;
-(void)clearRemovedAttachmentsIfNeeded;
-(void)clearSupplementalViewForIdentifier:(id)arg0 ;
-(void)clearViewForTextAttachment:(id)arg0 ;
-(void)clearViewsForAllTextAttachmentsThatSupportThumbnailMode;
-(void)contentSizeCategoryDidChange;
-(void)dealloc;
-(void)didAddViewForTextAttachment:(id)arg0 ;
-(void)didPressTodoButton:(id)arg0 ;
-(void)drawBackgroundForGlyphRange:(struct _NSRange )arg0 atPoint:(struct CGPoint )arg1 ;
-(void)drawGlyphsForGlyphRange:(struct _NSRange )arg0 atPoint:(struct CGPoint )arg1 ;
-(void)drawGlyphsForGlyphRange:(struct _NSRange )arg0 atPoint:(struct CGPoint )arg1 updateAttachments:(BOOL)arg2 ;
-(void)drawSearchHighlightRectsIndexes:(id)arg0 inGlyphRange:(struct _NSRange )arg1 offset:(struct CGPoint )arg2 ;
-(void)ensureLayoutForSurroundingPages;
-(void)ensureLayoutForTextContainer:(id)arg0 ;
-(void)ensureViewIsAddedForAttachment:(id)arg0 inCharacterRange:(struct _NSRange )arg1 ;
-(void)enumerateAttachmentViewsInRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;
-(void)fillBackgroundRectArray:(struct CGRect *)arg0 count:(NSUInteger)arg1 forCharacterRange:(struct _NSRange )arg2 color:(id)arg3 ;
-(void)filterAttachmentsInTextStorage:(id)arg0 range:(struct _NSRange )arg1 targetAttachment:(id)arg2 ;
-(void)handleTodoButtonPress:(id)arg0 ;
-(void)hideSupplementalView:(id)arg0 forIdentifier:(id)arg1 ;
-(void)hideVisibleTodoButtons;
-(void)icReplaceTextStorage:(id)arg0 ;
-(void)invalidateLayoutAfterAttachmentViewTypeChange;
-(void)invalidateLayoutAfterAttachmentViewTypeChangeIfNecessary;
-(void)invalidateLayoutForAttachment:(id)arg0 ;
-(void)invalidateLayoutForCharacterRange:(struct _NSRange )arg0 actualCharacterRange:(struct _NSRange *)arg1 ;
-(void)layoutViewForInlineTextAttachment:(id)arg0 atCharacterIndex:(NSUInteger)arg1 ;
-(void)manuallyRenderSubviewsForCharacterRange:(struct _NSRange )arg0 ;
-(void)mediaDidLoad:(id)arg0 ;
-(void)prepareForScreenshotWithVisibleRange:(struct _NSRange )arg0 ;
-(void)processEditingForTextStorage:(id)arg0 edited:(NSUInteger)arg1 range:(struct _NSRange )arg2 changeInLength:(NSInteger)arg3 invalidatedRange:(struct _NSRange )arg4 ;
-(void)receivedMemoryWarning:(id)arg0 ;
-(void)removeClearingControllerForView:(id)arg0 ;
-(void)removeClearingControllerForView:(id)arg0 viewIdentifier:(id)arg1 ;
-(void)textContainerChangedGeometry:(id)arg0 ;
-(void)textController:(id)arg0 addedTrackedAttribute:(id)arg1 ;
-(void)textController:(id)arg0 removedTrackedAttribute:(id)arg1 ;
-(void)textController:(id)arg0 updatedTrackedAttribute:(id)arg1 ;
-(void)textStorageDidEndEditingNotification:(id)arg0 ;
-(void)unHideVisibleTodoButtons;
-(void)updateHiddenSupplementalViews;
-(void)updateInlineDrawingViews;
-(void)updateSubviewsForCharacterRange:(struct _NSRange )arg0 ;
-(void)updateSubviewsForCharacterRange:(struct _NSRange )arg0 atPoint:(struct CGPoint )arg1 ;
-(void)updateVisibleSupplementalViews;
-(void)willPlaceView:(id)arg0 forTextAttachment:(id)arg1 ;
-(void)zoomFactorOrInsetsDidChange;


@end


#endif