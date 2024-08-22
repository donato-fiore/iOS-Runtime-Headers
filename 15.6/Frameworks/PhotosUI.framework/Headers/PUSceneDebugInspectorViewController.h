// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSCENEDEBUGINSPECTORVIEWCONTROLLER_H
#define PUSCENEDEBUGINSPECTORVIEWCONTROLLER_H

@class UITableViewController, NSArray, NSString, NSDictionary, UIView, UIBarButtonItem;
@protocol UISearchResultsUpdating;



@interface PUSceneDebugInspectorViewController : UITableViewController <UISearchResultsUpdating>



@property (readonly, nonatomic) NSArray *currentSceneViewModels;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *groupedSceneViewModelTitles; // ivar: _groupedSceneViewModelTitles
@property (copy, nonatomic) NSDictionary *groupedSceneViewModels; // ivar: _groupedSceneViewModels
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *loadingContentView; // ivar: _loadingContentView
@property (copy, nonatomic) NSArray *sceneViewModelsAll; // ivar: _sceneViewModelsAll
@property (copy, nonatomic) NSArray *sceneViewModelsSearched; // ivar: _sceneViewModelsSearched
@property (readonly, nonatomic) UIBarButtonItem *shareButton; // ivar: _shareButton
@property (readonly, nonatomic) UIBarButtonItem *sortButton; // ivar: _sortButton
@property (readonly) Class superclass;


+(BOOL)_isAscendingForSortOrder:(NSUInteger)arg0 ;
+(id)_assetGridViewControllerForViewModel:(id)arg0 interfaceIdiom:(NSInteger)arg1 ;
+(id)_commaSeparatedValueRepresentation:(id)arg0 ;
+(id)_keyForSortOrder:(NSUInteger)arg0 ;
+(id)_sectionTitleForSceneViewModel:(id)arg0 sortOrder:(NSUInteger)arg1 ;
+(id)_shortTitlesForSectionTitles:(id)arg0 SortOrder:(NSUInteger)arg1 ;
+(id)_sortedSceneViewModels:(id)arg0 sortOrder:(NSUInteger)arg1 ;
+(id)_titleForSortOrder:(NSUInteger)arg0 ;
+(id)highestConfidenceForAsset:(id)arg0 sceneIdentifier:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)sectionIndexTitlesForTableView:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_reloadTableViewByGroupingViewModels:(id)arg0 sortOrder:(NSUInteger)arg1 ;
-(void)didSelectDoneButton:(id)arg0 ;
-(void)didSelectShareButton:(id)arg0 ;
-(void)didSelectSortButton:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif