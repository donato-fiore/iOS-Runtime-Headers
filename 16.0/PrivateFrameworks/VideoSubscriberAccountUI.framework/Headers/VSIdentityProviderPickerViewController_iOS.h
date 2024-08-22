// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSIDENTITYPROVIDERPICKERVIEWCONTROLLER_IOS_H
#define VSIDENTITYPROVIDERPICKERVIEWCONTROLLER_IOS_H

@class UITableViewController, NSArray, NSString, NSDictionary, UISearchController, VSIdentityProvider;
@protocol VSTableHeaderFooterViewDelegate, VSIdentityProviderPickerViewController, VSIdentityProviderPickerViewControllerDelegate;


#import "VSIdentityProviderFilter.h"
#import "VSIdentityProviderTableViewDataSource.h"
#import "VSFontCenter.h"
#import "VSOnboardingInfoCenter.h"
#import "VSSearchBarDelegate.h"
#import "VSStorefrontFilter.h"

@interface VSIdentityProviderPickerViewController_iOS : UITableViewController <VSTableHeaderFooterViewDelegate, VSIdentityProviderPickerViewController>



@property (nonatomic) NSUInteger additionalProvidersMode; // ivar: _additionalProvidersMode
@property (copy, nonatomic) NSArray *allStorefronts; // ivar: _allStorefronts
@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed; // ivar: _cancellationAllowed
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSIdentityProviderPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VSIdentityProviderFilter *filter; // ivar: _filter
@property (retain, nonatomic) VSIdentityProviderTableViewDataSource *filteredDataSource; // ivar: _filteredDataSource
@property (retain, nonatomic) VSFontCenter *fontCenter; // ivar: _fontCenter
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *identityProviders; // ivar: _identityProviders
@property (retain, nonatomic) NSArray *identityProvidersToDisplay; // ivar: _identityProvidersToDisplay
@property (retain, nonatomic) VSOnboardingInfoCenter *onboardingInfoCenter; // ivar: _onboardingInfoCenter
@property (retain, nonatomic) NSDictionary *providersByStorefrontCountryCode; // ivar: _providersByStorefrontCountryCode
@property (copy, nonatomic) NSString *requestedStorefrontCountryCode; // ivar: _requestedStorefrontCountryCode
@property (copy, nonatomic) NSString *requestingAppDisplayName; // ivar: _requestingAppDisplayName
@property (copy, nonatomic) NSString *resourceTitle; // ivar: _resourceTitle
@property (retain, nonatomic) VSSearchBarDelegate *searchBarDelegate; // ivar: _searchBarDelegate
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (retain, nonatomic) NSString *searchString; // ivar: _searchString
@property (nonatomic) BOOL sectionContentInsetInitialized; // ivar: _sectionContentInsetInitialized
@property (retain, nonatomic) VSIdentityProvider *selectedIdentityProvider; // ivar: _selectedIdentityProvider
@property (retain, nonatomic) VSStorefrontFilter *storefrontFilter; // ivar: _storefrontFilter
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *tvProviderSupportedStorefronts; // ivar: _tvProviderSupportedStorefronts
@property (retain, nonatomic) VSIdentityProviderTableViewDataSource *unfilteredDataSource; // ivar: _unfilteredDataSource


-(BOOL)_shouldInsetListView;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(id)_titleForTableHeaderView;
-(id)_titleForViewController;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)titleForTableFooterView;
-(void)_cancelButtonPressed:(id)arg0 ;
-(void)_didPickAdditionalIdentityProviders;
-(void)_didPickIdentityProvider:(id)arg0 ;
-(void)_didPickStorefront:(id)arg0 ;
-(void)_dismissSearchController;
-(void)_performSelectionForIdentityProvider:(id)arg0 ;
-(void)_showAboutPrivacy:(id)arg0 ;
-(void)_updateSectionContentInsetWithAnimation:(BOOL)arg0 ;
-(void)_updateTableHeaderTitle;
-(void)deselectSelectedProviderAnimated:(BOOL)arg0 ;
-(void)didInvalidateIntrinsicContentSizeForTableHeaderFooterView:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableViewDidFinishReload:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif