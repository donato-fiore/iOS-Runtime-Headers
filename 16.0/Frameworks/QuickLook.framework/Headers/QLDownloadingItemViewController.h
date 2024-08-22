// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLDOWNLOADINGITEMVIEWCONTROLLER_H
#define QLDOWNLOADINGITEMVIEWCONTROLLER_H

@class UIImageView, UIImage, QLItem;
@protocol QLDownloadingItemViewControllerDelegate;


#import "QLDetailItemViewController.h"
#import "QLDetailItemViewControllerState.h"
#import "QLRoundProgressView.h"

@interface QLDownloadingItemViewController : QLDetailItemViewController {
    BOOL _downloading;
    BOOL _didDisappear;
    id *_progressSubscriber;
    QLDetailItemViewControllerState *_readyForDownloadState;
    QLDetailItemViewControllerState *_cancelableDownloadingState;
    QLDetailItemViewControllerState *_nonCancelableDownloadingState;
    QLDetailItemViewControllerState *_completedDownloadState;
    QLDetailItemViewControllerState *_previewLoadingState;
    UIImageView *_downloadImageView;
    UIImage *_cloudImage;
    QLItem *_previewItem;
}


@property (nonatomic) BOOL downloaded; // ivar: _downloaded
@property (weak, nonatomic) NSObject<QLDownloadingItemViewControllerDelegate> *downloadingDelegate; // ivar: _downloadingDelegate
@property (readonly, nonatomic) QLRoundProgressView *progressView; // ivar: _progressView
@property (nonatomic) BOOL showsLoadingPreviewSpinner; // ivar: _showsLoadingPreviewSpinner


-(BOOL)shouldAutoDownloadInNetworkState:(NSUInteger)arg0 downloadSize:(id)arg1 forceIfPossible:(BOOL)arg2 ;
-(void)_presentConnectivityAlert;
-(void)_setDownloading:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_startDownload:(BOOL)arg0 ;
-(void)_startDownloadOperation;
-(void)_stopDownload:(BOOL)arg0 ;
-(void)_toggleDownload:(BOOL)arg0 ;
-(void)_updateFileSizeWithProgress:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)performAction;
-(void)previewDidAppear:(BOOL)arg0 ;
-(void)previewDidDisappear:(BOOL)arg0 ;
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;
-(void)startDownload:(BOOL)arg0 ;
-(void)startDownloadIfNeeded;
-(void)viewDidLoad;


@end


#endif