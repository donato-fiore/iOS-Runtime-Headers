// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXUISETTINGSBASELISTCONTROLLER_H
#define AXUISETTINGSBASELISTCONTROLLER_H

@class NSArray;


#import "AXUISettingsSetupCapableListController.h"

@interface AXUISettingsBaseListController : AXUISettingsSetupCapableListController

@property (retain, nonatomic) NSArray *detailItems; // ivar: _detailItems
@property (nonatomic) BOOL detailItemsHidden; // ivar: _detailItemsHidden


-(id)cellForSpecifier:(id)arg0 ;
-(id)cellForSpecifierID:(id)arg0 ;
-(id)specifierForIndexPath:(id)arg0 ;
-(id)specifierForKey:(id)arg0 ;
-(id)specifiersByRemovingDetailItemsFromOriginalSpecifiers:(id)arg0 ifHidden:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showController:(id)arg0 withSpecifier:(id)arg1 ;
-(void)updateTableCheckedSelection:(id)arg0 ;
-(void)updateVisibleCellsWithCheckedSelection:(id)arg0 ;


@end


#endif