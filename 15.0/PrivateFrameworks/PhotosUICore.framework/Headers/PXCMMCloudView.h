// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMCLOUDVIEW_H
#define PXCMMCLOUDVIEW_H

@class UIView, UILabel, UIButton, UIImageView;
@protocol PXCMMCloudViewViewDelegate;


#import "PXRoundedCornerOverlayView.h"
#import "PXGradientView.h"

@interface PXCMMCloudView : UIView {
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    ? _delegateRespondsTo;
}


@property (readonly, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (weak, nonatomic) NSObject<PXCMMCloudViewViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL disableDismissAction;
@property (readonly, nonatomic) UIButton *dismissButton; // ivar: _dismissButton
@property (readonly, nonatomic) PXGradientView *graphicGradientView; // ivar: _graphicGradientView
@property (readonly, nonatomic) UIImageView *graphicImageView; // ivar: _graphicImageView
@property (readonly, nonatomic) UIButton *learnMoreButton; // ivar: _learnMoreButton
@property (readonly, nonatomic) NSUInteger style; // ivar: _style


-(id)_constrainedFontForTextStyle:(id)arg0 maximumContentSizeCategory:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSUInteger)arg1 ;
-(struct CGSize )_performLayoutInRect:(struct CGRect )arg0 updateSubviewFrames:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_didTapDismissButton:(id)arg0 ;
-(void)_learnMoreTapped:(id)arg0 ;
-(void)_setupSubviews;
-(void)_updateFontAndStyle;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif