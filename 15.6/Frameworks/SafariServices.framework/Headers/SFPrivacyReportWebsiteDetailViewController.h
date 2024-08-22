// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPRIVACYREPORTWEBSITEDETAILVIEWCONTROLLER_H
#define SFPRIVACYREPORTWEBSITEDETAILVIEWCONTROLLER_H

@class UITableViewController, WBSTrackedFirstParty;



@interface SFPrivacyReportWebsiteDetailViewController : UITableViewController {
    WBSTrackedFirstParty *_website;
}




-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithWebsite:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)viewDidLoad;


@end


#endif