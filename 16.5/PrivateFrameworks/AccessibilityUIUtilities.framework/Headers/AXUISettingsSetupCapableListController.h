// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXUISETTINGSSETUPCAPABLELISTCONTROLLER_H
#define AXUISETTINGSSETUPCAPABLELISTCONTROLLER_H

@class PSListController;



@interface AXUISettingsSetupCapableListController : PSListController

@property (nonatomic) BOOL inSetup; // ivar: _inSetup


-(id)createWelcomeControllerWithAXSettingsController:(id)arg0 title:(id)arg1 ;
-(id)init;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)filterBuddy:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)reload;
-(void)setAllSpecifiersUnsearchable:(id)arg0 ;
-(void)setupLongTitleSpecifiers:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif