// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKUIDIVIDEDGRIDVIEWTABLEVIEWCELL_H
#define EKUIDIVIDEDGRIDVIEWTABLEVIEWCELL_H

@class UITableViewCell, UIView;


#import "EKUIDividedGridViewController.h"

@interface EKUIDividedGridViewTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *bottomDivider; // ivar: _bottomDivider
@property (nonatomic) BOOL drawsTopDivider;
@property (retain) EKUIDividedGridViewController *gridViewController; // ivar: _gridViewController
@property (retain, nonatomic) UIView *topDivider; // ivar: _topDivider


-(BOOL)_isWiderThanMaximum;
-(BOOL)drawBottomDivider;
-(BOOL)wantsDrawBackground;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 gridViewType:(NSInteger)arg2 buttonTitles:(id)arg3 cellBackgroundColor:(id)arg4 ;
-(struct CGRect )_separatorFrame;
-(void)layoutSubviews;
-(void)setDrawBottomDivider:(BOOL)arg0 ;


@end


#endif