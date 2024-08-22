// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15HEALTHRECORDSUI28ONBOARDINGTILEVIEWCONTROLLER_H
#define _TTC15HEALTHRECORDSUI28ONBOARDINGTILEVIEWCONTROLLER_H

@class HKTableViewController;



@interface _TtC15HealthRecordsUI28OnboardingTileViewController : HKTableViewController {
    ? profile;
}




-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)initWithUsingInsetStyling:(BOOL)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)closeButtonTapped;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tapToRadar:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif