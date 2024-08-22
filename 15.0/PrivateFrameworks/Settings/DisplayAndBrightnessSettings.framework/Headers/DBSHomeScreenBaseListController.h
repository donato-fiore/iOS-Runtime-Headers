// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DBSHOMESCREENBASELISTCONTROLLER_H
#define DBSHOMESCREENBASELISTCONTROLLER_H

@class PSListController, SBSHomeScreenService;



@interface DBSHomeScreenBaseListController : PSListController

@property (readonly, nonatomic) SBSHomeScreenService *_homeScreenService; // ivar: __homeScreenService


-(id)init;
-(id)showsBadgesInAppLibrary:(id)arg0 ;
-(id)specifiers;
-(void)setShowsBadgesInAppLibrary:(id)arg0 specifier:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif