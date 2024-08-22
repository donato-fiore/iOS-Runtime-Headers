// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RUITABLEVIEWHEADERFOOTERVIEW_H
#define RUITABLEVIEWHEADERFOOTERVIEW_H

@class UITableViewHeaderFooterView, UIView<RemoteUITableFooter>, UIView<RUIHeader>, UITableView;



@interface RUITableViewHeaderFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIView<RemoteUITableFooter> *footerView; // ivar: _footerView
@property (retain, nonatomic) UIView<RUIHeader> *headerView; // ivar: _headerView
@property (weak) UITableView *tableView; // ivar: _tableView


-(BOOL)_useLegacyLayout;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )insetsForHeaderFooter;
-(void)_embedContentView:(id)arg0 ;
-(void)embedFooterView:(id)arg0 ;
-(void)embedHeaderView:(id)arg0 ;
-(void)layoutSubviews;
-(void)removeEmbeddedView;


@end


#endif