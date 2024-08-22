// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOSGRIDCELL_H
#define PUPHOTOSGRIDCELL_H

@class UICollectionViewCell, UIView, UIImageView, NSArray, NSNumber;


#import "PUProgressIndicatorView.h"
#import "PUPhotoView.h"

@interface PUPhotosGridCell : UICollectionViewCell {
    UIView *_selectionOverlayView;
    UIView *_selectionBadgeView;
    UIImageView *_cloudIconImageView;
    PUProgressIndicatorView *_progressIndicatorView;
    UIView *_highlightOverlayView;
    NSArray *_progressIndicatorViewConstraints;
}


@property (nonatomic, getter=isCloudIconVisible) BOOL cloudIconVisible; // ivar: _cloudIconVisible
@property (nonatomic) int currentImageRequestID; // ivar: _currentImageRequestID
@property (nonatomic) NSInteger dragState; // ivar: _dragState
@property (nonatomic, getter=isDraggable) BOOL draggable; // ivar: _draggable
@property (nonatomic) UIEdgeInsets fillerEdgeInsets; // ivar: _fillerEdgeInsets
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) PUPhotoView *photoContentView; // ivar: _photoContentView
@property (retain, nonatomic) NSNumber *progress; // ivar: _progress
@property (nonatomic, getter=isSelectionBadgeVisible) BOOL selectionBadgeVisible; // ivar: _selectionBadgeVisible
@property (retain, nonatomic) PUPhotoView *temporaryPhotoContentView; // ivar: _temporaryPhotoContentView
@property (readonly, nonatomic) UIView *transitionFillerView; // ivar: _transitionFillerView
@property (nonatomic) BOOL transitionFillerViewEnabled; // ivar: _transitionFillerViewEnabled
@property (nonatomic) BOOL transitionIsAppearing; // ivar: _transitionIsAppearing


+(Class)_contentViewClass;
-(BOOL)_disableRasterizeInAnimations;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutTransitionFillerView;
-(void)_updateCloudIcon;
-(void)_updateContentViewClipsToBounds;
-(void)_updateHighlight;
-(void)_updateProgressImmediately:(BOOL)arg0 ;
-(void)_updateSelectionBadge;
-(void)_updateSubviewOrdering;
-(void)addTemporaryPhotoContentView;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)dragStateDidChange:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)removeTemporaryPhotoContentView;
-(void)setTemporaryPhotoImage:(id)arg0 with:(NSInteger)arg1 ;
-(void)updateConstraints;


@end


#endif