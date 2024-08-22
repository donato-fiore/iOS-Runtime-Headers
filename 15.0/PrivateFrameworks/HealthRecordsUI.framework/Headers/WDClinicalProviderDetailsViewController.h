// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDCLINICALPROVIDERDETAILSVIEWCONTROLLER_H
#define WDCLINICALPROVIDERDETAILSVIEWCONTROLLER_H

@class HKTableViewController, NSArray, NSString, HKClinicalProvider, NSCache, HKClinicalProviderSearchResult;
@protocol HRWDUserActivityResponder;


#import "HRProfile.h"
#import "HRWDSpinnerView.h"

@interface WDClinicalProviderDetailsViewController : HKTableViewController <HRWDUserActivityResponder>



@property (retain, nonatomic) NSArray *connectedGateways; // ivar: _connectedGateways
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger fetchesInFlight; // ivar: _fetchesInFlight
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HRProfile *profile; // ivar: _profile
@property (retain, nonatomic) HKClinicalProvider *provider; // ivar: _provider
@property (retain, nonatomic) NSCache *providerCache; // ivar: _providerCache
@property (retain, nonatomic) HKClinicalProviderSearchResult *searchResult; // ivar: _searchResult
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (retain, nonatomic) HRWDSpinnerView *spinnerView; // ivar: _spinnerView
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *unconnectedGateways; // ivar: _unconnectedGateways


-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_gatewayAtIndexPath:(id)arg0 ;
-(id)_initWithProfile:(id)arg0 ;
-(id)_orderGatewaysForDisplay:(id)arg0 ;
-(id)applyTransitionActivity:(id)arg0 ;
-(id)initWithProfile:(id)arg0 provider:(id)arg1 ;
-(id)initWithProfile:(id)arg0 searchResult:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_computeSections;
-(void)_fetchDetailsForSearchResult:(id)arg0 ;
-(void)_handleTapForActivateGateway:(id)arg0 ;
-(void)_presentError:(id)arg0 ;
-(void)_presentUnavailableAlertForGatewayTitle:(id)arg0 ;
-(void)applyChangeActivity:(id)arg0 ;
-(void)removeSpinnerIfNecessary;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif