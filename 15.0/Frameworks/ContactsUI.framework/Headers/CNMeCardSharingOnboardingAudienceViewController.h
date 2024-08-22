// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNMECARDSHARINGONBOARDINGAUDIENCEVIEWCONTROLLER_H
#define CNMECARDSHARINGONBOARDINGAUDIENCEVIEWCONTROLLER_H

@class NSString;
@protocol UITableViewDelegate, UITableViewDataSource, CNMeCardSharingOnboardingAudienceViewControllerDelegate;


#import "CNMeCardSharingOnboardingViewController.h"
#import "CNMeCardSharingOnboardingHeaderViewController.h"
#import "CNMeCardSharingAudienceDataSource.h"

@interface CNMeCardSharingOnboardingAudienceViewController : CNMeCardSharingOnboardingViewController <UITableViewDelegate, UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNMeCardSharingOnboardingAudienceViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNMeCardSharingOnboardingHeaderViewController *headerViewController; // ivar: _headerViewController
@property (retain, nonatomic) CNMeCardSharingAudienceDataSource *sharingAudienceDataSource; // ivar: _sharingAudienceDataSource
@property (readonly) Class superclass;


+(id)headerText;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithSelectedSharingAudience:(NSUInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)handleConfirmButtonTapped;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif