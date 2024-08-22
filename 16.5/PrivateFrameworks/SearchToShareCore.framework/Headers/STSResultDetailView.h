// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSRESULTDETAILVIEW_H
#define STSRESULTDETAILVIEW_H

@class UIView, UIVisualEffectView, UIImageView, UIImage, NSString, UIButton;
@protocol STSResultDetailViewDelegate;


#import "STSResultDetailFooter.h"
#import "STSAnimatedImageInfo.h"

@interface STSResultDetailView : UIView {
    UIVisualEffectView *_backgroundView;
    UIImageView *_thumbnailView;
    STSResultDetailFooter *_footer;
}


@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (retain, nonatomic) UIView *customContentView; // ivar: _customContentView
@property (weak, nonatomic) NSObject<STSResultDetailViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isFullscreen; // ivar: _isFullscreen
@property (retain, nonatomic) UIImage *providerIcon;
@property (nonatomic) CGSize providerIconSize;
@property (copy, nonatomic) NSString *providerName;
@property (retain, nonatomic) UIButton *reportConcernButton; // ivar: _reportConcernButton
@property (nonatomic) BOOL showReportConcern; // ivar: _showReportConcern
@property (readonly, nonatomic) UIImage *thumbnail; // ivar: _thumbnail
@property (readonly, nonatomic) STSAnimatedImageInfo *thumbnailInfo; // ivar: _thumbnailInfo
@property (nonatomic) BOOL useBackgroundBlur; // ivar: _useBackgroundBlur


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )contentFrameForBounds:(struct CGRect )arg0 traitCollection:(id)arg1 ;
-(struct UIEdgeInsets )layoutMargins;
-(void)_calculateFramesForBounds:(struct CGRect )arg0 traitCollection:(id)arg1 andSetFrames:(BOOL)arg2 contentFrame:(struct CGRect *)arg3 ;
-(void)_didTapProvider:(id)arg0 ;
-(void)_didTapReportConcern:(id)arg0 ;
-(void)_didTapSend:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateReportConcernButtonTitle;
-(void)updateWithThumbnail:(id)arg0 orThumbnailInfo:(id)arg1 ;


@end


#endif