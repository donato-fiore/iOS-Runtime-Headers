// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROEDITORCLIPCELL_H
#define MIROEDITORCLIPCELL_H

@class UICollectionViewCell, UIView, UILabel, NSLayoutConstraint, PXUIAssetBadgeView, AVPlayer, AVPlayerItem, AVPlayerLayer, UIImage, UIImageView;
@protocol MiroEditorClipCellDelegate;


#import "PMClipProvider.h"
#import "MiroEditorClipDebugView.h"

@interface MiroEditorClipCell : UICollectionViewCell

@property (weak, nonatomic) UIView *audioButtonContainerView; // ivar: _audioButtonContainerView
@property (weak, nonatomic) UILabel *audioButtonLabel; // ivar: _audioButtonLabel
@property (retain, nonatomic) NSLayoutConstraint *bottomBarBottomSpaceConstraint; // ivar: _bottomBarBottomSpaceConstraint
@property (retain, nonatomic) UIView *circularPlayButton; // ivar: _circularPlayButton
@property (retain, nonatomic) PMClipProvider *clipProvider; // ivar: _clipProvider
@property (weak, nonatomic) MiroEditorClipDebugView *debugInfoView; // ivar: _debugInfoView
@property (weak, nonatomic) UILabel *debugLabel; // ivar: _debugLabel
@property (weak, nonatomic) NSObject<MiroEditorClipCellDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isPlaying;
@property (retain, nonatomic) PXUIAssetBadgeView *photoIrisBadgeView; // ivar: _photoIrisBadgeView
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (retain, nonatomic) AVPlayerItem *playerItem; // ivar: _playerItem
@property (retain, nonatomic) AVPlayerLayer *playerLayer; // ivar: _playerLayer
@property (retain, nonatomic) UIImage *thumbnail; // ivar: _thumbnail
@property (retain, nonatomic) NSLayoutConstraint *thumbnailAspectConstraint; // ivar: _thumbnailAspectConstraint
@property (weak, nonatomic) UIImageView *thumbnailView; // ivar: _thumbnailView
@property (weak, nonatomic) UIView *treatmentButtonContainerView; // ivar: _treatmentButtonContainerView
@property (retain, nonatomic) NSLayoutConstraint *treatmentButtonTopConstraint; // ivar: _treatmentButtonTopConstraint


-(BOOL)_removePOIsInRect:(struct CGRect )arg0 ;
-(id)_faceRectsInViewSpace;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(struct CGRect )_poiRectInViewSpace;
-(void)_addHighlightRectsToThumbnail;
-(void)_addPOIInRect:(struct CGRect )arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_didPlayToEnd:(id)arg0 ;
-(void)_disableAudioTracks;
-(void)_hidePlayer;
-(void)_highlightFacesForRects:(id)arg0 ;
-(void)_highlightPOI;
-(void)_setupCircularPlayButton;
-(void)_updateAudioButton;
-(void)_updateAudioVolume;
-(void)_updateDebugInfoView;
-(void)_updatePlayButton;
-(void)_updateThumbnailAspectIfNecessary;
-(void)_updateTreatmentButton;
-(void)assetBadgeView:(id)arg0 userDidSelectBadges:(NSUInteger)arg1 ;
-(void)audioButtonTouchUpInside:(id)arg0 ;
-(void)awakeFromNib;
-(void)dealloc;
-(void)handleTapAtLocation:(struct CGPoint )arg0 ;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause:(id)arg0 ;
-(void)play:(id)arg0 ;
-(void)playButtonTouchUpInside:(id)arg0 ;
-(void)playPause:(id)arg0 ;
-(void)prepareForReuse;
-(void)showPlayerWithCompletionHandler:(id)arg0 ;
-(void)stopPlayback:(id)arg0 ;
-(void)treatmentButtonTouchUpInside:(id)arg0 ;
-(void)updateControlVisibility;


@end


#endif