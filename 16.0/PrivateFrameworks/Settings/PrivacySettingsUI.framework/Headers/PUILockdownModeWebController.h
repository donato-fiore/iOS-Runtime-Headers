// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUILOCKDOWNMODEWEBCONTROLLER_H
#define PUILOCKDOWNMODEWEBCONTROLLER_H

@class PSListController, NSArray, NSString, UISearchController;
@protocol UISearchResultsUpdating;



@interface PUILockdownModeWebController : PSListController <UISearchResultsUpdating>



@property (retain, nonatomic) NSArray *_allSpecifiers; // ivar: __allSpecifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (readonly) Class superclass;


-(BOOL)shouldReloadSpecifiersOnResume;
-(BOOL)shouldShowBundleID:(id)arg0 ;
-(id)init;
-(id)isSpecifierEnabled:(id)arg0 ;
-(id)safariSettingsBundle;
-(id)specifiers;
-(void)dataDidChange;
-(void)dealloc;
-(void)didBecomeActive;
-(void)didTapHeaderLearnMoreLink:(id)arg0 ;
-(void)presentAboutController;
-(void)refreshLinkStatusInParent;
-(void)reloadSpecifiers;
-(void)setAppLockdownModeEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif