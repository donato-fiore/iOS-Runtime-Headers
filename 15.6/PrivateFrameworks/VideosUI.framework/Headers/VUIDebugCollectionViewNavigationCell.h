// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIDEBUGCOLLECTIONVIEWNAVIGATIONCELL_H
#define VUIDEBUGCOLLECTIONVIEWNAVIGATIONCELL_H

@class UIImageView;


#import "VUIListCollectionViewCell.h"
#import "VUISeparatorView.h"
#import "VUILabel.h"
#import "VUITextLayout.h"

@interface VUIDebugCollectionViewNavigationCell : VUIListCollectionViewCell

@property (retain, nonatomic) UIImageView *accessoryView; // ivar: _accessoryView
@property (retain, nonatomic) VUISeparatorView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) VUILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) VUITextLayout *titleLayout; // ivar: _titleLayout


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithTitle:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif