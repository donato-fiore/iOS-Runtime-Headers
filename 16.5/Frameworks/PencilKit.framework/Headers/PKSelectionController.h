// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSELECTIONCONTROLLER_H
#define PKSELECTIONCONTROLLER_H

@class UIDropInteraction, NSString;
@protocol UIDropInteractionDelegate_Private, PKSelectionRenderingDelegate, PKSelectionObserving, PKDrawingUUID, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKTranscriptionController.h"
#import "PKTiledView.h"
#import "PKStrokeSelection.h"
#import "PKSpaceInsertionController.h"
#import "PKSelectionView.h"
#import "PKSelectionGestureView.h"

@interface PKSelectionController : NSObject <UIDropInteractionDelegate_Private, PKSelectionRenderingDelegate, PKSelectionObserving>

 {
    CGPoint _dropPosition;
    id<PKDrawingUUID> *_previousDrawingUUIDForSelection;
    int _selectionViewCount;
    NSInteger _currentIntersectionAlgorithm;
    PKTranscriptionController *_transcriptionController;
    NSObject<OS_dispatch_queue> *_intersectionQueue;
    NSObject<OS_dispatch_queue> *_selectionHullQueue;
    id *_intersectStrokesBetweenLollipopBlock;
    UIDropInteraction *_dropInteraction;
    BOOL _isChangingColor;
    id *_deferredChangingColorBlock;
    BOOL _isClearingSelection;
    BOOL _shouldClampInputPoints;
    BOOL _insertSpaceEnabled;
    BOOL _isCurrentlyAddingSpace;
    PKTiledView *_tiledView;
    PKStrokeSelection *_currentStrokeSelection;
    PKSpaceInsertionController *_spaceInsertionController;
    PKSelectionView *_selectionView;
    PKSelectionGestureView *_selectionGestureView;
    CGAffineTransform _selectionTransform;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *selectionHullQueue;
@property (readonly) Class superclass;


-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(BOOL)isRTL;
-(CGFloat)scaleForDrawing:(id)arg0 ;
-(NSInteger)_dropInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(NSInteger)currentIntersectionAlgorithm;
-(id)_firstStrokesInStrokes:(id)arg0 ;
-(id)_lastStrokesInStrokes:(id)arg0 ;
-(id)dropInteraction:(id)arg0 previewForDroppingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(struct CGAffineTransform )transformFromStrokeSpaceToViewInDrawing:(id)arg0 ;
-(struct CGColor *)selectionColor;
-(struct CGRect )attachmentBoundsForDrawing:(id)arg0 ;
-(void)_addItemsToPasteboard:(id)arg0 ;
-(void)dealloc;
-(void)didBeginModifyDrawing;
-(void)didBeginSpaceInsertionWithLassoStroke:(id)arg0 drawing:(id)arg1 addDefaultSpace:(BOOL)arg2 strokesAbove:(id)arg3 strokesBelow:(id)arg4 externalElements:(id)arg5 ;
-(void)didEndModifyDrawing;
-(void)didEndScroll;
-(void)didSelect:(id)arg0 lassoStroke:(id)arg1 transform:(struct CGAffineTransform )arg2 drawing:(id)arg3 ;
-(void)didSelect:(id)arg0 lassoStroke:(id)arg1 transform:(struct CGAffineTransform )arg2 drawing:(id)arg3 selectionType:(NSInteger)arg4 completion:(id)arg5 ;
-(void)didSelectStrokesNotification:(id)arg0 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnter:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidExit:(id)arg1 ;


@end


#endif