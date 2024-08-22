// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUFEEDPLAYERCELL_H
#define PUFEEDPLAYERCELL_H

@class UIButton, ISLivePhotoPlayer, ISLivePhotoUIView, UICollectionView, UIImage, AVAsset;


#import "PUFeedCell.h"

@interface PUFeedPlayerCell : PUFeedCell

@property (retain, nonatomic, setter=_setCommentButton:) UIButton *_commentButton; // ivar: __commentButton
@property (nonatomic, setter=_setPerformingIrisPlayerChanges:) BOOL _isPerformingIrisPlayerChanges; // ivar: __isPerformingIrisPlayerChanges
@property (nonatomic, setter=_setNeedsUpdatePlayerItem:) BOOL _needsUpdatePlayerItem; // ivar: __needsUpdatePlayerItem
@property (nonatomic, setter=_setNeedsUpdateVitality:) BOOL _needsUpdateVitality; // ivar: __needsUpdateVitality
@property (readonly, nonatomic) ISLivePhotoPlayer *_player; // ivar: __player
@property (readonly, nonatomic) ISLivePhotoUIView *_playerView; // ivar: __playerView
@property (nonatomic, setter=_setShouldHideCommentButton:) BOOL _shouldHideCommentButton; // ivar: __shouldHideCommentButton
@property (nonatomic) NSInteger commentCount; // ivar: _commentCount
@property (weak, nonatomic) UICollectionView *containingCollectionView; // ivar: _containingCollectionView
@property (nonatomic) int currentImageRequestID; // ivar: _currentImageRequestID
@property (nonatomic, setter=setPhotoImageDegraded:) BOOL isPhotoImageDegraded; // ivar: _isPhotoImageDegraded
@property (retain, nonatomic) UIImage *photoImage; // ivar: _photoImage
@property (nonatomic) CGFloat photoTime; // ivar: _photoTime
@property (nonatomic, getter=isPlayerHidden) BOOL playerHidden; // ivar: _playerHidden
@property (retain, nonatomic) AVAsset *videoAsset; // ivar: _videoAsset


+(Class)_contentViewClass;
-(BOOL)_needsUpdateIris;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_assertInsideIrisPlayerChanges;
-(void)_handleCommentButton:(id)arg0 ;
-(void)_invalidatePlayerItem;
-(void)_invalidateVitality;
-(void)_layoutPlayerView;
-(void)_setNeedsUpdateIris;
-(void)_updateCommentButton;
-(void)_updateIrisIfNeeded;
-(void)_updatePlayerItemIfNeeded;
-(void)_updateVitalityIfNeeded;
-(void)layoutSubviews;
-(void)performIrisPlayerChanges:(id)arg0 ;
-(void)prepareForReuse;
-(void)setParallaxOffset:(struct CGPoint )arg0 ;


@end


#endif