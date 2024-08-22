// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUILOADINGVIEW_H
#define VUILOADINGVIEW_H

@class UIView, UIActivityIndicatorView;


#import "VUILabel.h"

@interface VUILoadingView : UIView

@property (nonatomic) CGFloat delay; // ivar: _delay
@property (retain, nonatomic) UIActivityIndicatorView *indicatorView; // ivar: _indicatorView
@property (retain, nonatomic) VUILabel *loadingLabel; // ivar: _loadingLabel


-(id)initWithFrame:(struct CGRect )arg0 loadingString:(id)arg1 ;
-(void)layoutSubviews;
-(void)startTimer;


@end


#endif