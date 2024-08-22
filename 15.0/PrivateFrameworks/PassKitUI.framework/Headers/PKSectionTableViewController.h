// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSECTIONTABLEVIEWCONTROLLER_H
#define PKSECTIONTABLEVIEWCONTROLLER_H

@class UITableViewController;



@interface PKSectionTableViewController : UITableViewController {
    NSUInteger _numberOfSections;
    ? _currentMap;
    ? _bufferedMap;
}


@property (nonatomic) BOOL skipSetupForReadableContentGuide; // ivar: _skipSetupForReadableContentGuide


-(BOOL)_recomputeMappedSections;
-(BOOL)isMappingValid;
-(BOOL)isSectionMapped:(NSUInteger)arg0 ;
-(BOOL)recomputeMappedSectionsAndReloadSections:(id)arg0 ;
-(BOOL)reloadData;
-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)rowAnimationForDeletingSection:(NSUInteger)arg0 ;
-(NSInteger)rowAnimationForInsertingSection:(NSUInteger)arg0 ;
-(NSInteger)rowAnimationForReloadingSection:(NSUInteger)arg0 ;
-(NSUInteger)indexForSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfMappedSections;
-(NSUInteger)sectionForIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 numberOfSections:(NSUInteger)arg1 ;
-(void)_swapBuffers;
-(void)dealloc;
-(void)reloadRow:(NSInteger)arg0 inSection:(NSUInteger)arg1 ;
-(void)reloadRows:(id)arg0 inSection:(NSUInteger)arg1 ;
-(void)reloadSection:(NSUInteger)arg0 ;
-(void)reloadSections:(id)arg0 ;
-(void)updateSectionVisibilityAndReloadIfNecessaryForAllSections;
-(void)updateSectionVisibilityAndReloadIfNecessaryForSection:(NSUInteger)arg0 ;
-(void)updateSectionVisibilityAndReloadIfNecessaryForSections:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif