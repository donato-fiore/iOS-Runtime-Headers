// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQUIINLINETIPROW_H
#define ICQUIINLINETIPROW_H

@class RUITableViewRow, UITableViewCell, UIView;



@interface ICQUIInlineTipRow : RUITableViewRow {
    os_unfair_lock_s _tableCellLock;
    UITableViewCell *_tableCell;
}


@property (retain, nonatomic) UIView *tipView; // ivar: _tipView


-(float)rowHeightWithMax:(float)arg0 peggedHeight:(float)arg1 tableView:(id)arg2 indexPath:(id)arg3 ;
-(id)init;
-(id)tableCell;


@end


#endif