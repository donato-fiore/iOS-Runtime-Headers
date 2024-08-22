// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI39ONBOARDINGREGIONSELECTIONVIEWCONTROLLER_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI39ONBOARDINGREGIONSELECTIONVIEWCONTROLLER_H

@class UIViewController;
@protocol UITableViewDataSource, UITableViewDelegate;



@interface _TtC28HealthExposureNotificationUI39OnboardingRegionSelectionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

 {
    ? flow;
    ? selectionType;
    ? statusView;
    ? regionTableView;
    ? regionsProvider;
}




-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)didTapCancel;
-(void)didTapDone;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif