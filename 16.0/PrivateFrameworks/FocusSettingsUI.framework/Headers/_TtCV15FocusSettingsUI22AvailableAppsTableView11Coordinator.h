// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCV15FOCUSSETTINGSUI22AVAILABLEAPPSTABLEVIEW11COORDINATOR_H
#define _TTCV15FOCUSSETTINGSUI22AVAILABLEAPPSTABLEVIEW11COORDINATOR_H

@protocol UITableViewDataSource, UITableViewDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV15FocusSettingsUI22AvailableAppsTableView11Coordinator : NSObject <UITableViewDataSource, UITableViewDelegate>

 {
    ? availableApps;
    ? excludedApps;
    ? _selectedApps;
    ? iconCache;
    ? showCheckmarks;
    ? collation;
    ? sections;
}




-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 sectionForSectionIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)init;
-(id)sectionIndexTitlesForTableView:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif