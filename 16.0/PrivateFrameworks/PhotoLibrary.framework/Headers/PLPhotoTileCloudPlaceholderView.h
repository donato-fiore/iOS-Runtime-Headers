// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPHOTOTILECLOUDPLACEHOLDERVIEW_H
#define PLPHOTOTILECLOUDPLACEHOLDERVIEW_H

@class UIView, UIButton, NSString;
@protocol PLTilePlaceholderView, PLPhotoTileCloudPlaceholderViewDelegate;


#import "PLRoundProgressView.h"

@interface PLPhotoTileCloudPlaceholderView : UIView <PLTilePlaceholderView>

 {
    PLRoundProgressView *_loadingIndicatorView;
    UIView *_loadingContainerView;
    UIButton *_loadingErrorButton;
    BOOL _indicatorIsVisible;
    BOOL _showingError;
    BOOL _showingLoading;
    CGRect _imageRect;
    BOOL _toolbarVisible;
    CGFloat _lastViewPhaseChangeDate;
    id<PLPhotoTileCloudPlaceholderViewDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_retryDownload;
-(void)dealloc;
-(void)fadeOutSoonIfNeededAndRemoveFromSuperview:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)setImageRect:(struct CGRect )arg0 ;
-(void)setRetryDelegate:(id)arg0 ;
-(void)setToolbarVisible:(BOOL)arg0 ;
-(void)showErrorIndicator;
-(void)showLoadingIndicator;
-(void)showLoadingIndicatorWhenReady;
-(void)updateCloudDownloadProgress:(CGFloat)arg0 ;


@end


#endif