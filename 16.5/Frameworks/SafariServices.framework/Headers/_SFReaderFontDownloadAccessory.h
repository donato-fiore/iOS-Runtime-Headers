// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFREADERFONTDOWNLOADACCESSORY_H
#define _SFREADERFONTDOWNLOADACCESSORY_H

@class UIView, UIButton, UIProgressView;



@interface _SFReaderFontDownloadAccessory : UIView

@property (readonly, nonatomic) UIButton *downloadButton; // ivar: _downloadButton
@property (nonatomic, getter=isDownloading) BOOL downloading; // ivar: _downloading
@property (readonly, nonatomic) UIProgressView *progressView; // ivar: _progressView
@property (copy, nonatomic) id *tappedDownloadBlock; // ivar: _tappedDownloadBlock


-(id)initWithTappedDownloadBlock:(id)arg0 ;
-(id)viewForLastBaselineLayout;
-(void)_tappedDownloadButton:(id)arg0 ;


@end


#endif