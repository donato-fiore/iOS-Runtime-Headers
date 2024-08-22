// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPERFORMACTIONLOADINGVIEW_H
#define PKPERFORMACTIONLOADINGVIEW_H

@class UIView, UILabel, UIActivityIndicatorView;



@interface PKPerformActionLoadingView : UIView

@property (readonly, nonatomic) UILabel *loadingLabel; // ivar: _loadingLabel
@property (readonly, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif