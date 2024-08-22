// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OFUICOLLECTIONFLOWVIEW_H
#define OFUICOLLECTIONFLOWVIEW_H

@class UICollectionView, NSMutableArray, NSString, NSIndexPath;
@protocol OFUIWindowDraggingDestination, OFUIWindowDraggingAutoscroll, OFUICollectionFlowViewDragging;



@interface OFUICollectionFlowView : UICollectionView <OFUIWindowDraggingDestination, OFUIWindowDraggingAutoscroll>

 {
    NSMutableArray *_draggingPasteboardTypes;
    BOOL _isDragging;
    BOOL _isAnimating;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSObject<OFUICollectionFlowViewDragging> *draggingDelegate; // ivar: _draggingDelegate
@property (retain, nonatomic) NSIndexPath *draggingEmptyIndexPath; // ivar: _draggingEmptyIndexPath
@property (retain, nonatomic) NSIndexPath *draggingSelectionIndexPath; // ivar: _draggingSelectionIndexPath
@property (readonly) NSUInteger hash;
@property (nonatomic) float mergeRectInset; // ivar: _mergeRectInset
@property (readonly) Class superclass;


-(BOOL)_isFrameEntirelyVisible:(struct CGRect )arg0 ;
-(BOOL)canAutoscroll;
-(BOOL)isFrameVisible:(struct CGRect )arg0 ;
-(BOOL)performDragOperation:(id)arg0 ;
-(BOOL)prepareForDragOperation:(id)arg0 ;
-(NSUInteger)draggingDestinationEntered:(id)arg0 ;
-(NSUInteger)draggingDestinationUpdated:(id)arg0 ;
-(float)_autoscrollDistanceForProximityToEdge:(float)arg0 ;
-(float)autoscrollDistance:(struct CGRect )arg0 ;
-(id)draggingPasteboardTypes;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewFlowLayout:(id)arg1 ;
-(struct CGRect )draggingDestination:(id)arg0 originalFrameForItem:(id)arg1 ;
-(void)_cleanupDragging:(id)arg0 ;
-(void)_prepareDragging:(id)arg0 ;
-(void)autoscroll:(float)arg0 ;
-(void)concludeDragOperation:(id)arg0 ;
-(void)dealloc;
-(void)draggingDestinationEnded:(id)arg0 cancelled:(BOOL)arg1 ;
-(void)draggingDestinationExited:(id)arg0 ;
-(void)draggingDestinationWillEnd:(id)arg0 cancelled:(BOOL)arg1 ;
-(void)registerDraggingPasteboardType:(id)arg0 ;
-(void)unregisterAllDraggingPasteboardType;


@end


#endif