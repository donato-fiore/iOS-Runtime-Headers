// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKENHANCEDMERCHANTSLISTSECTIONCONTROLLER_H
#define PKENHANCEDMERCHANTSLISTSECTIONCONTROLLER_H

@class PKAccountEnhancedMerchantsFetcher, NSUUID, CLLocationManager, CLLocation, UICollectionViewCellRegistration, NSString, NSArray;
@protocol PKEnhancedMerchantCellDelegate, CLLocationManagerDelegate, PKDynamicSectionController, PKViewControllerPreflightable, PKRewardsHubSectionControllerDelegate;

#import <Foundation/Foundation.h>

#import "_PKPendingEnhancedMerchantNearbyLocationSearch.h"

@interface PKEnhancedMerchantsListSectionController : NSObject <PKEnhancedMerchantCellDelegate, CLLocationManagerDelegate, PKDynamicSectionController, PKViewControllerPreflightable>

 {
    PKAccountEnhancedMerchantsFetcher *_fetcher;
    id<PKRewardsHubSectionControllerDelegate> *_delegate;
    NSUUID *_merchantsUpdateToken;
    CLLocationManager *_locationManager;
    CLLocation *_lastValidLocation;
    _PKPendingEnhancedMerchantNearbyLocationSearch *_pendingMerchantLocationSearch;
}


@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration; // ivar: _cellRegistration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (readonly) Class superclass;


-(BOOL)shouldHighlightItem:(id)arg0 ;
-(Class)supplementaryRegistrationClassForKind:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)_disclosuresCellRegistration;
-(id)_genericDisplayableErrorForError:(id)arg0 ;
-(id)_merchantListCellRegistration;
-(id)cellRegistrationForItem:(id)arg0 ;
-(id)initWithSectionIdentifiers:(id)arg0 fetcher:(id)arg1 delegate:(id)arg2 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)merchantForPrivateIdentifier:(id)arg0 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_openMapsForMerchantSearch:(id)arg0 ;
-(void)_performNearbyLocationsSearch:(id)arg0 deviceLocation:(id)arg1 ;
-(void)_presentError:(id)arg0 ;
-(void)_reportEventIfNecessaryForButtonTapWithTag:(id)arg0 merchant:(id)arg1 ;
-(void)_requestLocationUpdateIfPossible;
-(void)_stopUpdatingLocation;
-(void)_updateCellBasedOnCurrentSearch:(id)arg0 ;
-(void)configureSupplementaryRegistration:(id)arg0 elementKind:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)performAction:(NSInteger)arg0 forEnhancedMerchant:(id)arg1 sender:(id)arg2 ;
-(void)preflightWithCompletion:(id)arg0 ;


@end


#endif