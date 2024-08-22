// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXTANGIERCONTROLLER_H
#define SXTANGIERCONTROLLER_H

@class UIView, NSString, TSKDocumentRoot, NSMutableSet, TSWPSelection;
@protocol SXTextTangierInteractiveCanvasControllerDelegate, SXTextTangierInteractiveCanvasControllerDataSource, SXViewportChangeListener, TSDiOSCanvasViewControllerDelegate, SXTextComponentLayoutHosting, SXTextSelecting, SXDOMObjectProviding, SXComponentActionHandler, SXComponentController, SXComponentInteractionManager, SXTangierControllerDelegate, SXTangierDragItemProvider;

#import <Foundation/Foundation.h>

#import "SXTextTangierCanvasViewController.h"
#import "SXTangierRepDirectLayerHostProvider.h"
#import "SXTextTangierInteractiveCanvasController.h"
#import "SXScrollView.h"
#import "SXTangierTextRenderCollector.h"
#import "SXViewport.h"

@interface SXTangierController : NSObject <SXTextTangierInteractiveCanvasControllerDelegate, SXTextTangierInteractiveCanvasControllerDataSource, SXViewportChangeListener, TSDiOSCanvasViewControllerDelegate, SXTextComponentLayoutHosting, SXTextSelecting>



@property (readonly, nonatomic) NSObject<SXDOMObjectProviding> *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (readonly, nonatomic) UIView *aboveRepsHost; // ivar: _aboveRepsHost
@property (readonly, nonatomic) BOOL allowEditMenuToAppear;
@property (readonly, nonatomic) BOOL allowTextEditingToBegin;
@property (readonly, nonatomic) NSObject<SXComponentActionHandler> *componentActionHandler; // ivar: _componentActionHandler
@property (readonly, weak, nonatomic) NSObject<SXComponentController> *componentController; // ivar: _componentController
@property (readonly, weak, nonatomic) NSObject<SXComponentInteractionManager> *componentInteractionManager; // ivar: _componentInteractionManager
@property (readonly, nonatomic) SXTextTangierCanvasViewController *cvc; // ivar: _cvc
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXTangierControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXTangierRepDirectLayerHostProvider *directLayerHostProvider; // ivar: _directLayerHostProvider
@property (nonatomic) BOOL disableClippingForTiles; // ivar: _disableClippingForTiles
@property (readonly, retain, nonatomic) TSKDocumentRoot *documentRoot; // ivar: _documentRoot
@property (readonly, nonatomic) NSObject<SXTangierDragItemProvider> *dragItemProvider; // ivar: _dragItemProvider
@property (nonatomic, getter=isEnclosingCanvasScrolling) BOOL enclosingCanvasScrolling; // ivar: _enclosingCanvasScrolling
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SXTextTangierInteractiveCanvasController *icc; // ivar: _icc
@property (nonatomic) NSUInteger initialSubviewCount; // ivar: _initialSubviewCount
@property (readonly, nonatomic) BOOL interactiveCanvasControllerAllowsHyperlinkInteraction;
@property (readonly, nonatomic) BOOL isCanvasInteractive;
@property (readonly, nonatomic) BOOL isPrintingCanvas;
@property (readonly, nonatomic) UIView *overlayRepsHost; // ivar: _overlayRepsHost
@property (nonatomic) BOOL performedInitialLayoutAndRender; // ivar: _performedInitialLayoutAndRender
@property (readonly, nonatomic) NSMutableSet *presentedTextViews; // ivar: _presentedTextViews
@property (nonatomic) BOOL preventScrollViewDidScrollReentrance; // ivar: _preventScrollViewDidScrollReentrance
@property (nonatomic) BOOL rebuildFlows; // ivar: _rebuildFlows
@property (retain, nonatomic) SXScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) BOOL selectionEnabled;
@property (readonly, nonatomic) BOOL shouldClipToScrollViewBoundsInVisibleBounds;
@property (readonly, nonatomic) BOOL shouldPopKnobsOutsideEnclosingScrollView;
@property (readonly, nonatomic) BOOL shouldResizeCanvasToScrollView;
@property (readonly, nonatomic) BOOL shouldShowInstructionalText;
@property (readonly, nonatomic) BOOL shouldShowTextOverflowGlyphs;
@property (readonly, nonatomic) CGSize sizeOfScrollViewEnclosingCanvas;
@property (readonly, nonatomic) BOOL spellCheckingSupported;
@property (readonly, nonatomic) BOOL spellCheckingSuppressed;
@property (retain, nonatomic) TSWPSelection *storedSelection; // ivar: _storedSelection
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXTangierTextRenderCollector *textRenderCollector; // ivar: _textRenderCollector
@property (readonly, nonatomic) UIView *underRepsHost; // ivar: _underRepsHost
@property (readonly, nonatomic) os_unfair_lock_s unfairLock; // ivar: _unfairLock
@property (retain, nonatomic) SXViewport *viewport; // ivar: _viewport


-(BOOL)interactiveCanvasController:(id)arg0 shouldBeginInteraction:(id)arg1 atPoint:(struct CGPoint )arg2 ;
-(BOOL)interactiveCanvasControllerIsRelatedCanvasScrolling:(id)arg0 ;
-(id)backgroundColorForDragUIPlatter;
-(id)initWithViewport:(id)arg0 scrollView:(id)arg1 componentActionHandler:(id)arg2 dragItemProvider:(id)arg3 componentController:(id)arg4 componentInteractionManager:(id)arg5 DOMObjectProvider:(id)arg6 adIgnorableViewFactory:(id)arg7 ;
-(id)interactiveCanvasController:(id)arg0 delegateConformingToProtocol:(id)arg1 forRep:(id)arg2 ;
-(id)interactiveCanvasController:(id)arg0 dragItemForSmartField:(id)arg1 interaction:(id)arg2 session:(id)arg3 ;
-(id)interactiveCanvasController:(id)arg0 infoForModel:(id)arg1 withSelection:(id)arg2 ;
-(id)layoutDescriptionForComponent:(id)arg0 ;
-(id)scrollPositionForVisibleBounds:(struct CGRect )arg0 canvasWidth:(CGFloat)arg1 ;
-(id)topLevelLayersForInteractiveCanvasController:(id)arg0 ;
-(id)topLevelRepsForInteractiveCanvasController:(id)arg0 ;
-(id)visibleBoundsClipViewForInteractiveCanvasController:(id)arg0 ;
-(struct CGPoint )pointForCharacterAtIndex:(NSUInteger)arg0 inComponentWithIdentifier:(id)arg1 ;
-(struct CGRect )interactiveCanvasController:(id)arg0 expandVisibleBoundsForClippingReps:(struct CGRect )arg1 ;
-(struct CGRect )interactiveCanvasController:(id)arg0 expandVisibleBoundsForTiling:(struct CGRect )arg1 ;
-(struct CGRect )visibleBounds;
-(void)_fixLayoutOffsets;
-(void)clearSelection;
-(void)dealloc;
-(void)didStartPresentingTextView:(id)arg0 ;
-(void)didStopPresentingTextView:(id)arg0 ;
-(void)didTransitionToPresented;
-(void)endSelection;
-(void)interactiveCanvasController:(id)arg0 interactedWithHyperlink:(id)arg1 info:(id)arg2 range:(struct _NSRange )arg3 touchPoint:(struct CGPoint )arg4 touchAndHold:(BOOL)arg5 ;
-(void)interactiveCanvasController:(id)arg0 scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)interactiveCanvasController:(id)arg0 scrollViewWillBeginDragging:(id)arg1 ;
-(void)interactiveCanvasController:(id)arg0 scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint )arg2 targetContentOffset:(struct CGPoint *)arg3 ;
-(void)interactiveCanvasControllerDidLayoutAndRenderOnBackgroundThread:(id)arg0 ;
-(void)interactiveCanvasControllerDidScroll:(id)arg0 ;
-(void)interactiveCanvasControllerDidStopScrolling:(id)arg0 ;
-(void)interactiveCanvasControllerWillStartInteraction:(id)arg0 ;
-(void)setUnscaledCanvasRect:(struct CGRect )arg0 ;
-(void)teardown;
-(void)updateCanvasSize:(struct CGSize )arg0 forComponentViews:(id)arg1 ;
-(void)updateInfosWithBlock:(id)arg0 ;
-(void)updatePresentationState;
-(void)viewport:(id)arg0 appearStateChangedFromState:(NSUInteger)arg1 ;
-(void)willTransitionToPresented;


@end


#endif