// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSAPPSTOREBUTTON_H
#define CPSAPPSTOREBUTTON_H

@class UIStackView, UILabel;


#import "CPSButton.h"

@interface CPSAppStoreButton : CPSButton {
    UIStackView *_fullSizeStack;
    UIStackView *_glyphOnlyStack;
    UILabel *_label;
    CGRect _lastLayoutBounds;
    BOOL _intrinsicContentSizeIsValid;
    CGSize _intrinsicContentSize;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGSize )intrinsicContentSize;
-(void)_commonInit;
-(void)invalidateIntrinsicContentSize;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif