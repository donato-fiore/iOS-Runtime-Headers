// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVPSTOREFPSKEYLOADER_H
#define TVPSTOREFPSKEYLOADER_H

@class NSURL, NSString, NSError, NSMutableArray, NSNumber;
@protocol TVPSecureKeyDeliveryCoordinatorDelegate, TVPSecureKeyLoaderDelegate, TVPStoreFPSKeyLoaderDelegate;

#import <Foundation/Foundation.h>

#import "TVPPlaybackReportingEventCollection.h"
#import "TVPSecureKeyStandardLoader.h"
#import "TVPSecureKeyDeliveryCoordinator.h"

@interface TVPStoreFPSKeyLoader : NSObject <TVPSecureKeyDeliveryCoordinatorDelegate, TVPSecureKeyLoaderDelegate>



@property (copy, nonatomic) NSURL *certificateDataURL; // ivar: _certificateDataURL
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVPStoreFPSKeyLoaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSkipRentalCheckout; // ivar: _didSkipRentalCheckout
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection; // ivar: _eventCollection
@property (retain, nonatomic) TVPSecureKeyStandardLoader *fpsCertLoader; // ivar: _fpsCertLoader
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL holdKeyResponses; // ivar: _holdKeyResponses
@property (nonatomic) BOOL includeGUID; // ivar: _includeGUID
@property (copy, nonatomic) NSURL *keyDataURL; // ivar: _keyDataURL
@property (retain, nonatomic) NSMutableArray *pendingKeyRequests; // ivar: _pendingKeyRequests
@property (retain, nonatomic) NSNumber *rentalID; // ivar: _rentalID
@property (nonatomic) BOOL requiresExternalEntitlementCheck; // ivar: _requiresExternalEntitlementCheck
@property (retain, nonatomic) TVPSecureKeyDeliveryCoordinator *secureKeyDeliveryCoordinator; // ivar: _secureKeyDeliveryCoordinator
@property (retain, nonatomic) TVPSecureKeyStandardLoader *secureKeyStandardLoader; // ivar: _secureKeyStandardLoader
@property (retain, nonatomic) NSString *serviceProviderID; // ivar: _serviceProviderID
@property (readonly) Class superclass;


+(void)initialize;
+(void)preFetchFPSCertificate;
-(id)initWithCertificateDataURL:(id)arg0 keyDataURL:(id)arg1 ;
-(void)_failPendingKeyRequestsWithError:(id)arg0 ;
-(void)_preFetchFPSCertificate;
-(void)loadSecureKeyRequest:(id)arg0 ;
-(void)secureKeyDeliveryCoordinator:(id)arg0 didReceiveOfflineKeyData:(id)arg1 forKeyRequest:(id)arg2 ;
-(void)secureKeyDeliveryCoordinator:(id)arg0 didReceiveUpdatedRentalExpirationDate:(id)arg1 ;
-(void)secureKeyDeliveryCoordinator:(id)arg0 didReceiveUpdatedRentalExpirationDate:(id)arg1 playbackStartDate:(id)arg2 ;
-(void)secureKeyDeliveryCoordinator:(id)arg0 didReceiveUpdatedRentalPlaybackStartDate:(id)arg1 ;
-(void)secureKeyDeliveryCoordinator:(id)arg0 willFailWithError:(id)arg1 ;
-(void)secureKeyDeliveryCoordinator:(id)arg0 willFailWithError:(id)arg1 forKeyRequest:(id)arg2 ;
-(void)secureKeyDeliveryCoordinatorWillSucceed:(id)arg0 ;
-(void)secureKeyDeliveryCoordinatorWillSucceed:(id)arg0 forKeyRequest:(id)arg1 ;
-(void)secureKeyLoader:(id)arg0 didFailWithError:(id)arg1 forRequest:(id)arg2 ;
-(void)secureKeyLoader:(id)arg0 didLoadCertificateData:(id)arg1 forRequest:(id)arg2 ;
-(void)secureKeyLoader:(id)arg0 didLoadContentIdentifierData:(id)arg1 forRequest:(id)arg2 ;
-(void)secureKeyLoader:(id)arg0 didLoadKeyResponseData:(id)arg1 renewalDate:(id)arg2 forRequest:(id)arg3 ;
-(void)secureKeyLoader:(id)arg0 didReceiveUpdatedRentalExpirationDate:(id)arg1 ;
-(void)sendStopRequest;


@end


#endif