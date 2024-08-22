// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFPRIVACYREPORTWEBSITEDETAILVIEWCONTROLLER_H
#define SFPRIVACYREPORTWEBSITEDETAILVIEWCONTROLLER_H

@class UITableViewController, WBSTrackedFirstParty, NSArray;



@interface SFPrivacyReportWebsiteDetailViewController : UITableViewController {
    WBSTrackedFirstParty *_website;
    NSArray *_sections;
}




-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithWebsite:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_loadSections;
-(void)viewDidLoad;


@end


#endif