// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUILOADINGVIEW_H
#define SKUILOADINGVIEW_H

@class UIView, UILabel, UIActivityIndicatorView, NSString;


#import "SKUIColorScheme.h"

@interface SKUILoadingView : UIView {
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
}


@property (copy, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (copy, nonatomic) NSString *loadingText;


+(id)defaultLoadingTextWithClientContext:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif