// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPUITABLECELL_H
#define CPUITABLECELL_H

@class CPUIBaseTableCell, UIActivityIndicatorView, UIImage, UIImageView, MPUNowPlayingIndicatorView, UIView;


#import "CPUITableCellAccessory.h"

@interface CPUITableCell : CPUIBaseTableCell

@property (retain, nonatomic) CPUITableCellAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (retain, nonatomic) UIImage *artwork; // ivar: _artwork
@property (retain, nonatomic) UIImageView *artworkImageView; // ivar: _artworkImageView
@property (nonatomic) CGSize artworkSize; // ivar: _artworkSize
@property (retain, nonatomic) UIImage *chevronImage; // ivar: _chevronImage
@property (retain, nonatomic) CPUITableCellAccessory *cloudAccessory; // ivar: _cloudAccessory
@property (retain, nonatomic) UIImage *cloudImage; // ivar: _cloudImage
@property (nonatomic) BOOL container; // ivar: _container
@property (retain, nonatomic) UIImageView *explicitItemView; // ivar: _explicitItemView
@property (readonly, nonatomic) MPUNowPlayingIndicatorView *nowPlayingIndicator; // ivar: _nowPlayingIndicator
@property (nonatomic) CGFloat playbackProgress; // ivar: _playbackProgress
@property (retain, nonatomic) UIImage *playbackProgressFullImage; // ivar: _playbackProgressFullImage
@property (retain, nonatomic) UIView *playbackProgressView; // ivar: _playbackProgressView
@property (nonatomic) NSInteger playbackState; // ivar: _playbackState
@property (nonatomic) BOOL playingIndicatorLeadingSide; // ivar: _playingIndicatorLeadingSide
@property (nonatomic) BOOL shouldShowPlaybackProgress; // ivar: _shouldShowPlaybackProgress
@property (nonatomic) BOOL showActivityIndicator; // ivar: _showActivityIndicator
@property (nonatomic, getter=isShowExplicit) BOOL showExplicit; // ivar: _showExplicit


+(CGFloat)minimumHeight;
+(CGFloat)rowHeight;
-(BOOL)currentlyPlaying;
-(void)_updatePlayingArtworkIfNeeded;
-(void)_updateTintColors;
-(void)applyConfiguration:(id)arg0 ;
-(void)configureCell;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setShowsExplicit:(BOOL)arg0 ;
-(void)updateArtwork;
-(void)updatePlaybackProgress;


@end


#endif