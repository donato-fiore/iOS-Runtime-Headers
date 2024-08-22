// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPHOTOTILEPLACEHOLDERVIEW_H
#define PLPHOTOTILEPLACEHOLDERVIEW_H

@class UIView, UIActivityIndicatorView, UILabel, NSString;
@protocol PLTilePlaceholderView;



@interface PLPhotoTilePlaceholderView : UIView <PLTilePlaceholderView>

 {
    UIActivityIndicatorView *_loadingIndicatorView;
    UILabel *_loadingLabel;
    UIView *_loadingContainerView;
    CGFloat _lastViewPhaseChangeDate;
    BOOL _indicatorIsVisible;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)fadeOutSoonIfNeededAndRemoveFromSuperview:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)setImageRect:(struct CGRect )arg0 ;
-(void)setToolbarVisible:(BOOL)arg0 ;
-(void)showErrorIndicator;
-(void)showLoadingIndicator;
-(void)showLoadingIndicatorWhenReady;
-(void)updateCloudDownloadProgress:(CGFloat)arg0 ;


@end


#endif