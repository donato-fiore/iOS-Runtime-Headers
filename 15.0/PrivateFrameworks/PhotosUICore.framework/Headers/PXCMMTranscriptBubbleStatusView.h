// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMTRANSCRIPTBUBBLESTATUSVIEW_H
#define PXCMMTRANSCRIPTBUBBLESTATUSVIEW_H

@class UIView, UIImageView, UIActivityIndicatorView, NSString;


#import "PXUpdater.h"
#import "PXCMMTranscriptTextView.h"
#import "PXRoundedCornerOverlayView.h"
#import "PXCMMSpec.h"

@interface PXCMMTranscriptBubbleStatusView : UIView {
    PXUpdater *_updater;
    PXCMMTranscriptTextView *_textView;
    UIImageView *_iconImageView;
    PXRoundedCornerOverlayView *_roundedCornerOverlay;
    UIActivityIndicatorView *_activityIndicator;
}


@property (nonatomic) UIEdgeInsets bubbleSafeAreaInsets; // ivar: _bubbleSafeAreaInsets
@property (nonatomic) BOOL showsActivityIndicator; // ivar: _showsActivityIndicator
@property (retain, nonatomic) PXCMMSpec *spec; // ivar: _spec
@property (copy, nonatomic) NSString *statusDescription;
@property (copy, nonatomic) NSString *statusTitle;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_performLayoutInSize:(struct CGSize )arg0 minimizingSize:(BOOL)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateActivityIndicator;
-(void)_updateRoundedCornerOverlayView;
-(void)layoutSubviews;


@end


#endif