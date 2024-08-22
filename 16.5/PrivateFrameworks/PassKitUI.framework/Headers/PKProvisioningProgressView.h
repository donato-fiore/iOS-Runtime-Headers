// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPROVISIONINGPROGRESSVIEW_H
#define PKPROVISIONINGPROGRESSVIEW_H

@class UIView, UIScrollView, LAUICheckmarkLayer, UITextView, NSString, UILabel, UIProgressView;



@interface PKProvisioningProgressView : UIView {
    UIScrollView *_scrollView;
}


@property (readonly, nonatomic) LAUICheckmarkLayer *checkmarkLayer; // ivar: _checkmarkLayer
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (readonly, nonatomic) UITextView *primaryLabel; // ivar: _primaryLabel
@property (retain, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (readonly, nonatomic) UILabel *progressLabel; // ivar: _progressLabel
@property (readonly, nonatomic) UIProgressView *progressView; // ivar: _progressView
@property (readonly, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (nonatomic, getter=isShowingCheckmark) BOOL showingCheckmark; // ivar: _showingCheckmark


-(id)init;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 applyLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateCheckmarkColor;
-(void)createViews;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif