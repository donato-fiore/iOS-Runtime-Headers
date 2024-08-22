// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSLISTITEMSCONTROLLER_H
#define PSLISTITEMSCONTROLLER_H



#import "PSListController.h"
#import "PSSpecifier.h"

@interface PSListItemsController : PSListController {
    NSInteger _rowToSelect;
    BOOL _deferItemSelection;
    BOOL _restrictionList;
    PSSpecifier *_lastSelectedSpecifier;
    id *_retainedTarget;
}




-(BOOL)isRestrictionList;
-(id)identifierForValue:(id)arg0 ;
-(id)itemsFromDataSource;
-(id)itemsFromParent;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_addStaticText:(id)arg0 ;
-(void)dealloc;
-(void)didLock;
-(void)listItemSelected:(id)arg0 ;
-(void)prepareSpecifiersMetadata;
-(void)scrollToSelectedCell;
-(void)setIsRestrictionList:(BOOL)arg0 ;
-(void)setRowToSelect;
-(void)setValueForSpecifier:(id)arg0 defaultValue:(id)arg1 ;
-(void)suspend;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willEnterForeground;


@end


#endif