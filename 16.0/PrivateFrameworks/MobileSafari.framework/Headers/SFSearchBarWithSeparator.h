// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSEARCHBARWITHSEPARATOR_H
#define SFSEARCHBARWITHSEPARATOR_H

@class UISearchBar, UIView;


#import "SFVibrantSeparatorView.h"

@interface SFSearchBarWithSeparator : UISearchBar {
    SFVibrantSeparatorView *_vibrantSeparatorView;
    UIView *_nonVibrantSeparatorView;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif