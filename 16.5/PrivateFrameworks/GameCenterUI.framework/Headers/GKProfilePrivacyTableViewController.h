// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKPROFILEPRIVACYTABLEVIEWCONTROLLER_H
#define GKPROFILEPRIVACYTABLEVIEWCONTROLLER_H

@class UITableViewController, NSMutableArray, GKLocalPlayer;
@protocol GKProfilePrivacyTableViewControllerDelegate;



@interface GKProfilePrivacyTableViewController : UITableViewController

@property (retain, nonatomic) NSMutableArray *availblePrivacySettings; // ivar: _availblePrivacySettings
@property (nonatomic) int currentPrivacySettings; // ivar: _currentPrivacySettings
@property (weak, nonatomic) NSObject<GKProfilePrivacyTableViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) int initialPrivacySettings; // ivar: _initialPrivacySettings
@property (nonatomic) BOOL isSendingRequest; // ivar: _isSendingRequest
@property (retain, nonatomic) GKLocalPlayer *localPlayer; // ivar: _localPlayer


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableFooterForPrivacy:(int)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)titleForPrivacy:(int)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCell:(id)arg0 withCheckmark:(BOOL)arg1 ;
-(void)updateTableViewLayoutMargins;
-(void)viewDidLoad;


@end


#endif