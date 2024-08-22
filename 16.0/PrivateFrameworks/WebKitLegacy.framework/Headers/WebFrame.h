// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBFRAME_H
#define WEBFRAME_H

@class NSArray, JSContext, NSString, WebScriptObject;

#import <Foundation/Foundation.h>

#import "WebFramePrivate.h"
#import "DOMDocument.h"
#import "WebDataSource.h"
#import "DOMHTMLElement.h"
#import "WebFrameView.h"
#import "WebFrame.h"
#import "WebView.h"

@interface WebFrame : NSObject {
    WebFramePrivate *_private;
}


@property (readonly, nonatomic) DOMDocument *DOMDocument;
@property (nonatomic) *CGColor caretColor;
@property (readonly, copy, nonatomic) NSArray *childFrames;
@property (readonly, nonatomic) WebDataSource *dataSource;
@property (readonly, nonatomic) DOMHTMLElement *frameElement;
@property (readonly, nonatomic) WebFrameView *frameView;
@property (readonly, nonatomic) *OpaqueJSContext globalContext;
@property (readonly, nonatomic) BOOL hasRichlyEditableDragCaret;
@property (readonly, nonatomic) JSContext *javaScriptContext;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) WebFrame *parentFrame;
@property (readonly, nonatomic) WebDataSource *provisionalDataSource;
@property (readonly, nonatomic) WebView *webView;
@property (readonly, nonatomic) WebScriptObject *windowObject;


+(id)stringWithData:(id)arg0 textEncodingName:(id)arg1 ;
+(struct Ref<WebCore::Frame, WTF::RawPtrTraits<WebCore::Frame>> )_createFrameWithPage:(*void)arg0 frameName:(*void)arg1 frameView:(id)arg2 ownerElement:(*void)arg3 ;
+(struct Ref<WebCore::Frame, WTF::RawPtrTraits<WebCore::Frame>> )_createSubframeWithOwnerElement:(*void)arg0 frameName:(*void)arg1 frameView:(id)arg2 ;
+(void)_createMainFrameWithPage:(*void)arg0 frameName:(*void)arg1 frameView:(id)arg2 ;
+(void)_createMainFrameWithSimpleHTMLDocumentWithPage:(*void)arg0 frameView:(id)arg1 style:(id)arg2 ;
-(*void)coreFrame;
-(BOOL)_allowsFollowingLink:(id)arg0 ;
-(BOOL)_canProvideDocumentSource;
-(BOOL)_canSaveAsWebArchive;
-(BOOL)_firstLayoutDone;
-(BOOL)_getVisibleRect:(struct CGRect *)arg0 ;
-(BOOL)_hasSelection;
-(BOOL)_isCommitting;
-(BOOL)_isDescendantOfFrame:(id)arg0 ;
-(BOOL)_isDisplayingStandaloneImage;
-(BOOL)_isFrameSet;
-(BOOL)_isIncludedInWebKitStatistics;
-(BOOL)_isVisuallyNonEmpty;
-(BOOL)_loadsSynchronously;
-(BOOL)_needsLayout;
-(BOOL)enhancedAccessibilityEnabled;
-(BOOL)focusedNodeHasContent;
-(BOOL)hasEditableSelection;
-(BOOL)hasRichlyEditableSelection;
-(BOOL)hasSelection;
-(BOOL)isTelephoneNumberParsingAllowed;
-(BOOL)isTelephoneNumberParsingEnabled;
-(BOOL)needsLayout;
-(BOOL)renderedCharactersExceed:(NSUInteger)arg0 ;
-(BOOL)selectionAtDocumentStart;
-(BOOL)selectionAtSentenceStart;
-(BOOL)selectionAtWordStart;
-(BOOL)setRangedSelectionExtentPoint:(struct CGPoint )arg0 baseIsStart:(BOOL)arg1 allowFlipping:(BOOL)arg2 ;
-(BOOL)setSelectionWithBasePoint:(struct CGPoint )arg0 extentPoint:(struct CGPoint )arg1 baseIsStart:(BOOL)arg2 ;
-(BOOL)setSelectionWithBasePoint:(struct CGPoint )arg0 extentPoint:(struct CGPoint )arg1 baseIsStart:(BOOL)arg2 allowFlipping:(BOOL)arg3 ;
-(BOOL)spaceFollowsWordInRange:(id)arg0 ;
-(NSUInteger)selectionAffinity;
-(id)_cacheabilityDictionary;
-(id)_characterRangeAtPoint:(struct CGPoint )arg0 ;
-(id)_computePageRectsWithPrintScaleFactor:(float)arg0 pageSize:(struct CGSize )arg1 ;
-(id)_convertNSRangeToDOMRange:(struct _NSRange )arg0 ;
-(id)_documentFragmentForImageData:(id)arg0 withRelativeURLPart:(id)arg1 andMIMEType:(id)arg2 ;
-(id)_documentFragmentForText:(id)arg0 ;
-(id)_documentFragmentForWebArchive:(id)arg0 ;
-(id)_documentFragmentWithMarkupString:(id)arg0 baseURLString:(id)arg1 ;
-(id)_documentFragmentWithNodesAsParagraphs:(id)arg0 ;
-(id)_findFrameWithSelection;
-(id)_initWithWebFrameView:(id)arg0 webView:(id)arg1 ;
-(id)_internalLoadDelegate;
-(id)_javaScriptContextForScriptWorld:(id)arg0 ;
-(id)_layerTreeAsText;
-(id)_markDOMRange;
-(id)_rectsForRange:(id)arg0 ;
-(id)_selectedString;
-(id)_selectionRangeForFirstPoint:(struct CGPoint )arg0 secondPoint:(struct CGPoint )arg1 ;
-(id)_selectionRangeForPoint:(struct CGPoint )arg0 ;
-(id)_stringByEvaluatingJavaScriptFromString:(id)arg0 ;
-(id)_stringByEvaluatingJavaScriptFromString:(id)arg0 forceUserGesture:(BOOL)arg1 ;
-(id)_stringByEvaluatingJavaScriptFromString:(id)arg0 withGlobalObject:(struct OpaqueJSValue *)arg1 inScriptWorld:(id)arg2 ;
-(id)_stringForRange:(id)arg0 ;
-(id)_typingStyle;
-(id)_unreachableURL;
-(id)_webHTMLDocumentView;
-(id)accessibilityRoot;
-(id)approximateNodeAtViewportLocation:(struct CGPoint *)arg0 ;
-(id)characterRangeAtPoint:(struct CGPoint )arg0 ;
-(id)convertNSRangeToDOMRange:(struct _NSRange )arg0 ;
-(id)deepestNodeAtViewportLocation:(struct CGPoint )arg0 ;
-(id)dictationResultMetadataForRange:(id)arg0 ;
-(id)documentView;
-(id)elementAtPoint:(struct CGPoint )arg0 ;
-(id)elementRangeContainingCaretSelection;
-(id)endPosition;
-(id)findFrameNamed:(id)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 webFrameView:(id)arg1 webView:(id)arg2 ;
-(id)interpretationsForCurrentRoot;
-(id)markedTextDOMRange;
-(id)rangeByExtendingCurrentSelection:(int)arg0 ;
-(id)rangeByMovingCurrentSelection:(int)arg0 ;
-(id)renderTreeAsExternalRepresentationForPrinting;
-(id)renderTreeAsExternalRepresentationWithOptions:(NSUInteger)arg0 ;
-(id)scrollableNodeAtViewportLocation:(struct CGPoint )arg0 ;
-(id)selectedDOMRange;
-(id)selectionRects;
-(id)selectionRectsForCoreRange:(*void)arg0 ;
-(id)selectionRectsForRange:(id)arg0 ;
-(id)startPosition;
-(id)stringByEvaluatingJavaScriptFromString:(id)arg0 forceUserGesture:(BOOL)arg1 ;
-(id)stringForRange:(id)arg0 ;
-(id)webVisiblePositionForPoint:(struct CGPoint )arg0 ;
-(id)wordAtPoint:(struct CGPoint )arg0 ;
-(id)wordInRange:(id)arg0 ;
-(id)wordRangeContainingCaretSelection;
-(id)wordsInCurrentParagraph;
-(int)_loadType;
-(int)innerLineHeight:(id)arg0 ;
-(int)layoutCount;
-(int)numberOfPagesWithPageWidth:(float)arg0 pageHeight:(float)arg1 ;
-(int)preferredHeight;
-(int)selectionBaseWritingDirection;
-(int)selectionState;
-(int)wordOffsetInRange:(id)arg0 ;
-(struct CGColor *)_bodyBackgroundColor;
-(struct CGRect )_caretRectAtPosition:(*void)arg0 affinity:(NSUInteger)arg1 ;
-(struct CGRect )_firstRectForDOMRange:(id)arg0 ;
-(struct CGRect )caretRect;
-(struct CGRect )caretRectAtNode:(id)arg0 offset:(int)arg1 affinity:(NSUInteger)arg2 ;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(struct CGRect )closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint )arg0 ;
-(struct CGRect )elementRectAtPoint:(struct CGPoint )arg0 ;
-(struct CGRect )firstRectForDOMRange:(id)arg0 ;
-(struct CGRect )rectForScrollToVisible;
-(struct CGRect )renderRectForPoint:(struct CGPoint )arg0 isReplaced:(*BOOL)arg1 fontSize:(*float)arg2 ;
-(struct CGSize )renderedSizeOfNode:(id)arg0 constrainedToWidth:(float)arg1 ;
-(struct OpaqueJSContext *)_globalContextForScriptWorld:(id)arg0 ;
-(struct OpaqueJSValue *)jsWrapperForNode:(id)arg0 inScriptWorld:(id)arg1 ;
-(struct OptionSet<WebCore::PaintBehavior> )_paintBehaviorForDestinationContext:(struct CGContext *)arg0 ;
-(struct VisiblePosition )_visiblePositionForPoint:(struct CGPoint )arg0 ;
-(struct VisiblePosition )closestWordBoundary:(struct VisiblePosition )arg0 ;
-(struct VisiblePosition )visiblePositionForPoint:(struct CGPoint )arg0 ;
-(struct _NSRange )_convertDOMRangeToNSRange:(id)arg0 ;
-(struct _NSRange )_convertToNSRange:(*void)arg0 ;
-(struct _NSRange )_selectedNSRange;
-(struct _NSRange )convertDOMRangeToNSRange:(id)arg0 ;
-(struct _NSRange )selectedNSRange;
-(struct __CTFont *)fontForSelection:(*BOOL)arg0 ;
-(struct optional<WebCore::SimpleRange> )_convertToDOMRange:(struct _NSRange )arg0 ;
-(struct optional<WebCore::SimpleRange> )_convertToDOMRange:(struct _NSRange )arg0 rangeIsRelativeTo:(unsigned char)arg1 ;
-(unsigned char)_selectionGranularity;
-(unsigned int)_pendingFrameUnloadEventCount;
-(unsigned short)characterAfterCaretSelection;
-(unsigned short)characterBeforeCaretSelection;
-(unsigned short)characterInRelationToCaretSelection:(int)arg0 ;
-(void)_attachScriptDebugger;
-(void)_clearCoreFrame;
-(void)_clearOpener;
-(void)_clearSelection;
-(void)_clearSelectionInOtherFrames;
-(void)_commitData:(id)arg0 ;
-(void)_detachScriptDebugger;
-(void)_dispatchDidReceiveTitle:(id)arg0 ;
-(void)_drawRect:(struct CGRect )arg0 contentsOnly:(BOOL)arg1 ;
-(void)_handleKeyEvent:(id)arg0 ;
-(void)_insertParagraphSeparatorInQuotedContent;
-(void)_loadData:(id)arg0 MIMEType:(id)arg1 textEncodingName:(id)arg2 baseURL:(id)arg3 unreachableURL:(id)arg4 ;
-(void)_loadHTMLString:(id)arg0 baseURL:(id)arg1 unreachableURL:(id)arg2 ;
-(void)_replaceSelectionWithFragment:(id)arg0 selectReplacement:(BOOL)arg1 smartReplace:(BOOL)arg2 matchStyle:(BOOL)arg3 ;
-(void)_replaceSelectionWithMarkupString:(id)arg0 baseURLString:(id)arg1 selectReplacement:(BOOL)arg2 smartReplace:(BOOL)arg3 ;
-(void)_replaceSelectionWithNode:(id)arg0 selectReplacement:(BOOL)arg1 smartReplace:(BOOL)arg2 matchStyle:(BOOL)arg3 ;
-(void)_replaceSelectionWithText:(id)arg0 selectReplacement:(BOOL)arg1 smartReplace:(BOOL)arg2 ;
-(void)_replaceSelectionWithText:(id)arg0 selectReplacement:(BOOL)arg1 smartReplace:(BOOL)arg2 matchStyle:(BOOL)arg3 ;
-(void)_replaceSelectionWithWebArchive:(id)arg0 selectReplacement:(BOOL)arg1 smartReplace:(BOOL)arg2 ;
-(void)_restoreViewState;
-(void)_saveViewState;
-(void)_scrollDOMRangeToVisible:(id)arg0 ;
-(void)_scrollDOMRangeToVisible:(id)arg0 withInset:(CGFloat)arg1 ;
-(void)_selectAll;
-(void)_selectNSRange:(struct _NSRange )arg0 ;
-(void)_setInternalLoadDelegate:(id)arg0 ;
-(void)_setIsCommitting:(BOOL)arg0 ;
-(void)_setLoadsSynchronously:(BOOL)arg0 ;
-(void)_setProhibitsScrolling:(BOOL)arg0 ;
-(void)_setSelectionFromNone;
-(void)_setShouldCreateRenderers:(BOOL)arg0 ;
-(void)_setTextAutosizingWidth:(CGFloat)arg0 ;
-(void)_setTypingStyle:(id)arg0 withUndoAction:(unsigned char)arg1 ;
-(void)_setVisibleSize:(struct CGSize )arg0 ;
-(void)_unmarkAllBadGrammar;
-(void)_unmarkAllMisspellings;
-(void)_updateBackgroundAndUpdatesWhileOffscreen;
-(void)_userScrolled;
-(void)aggressivelyExpandSelectionToWordContainingCaretSelection;
-(void)clearRangedSelectionInitialExtent;
-(void)clearSelection;
-(void)collapseSelection;
-(void)confirmMarkedText:(id)arg0 ;
-(void)dealloc;
-(void)deviceOrientationChanged;
-(void)ensureRangedSelectionContainsInitialStartPoint:(struct CGPoint )arg0 initialEndPoint:(struct CGPoint )arg1 ;
-(void)expandSelectionToElementContainingCaretSelection;
-(void)expandSelectionToSentence;
-(void)expandSelectionToStartOfWordContainingCaretSelection;
-(void)expandSelectionToWordContainingCaretSelection;
-(void)extendSelection:(BOOL)arg0 ;
-(void)forceLayoutAdjustingViewSize:(BOOL)arg0 ;
-(void)getDictationResultRanges:(*id)arg0 andMetadatas:(*id)arg1 ;
-(void)loadAlternateHTMLString:(id)arg0 baseURL:(id)arg1 forUnreachableURL:(id)arg2 ;
-(void)loadArchive:(id)arg0 ;
-(void)loadData:(id)arg0 MIMEType:(id)arg1 textEncodingName:(id)arg2 baseURL:(id)arg3 ;
-(void)loadHTMLString:(id)arg0 baseURL:(id)arg1 ;
-(void)loadRequest:(id)arg0 ;
-(void)moveSelectionToEnd;
-(void)moveSelectionToPoint:(struct CGPoint )arg0 ;
-(void)moveSelectionToStart;
-(void)prepareForPause;
-(void)printToCGContext:(struct CGContext *)arg0 pageWidth:(float)arg1 pageHeight:(float)arg2 ;
-(void)recursiveSetUpdateAppearanceEnabled:(BOOL)arg0 ;
-(void)reload;
-(void)reloadFromOrigin;
-(void)removeUnchangeableStyles;
-(void)resetSelection;
-(void)resetTextAutosizingBeforeLayout;
-(void)resumeFromPause;
-(void)revealSelectionAtExtent:(BOOL)arg0 ;
-(void)selectNSRange:(struct _NSRange )arg0 ;
-(void)selectNSRange:(struct _NSRange )arg0 onElement:(id)arg1 ;
-(void)selectWithoutClosingTypingNSRange:(struct _NSRange )arg0 ;
-(void)sendScrollEvent;
-(void)setAccessibleName:(id)arg0 ;
-(void)setBaseWritingDirection:(int)arg0 ;
-(void)setDictationPhrases:(id)arg0 metadata:(id)arg1 asChildOfElement:(id)arg2 ;
-(void)setEnhancedAccessibility:(BOOL)arg0 ;
-(void)setIsActive:(BOOL)arg0 ;
-(void)setMarkedText:(id)arg0 forCandidates:(BOOL)arg1 ;
-(void)setMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)setNeedsLayout;
-(void)setPluginsPaused:(BOOL)arg0 ;
-(void)setRangedSelectionBaseToCurrentSelection;
-(void)setRangedSelectionBaseToCurrentSelectionEnd;
-(void)setRangedSelectionBaseToCurrentSelectionStart;
-(void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
-(void)setRangedSelectionInitialExtentToCurrentSelectionStart;
-(void)setRangedSelectionWithExtentPoint:(struct CGPoint )arg0 ;
-(void)setSelectedDOMRange:(id)arg0 affinity:(NSUInteger)arg1 closeTyping:(BOOL)arg2 ;
-(void)setSelectedDOMRange:(id)arg0 affinity:(NSUInteger)arg1 closeTyping:(BOOL)arg2 userTriggered:(BOOL)arg3 ;
-(void)setSelectionChangeCallbacksDisabled:(BOOL)arg0 ;
-(void)setSelectionGranularity:(int)arg0 ;
-(void)setSelectionWithFirstPoint:(struct CGPoint )arg0 secondPoint:(struct CGPoint )arg1 ;
-(void)setText:(id)arg0 asChildOfElement:(id)arg1 ;
-(void)setTimeoutsPaused:(BOOL)arg0 ;
-(void)smartExtendRangedSelection:(int)arg0 ;
-(void)stopLoading;
-(void)toggleBaseWritingDirection;
-(void)updateLayout;


@end


#endif