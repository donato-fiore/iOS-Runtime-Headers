// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMBUISYNCPROGRESSVIEW_H
#define NMBUISYNCPROGRESSVIEW_H

@class UIView, UIStackView, UIProgressView, UILabel, UIActivityIndicatorView, UIVisualEffectView;



@interface NMBUISyncProgressView : UIView {
    UIStackView *_progressContainerView;
    UIProgressView *_progressView;
    UILabel *_progressTextLabel;
    UIActivityIndicatorView *_progressIndicator;
    UIVisualEffectView *_backgroundView;
    BOOL _shouldShowProgressDetails;
}




-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateWithShouldShowProgressBar:(BOOL)arg0 progress:(float)arg1 progressText:(id)arg2 ;


@end


#endif