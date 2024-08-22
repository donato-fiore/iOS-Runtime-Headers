// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSETTINGSTABLEVIEWCONTROLLER_H
#define PKSETTINGSTABLEVIEWCONTROLLER_H

@class UITableViewController;


#import "PKSettingsRowDiffableDataSource.h"

@interface PKSettingsTableViewController : UITableViewController {
    PKSettingsRowDiffableDataSource *_dataSource;
}




-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)indexOfSectionWithIdentifier:(id)arg0 ;
-(id)sections;
-(void)applyConfiguration:(id)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif