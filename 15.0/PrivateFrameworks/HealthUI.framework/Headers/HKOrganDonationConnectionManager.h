// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKORGANDONATIONCONNECTIONMANAGER_H
#define HKORGANDONATIONCONNECTIONMANAGER_H

@class NSString, NSMapTable, NSTimer, NSURLSession;
@protocol NSURLSessionDataDelegate, HKOrganDonationConnectionManagerDelegate;

#import <Foundation/Foundation.h>


@interface HKOrganDonationConnectionManager : NSObject <NSURLSessionDataDelegate>

 {
    NSString *_refreshToken;
    BOOL _accessTokenStatus;
    NSInteger _tokenRefreshRetryCount;
    NSMapTable *_taskQueue;
    NSInteger _managerState;
}


@property (retain, nonatomic) NSString *accessToken; // ivar: _accessToken
@property (weak, nonatomic) NSTimer *accessTokenInvalidationTimer; // ivar: _accessTokenInvalidationTimer
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSURLSession *defaultSession; // ivar: _defaultSession
@property (weak, nonatomic) NSObject<HKOrganDonationConnectionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *refreshToken;
@property (readonly) Class superclass;


+(BOOL)_organDonationDisabled;
+(BOOL)hasStoredRegistrant;
+(BOOL)isOrganDonationRegistrationAvailable;
+(BOOL)shouldShowStoreDemoOrganDonation;
+(NSInteger)_hostConfiguration;
+(NSInteger)registrationSubmissionHostConfiguration;
+(id)_gatewayHost;
+(id)_host;
+(id)_keychainQueryDictionaryForIdentifier:(id)arg0 ;
+(id)_port;
+(id)_scheme;
+(id)_tokenWithIdentifier:(id)arg0 shouldReturnData:(BOOL)arg1 ;
+(id)storeDemoModeModifiedDate;
+(void)openDonateLifeMicroSiteInSafari;
+(void)organDonationSignificantDate:(id)arg0 ;
+(void)refreshOrganDonationFeatureAvailability;
-(id)_base64URLEncoding:(id)arg0 ;
-(id)_genericJSONDataTaskWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)_getRequestWithURL:(id)arg0 bearerToken:(id)arg1 ;
-(id)_jsonBodyPostRequestWithURL:(id)arg0 method:(id)arg1 postData:(id)arg2 bearerToken:(id)arg3 ;
-(id)_jsonObjectWithData:(id)arg0 response:(id)arg1 ;
-(id)_jwtWithPayload:(id)arg0 grantType:(id)arg1 ;
-(id)_refreshBearerTokenJWTWithRefreshToken:(id)arg0 ;
-(id)_registrationJWTWithRegistrant:(id)arg0 ;
-(id)_urlWithPath:(id)arg0 ;
-(id)init;
-(id)jwtHeader;
-(id)jwtPayloadWithRegistrant:(id)arg0 ;
-(id)payload;
-(void)_deleteTokenWithIdentifier:(id)arg0 ;
-(void)_flushTokenDependentRequestsWithStatus:(NSInteger)arg0 ;
-(void)_handleServerErrorWithResponse:(id)arg0 originRequest:(id)arg1 payload:(id)arg2 completion:(id)arg3 ;
-(void)_handleURLTaskError:(id)arg0 withCompletion:(id)arg1 ;
-(void)_invalidateAccessToken:(id)arg0 ;
-(void)_refreshAccessTokenIfNeeded;
-(void)_scheduleAccessTokenDependentRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)_sendQueuedTokenDependentRequests;
-(void)_transitionToState:(NSInteger)arg0 ;
-(void)_updateAccessTokenAndScheduleInvalidationTimer:(id)arg0 expiresIn:(CGFloat)arg1 ;
-(void)_upsertTokenInKeychain:(id)arg0 identifier:(id)arg1 ;
-(void)cleanUp;
-(void)deleteRegistrantWithCompletion:(id)arg0 ;
-(void)openRegisterMeSiteInSafariIfAuthenticated;
-(void)refreshBearerTokenWithRefreshToken:(id)arg0 completion:(id)arg1 ;
-(void)reloadRegistrantWithCompletion:(id)arg0 ;
-(void)submitRegistrant:(id)arg0 completion:(id)arg1 ;
-(void)updateRegistrantWithParams:(id)arg0 completion:(id)arg1 ;


@end


#endif