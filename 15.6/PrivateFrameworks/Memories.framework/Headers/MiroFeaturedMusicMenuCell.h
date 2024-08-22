// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROFEATUREDMUSICMENUCELL_H
#define MIROFEATUREDMUSICMENUCELL_H

@class UIImageView, UIView;


#import "MiroMusicMenuCell.h"
#import "MiroSongPreviewButton.h"
#import "MiroCircularProgressBar.h"
#import "VEKReachability.h"

@interface MiroFeaturedMusicMenuCell : MiroMusicMenuCell

@property (weak, nonatomic) UIImageView *cloudStatus; // ivar: _cloudStatus
@property (nonatomic) BOOL observingSong; // ivar: _observingSong
@property (weak, nonatomic) MiroSongPreviewButton *previewSongButton; // ivar: _previewSongButton
@property (nonatomic) float progress; // ivar: _progress
@property (weak, nonatomic) UIView *progressBackgroundView; // ivar: _progressBackgroundView
@property (weak, nonatomic) MiroCircularProgressBar *progressIndicator; // ivar: _progressIndicator
@property (retain, nonatomic) VEKReachability *reachability; // ivar: _reachability


-(NSInteger)networkStatus;
-(void)_setupReachabiliy;
-(void)_songAssetChanged:(id)arg0 ;
-(void)_updateCloudStatus;
-(void)_updateDownload:(id)arg0 ;
-(void)_updateProgressIndicator:(float)arg0 ;
-(void)_updateTextColors;
-(void)awakeFromNib;
-(void)dealloc;
-(void)networkStatusChanged:(id)arg0 ;
-(void)prepareForReuse;
-(void)setSong:(id)arg0 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;
-(void)updateArtwork;
-(void)updateSongNameForSong:(id)arg0 ;


@end


#endif