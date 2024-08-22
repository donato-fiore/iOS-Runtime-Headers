// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKSHAREEVIEWCONTROLLER_H
#define EKSHAREEVIEWCONTROLLER_H

@class UITableViewController, UIAlertController, EKSharee;
@protocol EKShareeViewControllerDelegate;



@interface EKShareeViewController : UITableViewController {
    UIAlertController *_removeAlertController;
}


@property (nonatomic) BOOL allowEditing; // ivar: _allowEditing
@property (nonatomic) BOOL allowResendInvitations; // ivar: _allowResendInvitations
@property (nonatomic) BOOL allowStopSharing; // ivar: _allowStopSharing
@property (weak, nonatomic) NSObject<EKShareeViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) EKSharee *sharee; // ivar: _sharee


-(BOOL)_shouldDisplayResendInvitationButton;
-(BOOL)_shouldDisplayStopSharingButton;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_rowForSubitem:(int)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithSharee:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(int)_subitemAtRow:(NSInteger)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)_allowEditingChanged:(id)arg0 ;
-(void)_reloadTitle;
-(void)loadView;
-(void)removeClicked:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif