// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFACCOUNTTABLEVIEWCONTROLLER_H
#define _SFACCOUNTTABLEVIEWCONTROLLER_H

@class UITableViewController, NSCountedSet, NSString, WBSSavedAccount, UISearchController;
@protocol UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, SFAccountDetailViewControllerDelegate, _SFAccountIconControllerDelegate, _SFAccountManagerLockableContentContainer;


#import "_SFAccountTableConfiguration.h"
#import "_SFAccountIconController.h"

@interface _SFAccountTableViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, SFAccountDetailViewControllerDelegate, _SFAccountIconControllerDelegate, _SFAccountManagerLockableContentContainer>

 {
    NSCountedSet *_visibleDomains;
    _SFAccountTableConfiguration *_configuration;
    BOOL _isAuthenticatingForOneTimeSharing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _SFAccountIconController *iconController; // ivar: _iconController
@property (retain, nonatomic) WBSSavedAccount *savedAccountToRemoveAfterCompletedUpgradeInDetailView;
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (readonly, nonatomic) NSString *searchPattern; // ivar: _searchPattern
@property (retain, nonatomic) NSString *searchQuery;
@property (readonly, nonatomic) BOOL shouldSuppressAccountManagerLockedView;
@property (nonatomic, getter=isShowingAccountManagerLockedView) BOOL showingAccountManagerLockedView;
@property (readonly) Class superclass;


-(BOOL)_hasMarkedText;
-(BOOL)_shouldShowToolbarWhenSearching;
-(BOOL)_shouldUseStackedSearchBarPlacement;
-(NSInteger)positionForBar:(id)arg0 ;
-(id)iconControllerForAccountDetailViewController:(id)arg0 ;
-(id)initWithSiteMetadataManager:(id)arg0 configuration:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(void)_sceneDidEnterBackground:(id)arg0 ;
-(void)_shareSavedAccount:(id)arg0 authenticationContext:(id)arg1 modalPresentationSourceView:(id)arg2 ;
-(void)_shareSavedAccount:(id)arg0 modalPresentationSourceView:(id)arg1 ;
-(void)_updateIconForDomain:(id)arg0 forCell:(id)arg1 ;
-(void)handleContextMenuDeleteForIndexPath:(id)arg0 ;
-(void)handleIconDidUpdateForDomain:(id)arg0 ;
-(void)iconDidUpdateForDomain:(id)arg0 iconController:(id)arg1 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willDismissSearchController:(id)arg0 ;
-(void)willPresentSearchController:(id)arg0 ;


@end


#endif