// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CERTINFOTRUSTSUMMARYCONTROLLER_H
#define CERTINFOTRUSTSUMMARYCONTROLLER_H

@class UITableViewController, UIBarButtonItem, UITableViewCell;
@protocol CertInfoTrustDescription, CertInfoTrustSummaryControllerDelegate;



@interface CertInfoTrustSummaryController : UITableViewController {
    id<CertInfoTrustDescription> *_description;
    UIBarButtonItem *_doneButton;
    UITableViewCell *_headerCell;
    UITableViewCell *_descriptionCell;
    BOOL _showsDoneButton;
}


@property (weak, nonatomic) NSObject<CertInfoTrustSummaryControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL showsDoneButton;


-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cellForReuseIdentifier:(id)arg0 ;
-(id)_descriptionCell;
-(id)_headerCell;
-(id)initWithTrustDescription:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_actionButtonPressed:(id)arg0 ;
-(void)_doneButtonPressed:(id)arg0 ;
-(void)setActionButtonTitle:(id)arg0 destructive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif