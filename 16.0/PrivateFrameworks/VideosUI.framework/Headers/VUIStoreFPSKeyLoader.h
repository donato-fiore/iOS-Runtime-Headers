// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUISTOREFPSKEYLOADER_H
#define VUISTOREFPSKEYLOADER_H

@class NSData, NSURL, TVPContentKeySession, TVPPlaybackReportingEventCollection, NSDate, NSMutableDictionary, NSNumber, NSMutableArray, TVPContentKeyRequest;
@protocol VUIStoreFPSKeyLoaderDelegate;

#import <Foundation/Foundation.h>


@interface VUIStoreFPSKeyLoader : NSObject

@property (nonatomic) CGFloat availabilityPeriodOverrideInSeconds; // ivar: _availabilityPeriodOverrideInSeconds
@property (retain, nonatomic) NSData *certificateData; // ivar: _certificateData
@property (copy, nonatomic) NSURL *certificateURL; // ivar: _certificateURL
@property (retain, nonatomic) TVPContentKeySession *contentKeySession; // ivar: _contentKeySession
@property (weak, nonatomic) NSObject<VUIStoreFPSKeyLoaderDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didSkipRentalCheckout; // ivar: _didSkipRentalCheckout
@property (nonatomic) CGFloat downloadExpirationPeriodOverrideInSeconds; // ivar: _downloadExpirationPeriodOverrideInSeconds
@property (retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection; // ivar: _eventCollection
@property (retain, nonatomic) NSDate *keyExpirationDate; // ivar: _keyExpirationDate
@property (retain, nonatomic) NSMutableDictionary *keyIdentifierPenaltyBox; // ivar: _keyIdentifierPenaltyBox
@property (copy, nonatomic) NSURL *keyServerURL; // ivar: _keyServerURL
@property (retain, nonatomic) NSNumber *rentalID; // ivar: _rentalID
@property (retain, nonatomic) NSDate *rentalPlaybackStartDate; // ivar: _rentalPlaybackStartDate
@property (retain, nonatomic) NSMutableArray *requestsAwaitingCertFetch; // ivar: _requestsAwaitingCertFetch
@property (retain, nonatomic) TVPContentKeyRequest *savedStreamingKeyRequestToUseForStopping; // ivar: _savedStreamingKeyRequestToUseForStopping
@property (retain, nonatomic) NSNumber *secureInvalidationDSID; // ivar: _secureInvalidationDSID
@property (retain, nonatomic) NSURL *secureInvalidationNonceURL; // ivar: _secureInvalidationNonceURL
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) BOOL usesKeyIdentifierPenaltyBox; // ivar: _usesKeyIdentifierPenaltyBox


+(NSUInteger)maximumRequestBatchSize;
+(void)_loadAndCacheCertificateDataForValidURL:(id)arg0 completion:(id)arg1 ;
+(void)_loadFPSURLsFromStoreBagWithCompletion:(id)arg0 ;
+(void)initialize;
+(void)preFetchFPSCertificate;
-(id)_bodyJSONDataForRequests:(id)arg0 isStopRequest:(BOOL)arg1 locationAuthorizationStatus:(NSInteger)arg2 ;
-(id)_errorForStoreResponseStatus:(NSInteger)arg0 deviceLimit:(id)arg1 ;
-(id)_jsonDictionaryForRequest:(id)arg0 isStopRequest:(BOOL)arg1 locationAuthorizationStatus:(NSInteger)arg2 ;
-(id)initWithCertificateURL:(id)arg0 keyServerURL:(id)arg1 ;
-(void)_failKeyRequests:(id)arg0 withError:(id)arg1 ;
-(void)_generateKeyRequestDataForKeyRequests:(id)arg0 completion:(id)arg1 ;
-(void)_generateSecureInvalidationDataForFirstRequest:(id)arg0 completion:(id)arg1 ;
-(void)_generateSecureInvalidationDataForRequests:(id)arg0 completion:(id)arg1 ;
-(void)_handleResponseDict:(id)arg0 forKeyRequest:(id)arg1 ;
-(void)_handleResponseDicts:(id)arg0 forKeyRequests:(id)arg1 ;
-(void)_handleResponseForKeyRequests:(id)arg0 responseData:(id)arg1 URLResponse:(id)arg2 error:(id)arg3 ;
-(void)_initiateKeyRequests:(id)arg0 completion:(id)arg1 ;
-(void)_invalidateValidKeyRequestsInBatches:(id)arg0 completion:(id)arg1 ;
-(void)_loadCertificateDataWithCompletion:(id)arg0 ;
-(void)_loadNonceDataForRequests:(id)arg0 completion:(id)arg1 ;
-(void)_sendKeyRequestsToServer:(id)arg0 isStopRequest:(BOOL)arg1 isSecureInvalidationRequest:(BOOL)arg2 completion:(id)arg3 ;
-(void)_startKeyRequests:(id)arg0 completion:(id)arg1 ;
-(void)_startKeyRequestsInBatches:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)invalidateKeysWithRequests:(id)arg0 completion:(id)arg1 ;
-(void)loadFairPlayStreamingKeyRequests:(id)arg0 completion:(id)arg1 ;
-(void)removeAllEntriesFromKeyIdentifierPenaltyBox;
-(void)sendStreamingStopRequestIfNecessary;


@end


#endif