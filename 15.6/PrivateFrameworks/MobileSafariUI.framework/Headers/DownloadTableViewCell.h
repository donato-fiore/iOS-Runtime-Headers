// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOWNLOADTABLEVIEWCELL_H
#define DOWNLOADTABLEVIEWCELL_H

@class UITableViewCell, UILabel, UIProgressView, UIButton, _SFDownload, _SFDownloadIconCache, UIImageView;
@protocol SFDeferrableUpdateView, _SFDownloadIconCacheObserver, DownloadTableViewCellDelegate;



@interface DownloadTableViewCell : UITableViewCell <SFDeferrableUpdateView, _SFDownloadIconCacheObserver>

 {
    UILabel *_nameLabel;
    UILabel *_statusLabel;
    UIProgressView *_progressView;
    UIButton *_cancelButton;
    UIButton *_revealButton;
    UIButton *_resumeButton;
    ? deferrableUpdateViewState;
}


@property (weak, nonatomic) NSObject<DownloadTableViewCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) _SFDownload *download; // ivar: _download
@property (retain, nonatomic) _SFDownloadIconCache *iconCache; // ivar: _iconCache
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView


+(id)tableViewCellForSizeEstimation;
-(id)_busyStatus;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct ? *)deferrableUpdateViewState;
-(void)_buttonPressed:(id)arg0 ;
-(void)_downloadChanged:(id)arg0 ;
-(void)_downloadURLChanged:(id)arg0 ;
-(void)_updateCellContents;
-(void)_updateCellContentsForSizing;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)downloadIconCache:(id)arg0 didGenerateNewIcon:(id)arg1 forSource:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContents;


@end


#endif