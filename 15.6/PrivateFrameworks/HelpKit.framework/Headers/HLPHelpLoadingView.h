// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HLPHELPLOADINGVIEW_H
#define HLPHELPLOADINGVIEW_H

@class UIView, UIImageView, UIActivityIndicatorView, UILabel;
@protocol HLPHelpLoadingViewDelegate;



@interface HLPHelpLoadingView : UIView {
    UIImageView *_errorImageView;
}


@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (weak, nonatomic) NSObject<HLPHelpLoadingViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UILabel *errorMessageLabel; // ivar: _errorMessageLabel
@property (retain, nonatomic) UILabel *errorTitleLabel; // ivar: _errorTitleLabel
@property (nonatomic) BOOL supportsDarkMode; // ivar: _supportsDarkMode


-(id)init;
-(void)removeErrorView;
-(void)showActivityIndicator:(BOOL)arg0 ;
-(void)showDefaultErrorMessage;
-(void)showErrorWithTitle:(id)arg0 message:(id)arg1 ;
-(void)showHelpBookInfo;
-(void)showNoConnectionErrorMessage;
-(void)updateBackgroundColor;


@end


#endif