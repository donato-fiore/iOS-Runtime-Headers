// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFACCOUNTTABLEVIEWCONTROLLER_H
#define _SFACCOUNTTABLEVIEWCONTROLLER_H

@class UITableViewController, NSCountedSet, NSString, WBSSavedAccount, UISearchController;
@protocol UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, SFAccountDetailViewControllerDelegate, _SFAccountIconControllerDelegate;


#import "_SFAccountIconController.h"
#import "_SFAccountTableConfiguration.h"

@interface _SFAccountTableViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, SFAccountDetailViewControllerDelegate, _SFAccountIconControllerDelegate>

 {
    _SFAccountIconController *_iconController;
    NSCountedSet *_visibleDomains;
    _SFAccountTableConfiguration *_configuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WBSSavedAccount *savedAccountToRemoveAfterCompletedUpgradeInDetailView;
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (readonly, nonatomic) NSString *searchPattern; // ivar: _searchPattern
@property (retain, nonatomic) NSString *searchQuery;
@property (readonly) Class superclass;


-(BOOL)_hasMarkedText;
-(BOOL)tableView:(id)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)tableView:(id)arg0 shouldShowMenuForRowAtIndexPath:(id)arg1 ;
-(NSInteger)positionForBar:(id)arg0 ;
-(id)_tableView:(id)arg0 previewForIndexPath:(id)arg1 ;
-(id)iconControllerForAccountDetailViewController:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 siteMetadataManager:(id)arg1 configuration:(id)arg2 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 previewForDismissingContextMenuWithConfiguration:(id)arg1 ;
-(id)tableView:(id)arg0 previewForHighlightingContextMenuWithConfiguration:(id)arg1 ;
-(void)_sceneDidEnterBackground:(id)arg0 ;
-(void)_updateIconForDomain:(id)arg0 forCell:(id)arg1 ;
-(void)handleContextMenuDeleteForIndexPath:(id)arg0 ;
-(void)iconDidUpdateForDomain:(id)arg0 iconController:(id)arg1 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)shareSavedAccount:(id)arg0 modalPresentationSourceView:(id)arg1 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
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