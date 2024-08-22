// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSSUGGESTIONFOOTER_H
#define STSSUGGESTIONFOOTER_H

@class UIView, UIImageView, UIImage;



@interface STSSuggestionFooter : UIView {
    UIImageView *_imageView;
}


@property (retain, nonatomic) UIImage *searchProviderImage; // ivar: _searchProviderImage


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif