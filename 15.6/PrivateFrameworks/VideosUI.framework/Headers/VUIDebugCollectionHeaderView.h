// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIDEBUGCOLLECTIONHEADERVIEW_H
#define VUIDEBUGCOLLECTIONHEADERVIEW_H

@class UICollectionReusableView;


#import "VUISeparatorView.h"
#import "VUILabel.h"
#import "VUITextLayout.h"

@interface VUIDebugCollectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) VUISeparatorView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) VUILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) VUITextLayout *titleLayout; // ivar: _titleLayout


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureHeaderViewWithTitle:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif