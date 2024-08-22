// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMAILDROPBANNERVIEW_H
#define MFMAILDROPBANNERVIEW_H

@class UILabel, UIButton, MFProgressView, NSLayoutConstraint, EMMailDropMetadata;
@protocol MFMailDropBannerDelegate;


#import "MFMessageHeaderViewBlock.h"

@interface MFMailDropBannerView : MFMessageHeaderViewBlock {
    BOOL _hasLoaded;
    UILabel *_expirationLabel;
    UILabel *_downloadLabel;
    UIButton *_downloadIcon;
    MFProgressView *_progressView;
    NSLayoutConstraint *_iconWrapperWidth;
    NSLayoutConstraint *_labelFirstBaseline;
    NSLayoutConstraint *_expirationFirstBaseline;
    NSLayoutConstraint *_expirationBottom;
}


@property (nonatomic) NSUInteger bannerState; // ivar: _bannerState
@property (weak, nonatomic) NSObject<MFMailDropBannerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat downloadProgress; // ivar: _downloadProgress
@property (retain, nonatomic) EMMailDropMetadata *metaData; // ivar: _metaData


-(BOOL)_hasDataLocally;
-(BOOL)_shouldDisplayProgress;
-(BOOL)shouldPresent;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupDownloadIcon;
-(void)_setupDownloadLabel;
-(void)_setupExpirationLabel;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)setSeparatorIsHidden:(BOOL)arg0 ;
-(void)startDownload:(id)arg0 ;
-(void)updateConstraints;


@end


#endif