// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUGROUPEDEXTERNALACTIONCONTROLLER_H
#define MUGROUPEDEXTERNALACTIONCONTROLLER_H

@class NSArray, GEOPlaceExternalAction;
@protocol MUExternalActionHandling, MUExternalActionAnalyticsHandling;

#import <Foundation/Foundation.h>

#import "MUVendorLinkSorter.h"
#import "MUPlaceExtensionDiscoveryManager.h"
#import "MUAMSResultProvider.h"

@interface MUGroupedExternalActionController : NSObject {
    id<MUExternalActionHandling> *_actionHandler;
    id<MUExternalActionAnalyticsHandling> *_analyticsHandler;
    NSArray *_viewModels;
    MUVendorLinkSorter *_vendorLinkSorter;
    MUPlaceExtensionDiscoveryManager *_extensionDiscoveryManager;
    MUAMSResultProvider *_amsResultProvider;
}


@property (nonatomic) NSInteger analyticsModuleType; // ivar: _analyticsModuleType
@property (readonly, nonatomic) GEOPlaceExternalAction *externalAction; // ivar: _externalAction
@property (readonly, nonatomic) BOOL hasMultipleVendorsForAnalytics;
@property (nonatomic) int multipleVendorAnalyticsTarget; // ivar: _multipleVendorAnalyticsTarget
@property (readonly, nonatomic) int resolvedAnalyticsTarget;
@property (nonatomic) int singleVendorAnalyticsTarget; // ivar: _singleVendorAnalyticsTarget
@property (nonatomic) NSInteger source; // ivar: _source
@property (readonly, nonatomic) BOOL supportsMultipleVendorSelection; // ivar: _supportsMultipleVendorSelection


-(id)_viewModelsWithSortApplied;
-(id)initWithGroupedExternalAction:(id)arg0 amsResultProvider:(id)arg1 supportsMultipleVendorSelection:(BOOL)arg2 actionHandler:(id)arg3 analyticsHandler:(id)arg4 ;
-(void)_executeBestIntegrationForProvider:(id)arg0 index:(NSUInteger)arg1 ;
-(void)_openMapsExtensionUsingExtensionParams:(id)arg0 handlingOptions:(id)arg1 ;
-(void)captureGroupedMenuRevealAnalyticsIfNeededWithIsQuickAction:(BOOL)arg0 ;
-(void)fetchProviderLockupsWithCompletion:(id)arg0 ;
-(void)openFirstPartnerAction;
-(void)openPartnerActionUsingViewModel:(id)arg0 ;


@end


#endif