// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSETTINGSTABLEVIEWCONTROLLER_H
#define PKSETTINGSTABLEVIEWCONTROLLER_H

@class UITableViewController;


#import "PKTableViewDiffableDataSource.h"
#import "PKSettingsTableViewConfiguration.h"

@interface PKSettingsTableViewController : UITableViewController {
    PKTableViewDiffableDataSource *_dataSource;
    PKSettingsTableViewConfiguration *_currentConfiguration;
}




-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)indexOfSectionWithIdentifier:(id)arg0 ;
-(id)sections;
-(void)applyConfiguration:(id)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif