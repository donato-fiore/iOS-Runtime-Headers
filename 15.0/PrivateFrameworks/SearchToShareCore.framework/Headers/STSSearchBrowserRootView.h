// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSSEARCHBROWSERROOTVIEW_H
#define STSSEARCHBROWSERROOTVIEW_H

@class UIView, NSMutableArray;


#import "STSSearchBrowserHeaderView.h"

@interface STSSearchBrowserRootView : UIView {
    NSMutableArray *_constraints;
}


@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) CGFloat headerTopInset; // ivar: _headerTopInset
@property (retain, nonatomic) STSSearchBrowserHeaderView *headerView; // ivar: _headerView


-(id)init;
-(void)didAddSubview:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif