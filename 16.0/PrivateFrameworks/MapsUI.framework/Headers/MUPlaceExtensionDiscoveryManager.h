// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPLACEEXTENSIONDISCOVERYMANAGER_H
#define MUPLACEEXTENSIONDISCOVERYMANAGER_H

@class NSArray, NSMutableDictionary, _MXExtensionManager;

#import <Foundation/Foundation.h>

#import "MUAMSResultProvider.h"

@interface MUPlaceExtensionDiscoveryManager : NSObject {
    NSArray *_extensionDataItems;
    NSMutableDictionary *_vendorIdsByAppIds;
    NSMutableDictionary *_extensionsByAppIds;
    NSArray *_extensionDiscoveryResults;
    _MXExtensionManager *_extensionManager;
    MUAMSResultProvider *_amsResultProvider;
}


@property (readonly, nonatomic) BOOL canShowExtensionReservation; // ivar: _canShowExtensionReservation
@property (readonly, nonatomic, getter=isPerformingDiscovery) BOOL performingDiscovery; // ivar: _performingDiscovery
@property (readonly, nonatomic, getter=isReservationProviderAppInstalled) BOOL reservationProviderAppInstalled; // ivar: _reservationProviderAppInstalled


-(id)discoveryResultForDataItem:(id)arg0 ;
-(id)initWithExtensionDataItems:(id)arg0 amsResultProvider:(id)arg1 ;
-(void)_loadAppLockupExtensionGroupsUsingAppIdentifiers:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)_performExtensionDiscoveryUsingExtensionGroups:(id)arg0 usingAppIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)performExtensionDiscoveryWithOptions:(id)arg0 callbackQueue:(id)arg1 completion:(id)arg2 ;


@end


#endif