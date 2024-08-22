// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXTEXTTANGIERINTERACTIVECANVASCONTROLLER_H
#define SXTEXTTANGIERINTERACTIVECANVASCONTROLLER_H

@class TSWPInteractiveCanvasController, UIScrollView;
@protocol SXTextTangierInteractiveCanvasControllerDataSource;



@interface SXTextTangierInteractiveCanvasController : TSWPInteractiveCanvasController

@property (weak, nonatomic) NSObject<SXTextTangierInteractiveCanvasControllerDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) BOOL forceLayoutAndRenderOnThread; // ivar: _forceLayoutAndRenderOnThread
@property (nonatomic) BOOL isScrolling; // ivar: _isScrolling
@property (nonatomic) BOOL isSelecting; // ivar: _isSelecting
@property (nonatomic) BOOL mightScrollToTop; // ivar: _mightScrollToTop
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) BOOL startedEditing; // ivar: _startedEditing


+(void)createCanvasWithDelegate:(id)arg0 outICC:(*id)arg1 outLayerHost:(*id)arg2 iccClass:(Class)arg3 layerHostClass:(Class)arg4 ;
-(BOOL)p_currentlyScrolling;
-(BOOL)p_shouldLayoutAndRenderOnThreadForcePendingLayout:(BOOL)arg0 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg0 ;
-(id)closestRepToPoint:(struct CGPoint )arg0 forStorage:(id)arg1 ;
-(id)hitRep:(struct CGPoint )arg0 withGesture:(id)arg1 passingTest:(id)arg2 ;
-(id)i_topLevelLayersForTiling;
-(id)topLevelRepsForHitTesting;
-(void)didBeginEditingText;
-(void)endUISession;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidScrollToTop:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setSelection:(id)arg0 onModel:(id)arg1 withFlags:(NSUInteger)arg2 ;
-(void)teardown;


@end


#endif