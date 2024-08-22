// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKORGANDONATIONCONFIRMATIONVIEWCONTROLLER_H
#define HKORGANDONATIONCONFIRMATIONVIEWCONTROLLER_H

@class UIView, UIVisualEffectView, UIFont, NSString, NSArray, UIActivityIndicatorView, _HKMedicalIDData, UIButton, UITableView;
@protocol HKTitledBuddyHeaderViewDelegate, UITableViewDelegate, UITableViewDataSource;


#import "HKViewController.h"
#import "HKOrganDonationConnectionManager.h"
#import "HKOrganDonationRegistrant.h"

@interface HKOrganDonationConfirmationViewController : HKViewController <HKTitledBuddyHeaderViewDelegate, UITableViewDelegate, UITableViewDataSource>

 {
    HKOrganDonationConnectionManager *_connectionManager;
    HKOrganDonationRegistrant *_registrant;
    UIView *_headerView;
    UIVisualEffectView *_footerView;
    UIFont *_bodyFont;
}


@property (retain, nonatomic) NSString *completionButtonTitle; // ivar: _completionButtonTitle
@property (retain, nonatomic) NSArray *dataEntryItems; // ivar: _dataEntryItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // ivar: _loadingIndicator
@property (retain, nonatomic) _HKMedicalIDData *medicalIDData; // ivar: _medicalIDData
@property (copy, nonatomic) id *registrationCompletionHandler; // ivar: _registrationCompletionHandler
@property (retain, nonatomic) UIButton *submitButton; // ivar: _submitButton
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_createTableFooterView;
-(id)_createTableHeaderView;
-(id)initWithRegistrant:(id)arg0 medicalIDData:(id)arg1 connectionManager:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
// -(void)confirmSubmissionIfNecessaryWithConfirmHandler:(id)arg0 andCancelHandler:(unk)arg1  ;
-(void)submitButtonTapped:(id)arg0 ;
-(void)titledBuddyHeaderViewDidTapLinkButton:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif