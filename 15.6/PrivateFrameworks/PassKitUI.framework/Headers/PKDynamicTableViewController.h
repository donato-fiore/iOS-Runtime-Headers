// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDYNAMICTABLEVIEWCONTROLLER_H
#define PKDYNAMICTABLEVIEWCONTROLLER_H

@class UITableViewController, NSMutableDictionary, NSMutableArray, NSArray;



@interface PKDynamicTableViewController : UITableViewController {
    NSMutableDictionary *_sectionControllerMap;
    NSMutableArray *_sectionItems;
    NSArray *_orderOfSectionIdentifiers;
}


@property (retain, nonatomic) NSArray *sectionControllers; // ivar: _sectionControllers


-(BOOL)hasSectionForSectionIdentifier:(id)arg0 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)indexOfSectionIdentifier:(id)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)rowAnimationForDeletingSection:(NSUInteger)arg0 ;
-(NSInteger)rowAnimationForInsertingSection:(NSUInteger)arg0 ;
-(NSInteger)rowAnimationForReloadingSection:(NSUInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_computeSectionControllerMap:(id)arg0 ;
-(id)_sectionControllerForSectionIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 leadingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_reloadData:(BOOL)arg0 ;
-(void)_sortMappedSectionIdentifiers:(id)arg0 ;
-(void)recomputeMappedSectionsAndReloadSections:(id)arg0 sectionIdentifiers:(id)arg1 ;
-(void)reloadRow:(NSInteger)arg0 inSectionWithSectionIdentifier:(id)arg1 ;
-(void)reloadRows:(id)arg0 inSectionWithSectionIdentifier:(id)arg1 ;
-(void)reloadSectionIdentifier:(id)arg0 ;
-(void)reloadSectionIdentifiers:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif