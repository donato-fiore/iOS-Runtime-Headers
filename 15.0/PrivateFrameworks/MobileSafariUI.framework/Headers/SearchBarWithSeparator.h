// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHBARWITHSEPARATOR_H
#define SEARCHBARWITHSEPARATOR_H

@class UISearchBar, _SFVibrantSeparatorView, UIView;



@interface SearchBarWithSeparator : UISearchBar {
    _SFVibrantSeparatorView *_vibrantSeparatorView;
    UIView *_nonVibrantSeparatorView;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif