// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFPRIVACYREPORTTRACKERDETAILVIEWCONTROLLER_H
#define SFPRIVACYREPORTTRACKERDETAILVIEWCONTROLLER_H

@class UITableViewController, NSNumberFormatter, WBSKnownTrackingThirdParty, UIView;



@interface SFPrivacyReportTrackerDetailViewController : UITableViewController {
    NSNumberFormatter *_numberFormatter;
    WBSKnownTrackingThirdParty *_tracker;
    UIView *_header;
}




-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithTracker:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_updateHeaderSize;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewLayoutMarginsDidChange;


@end


#endif