// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROSMARTMUSICMENUCELL_H
#define MIROSMARTMUSICMENUCELL_H

@class UITableViewCell, UILabel, UIImageView, UIView, NSString;
@protocol VisualCompletionInformable;


#import "MiroSongPreviewButton.h"
#import "MiroCircularProgressBar.h"
#import "VEKReachability.h"
#import "VEKSong.h"

@interface MiroSmartMusicMenuCell : UITableViewCell <VisualCompletionInformable>

 {
    BOOL _visualProgressCompleted;
}


@property (weak, nonatomic) UILabel *artistName; // ivar: _artistName
@property (weak, nonatomic) UIImageView *artwork; // ivar: _artwork
@property (weak, nonatomic) UIImageView *checkmark; // ivar: _checkmark
@property (weak, nonatomic) UIImageView *cloudStatus; // ivar: _cloudStatus
@property (nonatomic) BOOL observingSong; // ivar: _observingSong
@property (weak, nonatomic) MiroSongPreviewButton *previewSongButton; // ivar: _previewSongButton
@property (nonatomic) float progress; // ivar: _progress
@property (weak, nonatomic) UIView *progressBackgroundView; // ivar: _progressBackgroundView
@property (weak, nonatomic) MiroCircularProgressBar *progressIndicator; // ivar: _progressIndicator
@property (retain, nonatomic) VEKReachability *reachability; // ivar: _reachability
@property (retain, nonatomic) VEKSong *song; // ivar: _song
@property (weak, nonatomic) UILabel *songName; // ivar: _songName
@property (retain, nonatomic) NSString *songUID; // ivar: _songUID


+(CGFloat)dynamicTypeHeight;
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
-(void)reactToVisualCompletion;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;
-(void)updateArtwork;
-(void)updateSongNameForSong:(id)arg0 ;


@end


#endif