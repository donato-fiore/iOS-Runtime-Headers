// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKTITLEDLOGOBUDDYHEADERVIEW_H
#define HKTITLEDLOGOBUDDYHEADERVIEW_H

@class UIImageView, NSLayoutConstraint, UIImage;


#import "HKTitledBuddyHeaderView.h"

@interface HKTitledLogoBuddyHeaderView : HKTitledBuddyHeaderView {
    UIImageView *_logoImageView;
    NSLayoutConstraint *_titleLabelFirstBaselineAnchor;
}


@property (retain, nonatomic) UIImage *logoImage;


-(CGFloat)bottomPadding;
-(id)initWithTopInset:(CGFloat)arg0 linkButtonTitle:(id)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif