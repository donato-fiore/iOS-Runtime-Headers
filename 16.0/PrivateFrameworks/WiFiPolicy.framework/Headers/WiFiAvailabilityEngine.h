// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIAVAILABILITYENGINE_H
#define WIFIAVAILABILITYENGINE_H

@class NSSet;
@protocol WiFiLocationProvider, OS_dispatch_queue, WiFiScanProvider;

#import <Foundation/Foundation.h>

#import "WiFiLexicon.h"

@interface WiFiAvailabilityEngine : NSObject

@property (copy, nonatomic) id *availabilityChangedCallback; // ivar: _availabilityChangedCallback
@property (nonatomic) CGFloat availabilityMatchMaximumAge; // ivar: _availabilityMatchMaximumAge
@property (retain, nonatomic) NSSet *availableNetworks; // ivar: _availableNetworks
@property (weak, nonatomic) NSObject<WiFiLocationProvider> *locationProvider; // ivar: _locationProvider
@property (copy, nonatomic) NSSet *providers; // ivar: _providers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (weak, nonatomic) NSObject<WiFiScanProvider> *scanProvider; // ivar: _scanProvider
@property (copy, nonatomic) NSSet *sources; // ivar: _sources
@property (retain, nonatomic) WiFiLexicon *wifiLexicon; // ivar: _wifiLexicon


-(id)_createAvailabilityMatchForCandidate:(id)arg0 scannedNetwork:(id)arg1 ;
-(id)_findExistingAvailabilityMatchForScannedNetwork:(id)arg0 ;
-(id)_findRelevantNetworkMatchForScannedNetwork:(id)arg0 ;
-(id)findRecommendationForScannedNetwork:(id)arg0 ;
-(id)findRecommendationsForScannedNetwork:(id)arg0 ;
-(id)initWithProviders:(id)arg0 sources:(id)arg1 ;
-(void)_findAvailabilityMatchesInSourcesForBSSIDS:(id)arg0 ;
-(void)_handle3BarsRelevancyAdded:(id)arg0 removed:(id)arg1 ;
-(void)_handleCandidateMatches:(id)arg0 ;
-(void)_handleScanResultCallback:(id)arg0 error:(id)arg1 ;
-(void)_handleWalletRelevancyAdded:(id)arg0 removed:(id)arg1 ;
-(void)_removeStaleMatches;
-(void)_setupProviderCallbacks:(id)arg0 ;
-(void)_setupSourceCallbacks:(id)arg0 ;


@end


#endif