// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIACTIVITYUSERDEFAULTSVIEWCONTROLLER_H
#define _UIACTIVITYUSERDEFAULTSVIEWCONTROLLER_H

@class UIViewController, NSArray, NSDictionary, UIVisualEffectView, NSDiffableDataSourceSnapshot, NSString, NSMutableDictionary, UIImage, UITableView;
@protocol _UIActivityUserDefaultsDataSourceProxy, UITableViewDelegate, _UIActivityUserDefaultsViewControllerDelegate;


#import "_UIActivityUserDefaultsDataSource.h"
#import "_UIActivityUserDefaults.h"

@interface _UIActivityUserDefaultsViewController : UIViewController <_UIActivityUserDefaultsDataSourceProxy, UITableViewDelegate>



@property (copy, nonatomic) NSArray *activities; // ivar: _activities
@property (retain, nonatomic) NSDictionary *activitiesByUUID; // ivar: _activitiesByUUID
@property (nonatomic) NSInteger activityCategory; // ivar: _activityCategory
@property (retain, nonatomic) NSArray *applicationActivities; // ivar: _applicationActivities
@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot; // ivar: _currentSnapshot
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _UIActivityUserDefaultsDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (copy, nonatomic) NSArray *excludedActivityTypes; // ivar: _excludedActivityTypes
@property (retain, nonatomic) NSMutableDictionary *favoritesByUUID; // ivar: _favoritesByUUID
@property (copy, nonatomic) NSArray *favoritesProxies; // ivar: _favoritesProxies
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *orderedUUIDs; // ivar: _orderedUUIDs
@property (retain, nonatomic) UIImage *placeholderImage; // ivar: _placeholderImage
@property (copy, nonatomic) NSArray *suggestionProxies; // ivar: _suggestionProxies
@property (retain, nonatomic) NSMutableDictionary *suggestionsByUUID; // ivar: _suggestionsByUUID
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) _UIActivityUserDefaults *userDefaults; // ivar: _userDefaults
@property (weak, nonatomic) NSObject<_UIActivityUserDefaultsViewControllerDelegate> *userDefaultsDelegate; // ivar: _userDefaultsDelegate


-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(NSInteger)preferredActivityCategory;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)activityForRowAtIndexPath:(id)arg0 ;
-(id)cellForItemIdentifier:(id)arg0 ;
-(id)initWithActivities:(id)arg0 userDefaults:(id)arg1 ;
-(id)initWithFavoritesProxies:(id)arg0 suggestionProxies:(id)arg1 activitiesByUUID:(id)arg2 applicationActivities:(id)arg3 orderedUUIDs:(id)arg4 excludedActivityTypes:(id)arg5 activityCategory:(NSInteger)arg6 ;
-(id)tableView:(id)arg0 targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)configureSwitchForCell:(id)arg0 activityProxy:(id)arg1 ;
-(void)dismissUserDefaults;
-(void)doneEditingUserDefaults;
-(void)editUserDefaults;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didHighlightRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didUnhighlightRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)toggleActivityHiddenForControl:(id)arg0 ;
-(void)toggleActivityHiddenForRowAtIndexPath:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateUserDefaultsAnimated:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif