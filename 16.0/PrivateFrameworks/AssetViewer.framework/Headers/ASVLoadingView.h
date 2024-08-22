// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASVLOADINGVIEW_H
#define ASVLOADINGVIEW_H

@class UIView, UILabel, UIActivityIndicatorView, NSLayoutConstraint, NSError;



@interface ASVLoadingView : UIView {
    UILabel *_assetLoadingStatusLabel;
    UIActivityIndicatorView *_spinner;
    NSLayoutConstraint *_spinnerLeadingConstraint;
}


@property (retain, nonatomic) NSError *loadingError; // ivar: _loadingError
@property (nonatomic) NSUInteger spinnerColor; // ivar: _spinnerColor


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonInit;
-(void)_updateLoadingSpinner;
-(void)_updateLoadingText;


@end


#endif