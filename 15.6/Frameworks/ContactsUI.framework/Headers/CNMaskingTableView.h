// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMASKINGTABLEVIEW_H
#define CNMASKINGTABLEVIEW_H

@class UITableView, UIView;



@interface CNMaskingTableView : UITableView

@property (nonatomic) CGFloat maskingInset; // ivar: _maskingInset
@property (retain, nonatomic) UIView *tableMaskView; // ivar: _tableMaskView


-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToWindow;
-(void)tlk_updateForAppearance:(id)arg0 ;


@end


#endif