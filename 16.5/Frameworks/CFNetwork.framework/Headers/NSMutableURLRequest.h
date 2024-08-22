// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSMUTABLEURLREQUEST_H
#define NSMUTABLEURLREQUEST_H

@class NSData, NSInputStream, NSString, NSURL, NSDictionary;


#import "NSURLRequest.h"

@interface NSMutableURLRequest : NSURLRequest

@property (copy) NSData *HTTPBody;
@property (retain) NSInputStream *HTTPBodyStream;
@property (copy) NSString *HTTPMethod;
@property BOOL HTTPShouldHandleCookies;
@property BOOL HTTPShouldUsePipelining;
@property (copy) NSURL *URL;
@property (copy) NSDictionary *allHTTPHeaderFields;
@property BOOL allowsCellularAccess;
@property BOOL allowsConstrainedNetworkAccess;
@property BOOL allowsExpensiveNetworkAccess;
@property BOOL assumesHTTP3Capable;
@property NSUInteger attribution;
@property NSUInteger cachePolicy;
@property (copy) NSURL *mainDocumentURL;
@property NSUInteger networkServiceType;
@property BOOL requiresDNSSECValidation;
@property CGFloat timeoutInterval;


-(BOOL)_explicitlySetAllowsCellularAccess;
-(BOOL)_explicitlySetAllowsConstrainedNetworkAccess;
-(BOOL)_explicitlySetAllowsExpensiveNetworkAccess;
-(BOOL)_explicitlySetCachePolicy;
-(BOOL)_explicitlySetNetworkServiceType;
-(BOOL)_explicitlySetPreventsIdleSystemSleep;
-(BOOL)_explicitlySetProxySettings;
-(BOOL)_explicitlySetSSLProperties;
-(BOOL)_explicitlySetShouldHandleCookies;
-(BOOL)_explicitlySetTimeoutInterval;
-(NSUInteger)requestPriority;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_removeAllProtocolProperties;
-(void)_setAllowPrivateAccessTokensForThirdParty:(BOOL)arg0 ;
-(void)_setIgnoreHSTS:(BOOL)arg0 ;
-(void)_setKnownTracker:(BOOL)arg0 ;
-(void)_setNeedsNetworkTrackingPrevention:(BOOL)arg0 ;
-(void)_setNonAppInitiated:(BOOL)arg0 ;
-(void)_setPayloadTransmissionTimeout:(CGFloat)arg0 ;
-(void)_setPreventHSTSStorage:(BOOL)arg0 ;
-(void)_setPrivacyProxyFailClosed:(BOOL)arg0 ;
-(void)_setPrivacyProxyFailClosedForUnreachableNonMainHosts:(BOOL)arg0 ;
-(void)_setProhibitPrivacyProxy:(BOOL)arg0 ;
-(void)_setRequiresShortConnectionTimeout:(BOOL)arg0 ;
-(void)_setStartTimeoutDate:(id)arg0 ;
-(void)_setTimeWindowDelay:(CGFloat)arg0 ;
-(void)_setTimeWindowDuration:(CGFloat)arg0 ;
-(void)addValue:(id)arg0 forHTTPHeaderField:(id)arg1 ;
-(void)setBoundInterfaceIdentifier:(id)arg0 ;
-(void)setContentDispositionEncodingFallbackArray:(id)arg0 ;
-(void)setExpectedWorkload:(NSUInteger)arg0 ;
-(void)setHTTPContentType:(id)arg0 ;
-(void)setHTTPExtraCookies:(id)arg0 ;
-(void)setHTTPReferrer:(id)arg0 ;
-(void)setHTTPUserAgent:(id)arg0 ;
-(void)setRequestPriority:(NSUInteger)arg0 ;
-(void)setValue:(id)arg0 forHTTPHeaderField:(id)arg1 ;
-(void)set_trackerContext:(id)arg0 ;


@end


#endif