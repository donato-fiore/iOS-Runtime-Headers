// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMPROGRESSBANNERVIEW_H
#define PXCMMPROGRESSBANNERVIEW_H

@class UIView, UIVisualEffectView, UITextView, UILabel, UIProgressView, UIAlertController, NSString;
@protocol PXChangeObserver, UITextViewDelegate, PXCMMProgressBannerViewDelegate;


#import "PXMomentShareStatusPresentation.h"

@interface PXCMMProgressBannerView : UIView <PXChangeObserver, UITextViewDelegate>

 {
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    UIVisualEffectView *_visualEffectView;
    UITextView *_activityTextView;
    UILabel *_pauseLabel;
    UIProgressView *_progressView;
}


@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXCMMProgressBannerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat layoutHeight; // ivar: _layoutHeight
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithMomentShareStatusPresentation:(id)arg0 ;
-(struct CGSize )_performLayoutInWidth:(CGFloat)arg0 updateSubviewFrames:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_updateActivityTitle;
-(void)_updatePauseTitle;
-(void)_updateProgress;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif