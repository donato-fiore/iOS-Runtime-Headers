// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDCLINICALPROVIDERDETAILSVIEWCONTROLLER_H
#define WDCLINICALPROVIDERDETAILSVIEWCONTROLLER_H

@class HKTableViewController, NSArray, NSString, NSLayoutConstraint, UIView, HKClinicalProvider, NSCache, HKClinicalProviderServiceStore, HKClinicalProviderSearchResult;
@protocol HRWDUserActivityResponder;


#import "HRProfile.h"
#import "HRWDSpinnerView.h"

@interface WDClinicalProviderDetailsViewController : HKTableViewController <HRWDUserActivityResponder>



@property (copy, nonatomic) NSArray *connectedGateways; // ivar: _connectedGateways
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger fetchesInFlight; // ivar: _fetchesInFlight
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSLayoutConstraint *noContentBottomConstraint; // ivar: _noContentBottomConstraint
@property (retain, nonatomic) UIView *noContentParentView; // ivar: _noContentParentView
@property (weak, nonatomic) NSLayoutConstraint *noContentTopConstraint; // ivar: _noContentTopConstraint
@property (retain, nonatomic) HRProfile *profile; // ivar: _profile
@property (retain, nonatomic) HKClinicalProvider *provider; // ivar: _provider
@property (retain, nonatomic) NSCache *providerCache; // ivar: _providerCache
@property (readonly, nonatomic) HKClinicalProviderServiceStore *providerServiceStore; // ivar: _providerServiceStore
@property (retain, nonatomic) HKClinicalProviderSearchResult *searchResult; // ivar: _searchResult
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (retain, nonatomic) HRWDSpinnerView *spinnerView; // ivar: _spinnerView
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *unavailableGateways; // ivar: _unavailableGateways
@property (copy, nonatomic) NSArray *unconnectedGateways; // ivar: _unconnectedGateways


-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_createNoContentParentView;
-(id)_createSpinnerView;
-(id)_filterGatewaysForDisplay:(id)arg0 ;
-(id)_gatewayAtIndexPath:(id)arg0 ;
-(id)_initWithProfile:(id)arg0 ;
-(id)_orderGatewaysForDisplay:(id)arg0 ;
-(id)applyTransitionActivity:(id)arg0 ;
-(id)initWithProfile:(id)arg0 provider:(id)arg1 ;
-(id)initWithProfile:(id)arg0 searchResult:(id)arg1 ;
-(id)latestSupportedVersionOfGateway:(id)arg0 fromGateways:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_computeSections;
-(void)_fetchDetailsForSearchResult:(id)arg0 ;
-(void)_handleTapForActivateGateway:(id)arg0 ;
-(void)_hideSpinnerView;
-(void)_presentError:(id)arg0 ;
-(void)_presentUnavailableAlertForGatewayTitle:(id)arg0 ;
-(void)_showNoContentView:(id)arg0 ;
-(void)_showSpinnerView;
-(void)_updateNoContentViewConstraints;
-(void)applyChangeActivity:(id)arg0 ;
-(void)scrollViewDidChangeAdjustedContentInset:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif