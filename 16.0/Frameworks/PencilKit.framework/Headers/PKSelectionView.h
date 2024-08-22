// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSELECTIONVIEW_H
#define PKSELECTIONVIEW_H

@class UIDragPreview, NSString, UITapGestureRecognizer, UILongPressGestureRecognizer, UIDragInteraction;
@protocol UIDragInteractionDelegate_Private, UIGestureRecognizerDelegate, UIContextMenuInteractionDelegate;


#import "PKAdornmentView.h"

@interface PKSelectionView : PKAdornmentView <UIDragInteractionDelegate_Private, UIGestureRecognizerDelegate, UIContextMenuInteractionDelegate>

 {
    UIDragPreview *_previewProvider;
    CGRect _originalStrokeFrame;
    CGPoint _initialDragPosition;
    CGPoint _currentScrollOffset;
    CGFloat _initialRotation;
    CGFloat _rotation;
    CGFloat _scale;
    CGPoint _originalTranslation;
    CGFloat _startRotation;
    CGFloat _startScale;
    BOOL _hasTranscription;
    BOOL _displayingContextMenu;
    id *_finishDragToAttachmentBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UITapGestureRecognizer *doubleTapGR; // ivar: _doubleTapGR
@property (readonly, nonatomic) UILongPressGestureRecognizer *dragGR; // ivar: _dragGR
@property (readonly, nonatomic) UIDragInteraction *dragInteraction; // ivar: _dragInteraction
@property (readonly, nonatomic) UITapGestureRecognizer *editMenuGR; // ivar: _editMenuGR
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDragging; // ivar: _isDragging
@property (readonly, nonatomic) CGPoint offsetInTouchView; // ivar: _offsetInTouchView
@property (nonatomic) CGAffineTransform selectionDrawingTransform; // ivar: _selectionDrawingTransform
@property (nonatomic) NSInteger selectionType; // ivar: _selectionType
@property (readonly) Class superclass;
@property (nonatomic) CGAffineTransform userTransform; // ivar: _userTransform
@property (nonatomic) BOOL wantsDragPlatter; // ivar: _wantsDragPlatter


-(BOOL)_exactlyOneExternalElementSelected;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canConvertToShapeWithAction:(SEL)arg0 withSender:(id)arg1 handled:(*BOOL)arg2 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 forInputType:(NSInteger)arg1 ;
-(BOOL)dragInteraction:(id)arg0 prefersFullSizePreviewsForSession:(id)arg1 ;
-(BOOL)lassoContainsPoint:(struct CGPoint )arg0 ;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(NSInteger)editingInteractionConfiguration;
-(id)_accessibilityUserTestingChildren;
-(id)_currentAttachment;
-(id)_selectionViewGestures;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 strokeSelection:(id)arg1 selectionController:(id)arg2 selectionType:(NSInteger)arg3 ;
-(id)keyCommands;
-(id)shapeMenuActions;
-(id)shapeSupportCache;
-(id)targetForAction:(SEL)arg0 withSender:(id)arg1 ;
-(struct CGRect )editMenuTargetRect;
-(void)_cleanupDragState;
-(void)_clearSelection:(id)arg0 ;
-(void)_commitDragToAttachment;
-(void)_didAddNewAttachment;
-(void)_dragWillBegin;
-(void)_findTranscriptionWithCompletion:(id)arg0 ;
-(void)_resetDragState;
-(void)_setupWindowNotificationsForScene:(id)arg0 ;
-(void)_updateTransform;
-(void)animateViewToOriginalPosition;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)convertToShapes:(id)arg0 ;
-(void)copy:(id)arg0 ;
-(void)copyTranscription:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)delete:(id)arg0 ;
-(void)didBeginDraggingSelection;
-(void)didDoubleTap;
-(void)didEndGestureWithTranslation:(struct CGPoint )arg0 transform:(struct CGAffineTransform )arg1 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 willEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)dragSelection:(id)arg0 ;
-(void)duplicate:(id)arg0 ;
-(void)generateStrokeImageForPasteAndDND;
-(void)insertSpace:(id)arg0 ;
-(void)makeViewAliveAtLocation:(struct CGPoint )arg0 ;
-(void)paste:(id)arg0 ;
-(void)rotateSelection:(id)arg0 ;
-(void)scaleSelection:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)straighten:(id)arg0 ;
-(void)toggleEditMenu;
-(void)translate:(id)arg0 ;
-(void)updateLocationForDrop:(struct CGPoint )arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif