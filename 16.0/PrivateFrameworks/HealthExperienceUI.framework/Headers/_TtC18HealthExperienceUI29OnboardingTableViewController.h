// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI29ONBOARDINGTABLEVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI29ONBOARDINGTABLEVIEWCONTROLLER_H

@class OBTableWelcomeController;



@interface _TtC18HealthExperienceUI29OnboardingTableViewController : OBTableWelcomeController {
    ? dataSourceAdaptor;
    ? dataSource;
    ? tableViewStyle;
    ? allowAnimations;
    ? useSystemMargins;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif