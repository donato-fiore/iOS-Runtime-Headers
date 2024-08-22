// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI23SPECIFIERVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI23SPECIFIERVIEWCONTROLLER_H

@class PSListController;



@interface _TtC18HealthExperienceUI23SpecifierViewController : PSListController {
    ? dataSource;
    ? delegate;
    ? shouldReloadSpecifiersAfterSelection;
    ? shouldReloadSpecifiersOnViewWillAppear;
}




-(NSInteger)tableViewStyle;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)specifiers;
-(void)dismissNavigationController;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif