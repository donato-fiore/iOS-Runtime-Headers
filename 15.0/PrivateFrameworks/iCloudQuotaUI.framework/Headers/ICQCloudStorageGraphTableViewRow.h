// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQCLOUDSTORAGEGRAPHTABLEVIEWROW_H
#define ICQCLOUDSTORAGEGRAPHTABLEVIEWROW_H

@class RUITableViewRow, NSLock, UITableViewCell;



@interface ICQCloudStorageGraphTableViewRow : RUITableViewRow {
    NSLock *_tableCellLock;
    UITableViewCell *_tableCell;
}




-(float)rowHeightWithMax:(float)arg0 peggedHeight:(float)arg1 tableView:(id)arg2 indexPath:(id)arg3 ;
-(id)init;
-(id)tableCell;


@end


#endif