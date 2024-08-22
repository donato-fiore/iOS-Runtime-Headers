// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSURLREQUEST_H
#define NSURLREQUEST_H

@class NSData, NSInputStream, NSString, NSURL, NSDictionary;
@protocol NSSecureCoding, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "NSURLRequestInternal.h"

@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

 {
    NSURLRequestInternal *_internal;
}


@property (readonly, copy) NSData *HTTPBody;
@property (readonly, retain) NSInputStream *HTTPBodyStream;
@property (readonly, copy) NSString *HTTPMethod;
@property (readonly) BOOL HTTPShouldHandleCookies;
@property (readonly) BOOL HTTPShouldUsePipelining;
@property (readonly, copy) NSURL *URL;
@property (readonly) *void _inner;
@property (readonly, copy) NSDictionary *allHTTPHeaderFields;
@property (readonly) BOOL allowsCellularAccess;
@property (readonly) BOOL allowsConstrainedNetworkAccess;
@property (readonly) BOOL allowsExpensiveNetworkAccess;
@property (readonly) BOOL assumesHTTP3Capable;
@property (readonly) NSUInteger attribution;
@property (readonly) NSUInteger cachePolicy;
@property (readonly, copy) NSURL *mainDocumentURL;
@property (readonly) NSUInteger networkServiceType;
@property (readonly) CGFloat timeoutInterval;


+(BOOL)allowsAnyHTTPSCertificateForHost:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(CGFloat)defaultTimeoutInterval;
+(id)allowsSpecificHTTPSCertificateForHost:(id)arg0 ;
+(id)requestWithURL:(id)arg0 ;
+(id)requestWithURL:(id)arg0 cachePolicy:(NSUInteger)arg1 timeoutInterval:(CGFloat)arg2 ;
+(void)setAllowsAnyHTTPSCertificate:(BOOL)arg0 forHost:(id)arg1 ;
+(void)setAllowsSpecificHTTPSCertificate:(id)arg0 forHost:(id)arg1 ;
+(void)setDefaultTimeoutInterval:(CGFloat)arg0 ;
-(BOOL)_URLHasScheme:(id)arg0 ;
-(BOOL)_ignoreHSTS;
-(BOOL)_isIdempotent;
-(BOOL)_isKnownTracker;
-(BOOL)_isNonAppInitiated;
-(BOOL)_isSafeRequestForBackgroundDownload;
-(BOOL)_preventHSTSStorage;
-(BOOL)_requiresShortConnectionTimeout;
-(BOOL)_schemeWasUpgradedDueToDynamicHSTS;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_payloadTransmissionTimeout;
-(CGFloat)_timeWindowDelay;
-(CGFloat)_timeWindowDuration;
-(NSUInteger)expectedWorkload;
-(NSUInteger)hash;
-(id)HTTPContentType;
-(id)HTTPExtraCookies;
-(id)HTTPReferrer;
-(id)HTTPUserAgent;
-(id)_copyReplacingURLWithURL:(id)arg0 ;
-(id)_initWithCFURLRequest:(struct _CFURLRequest *)arg0 ;
-(id)_initWithInternal:(id)arg0 ;
-(id)_propertyForKey:(id)arg0 ;
-(id)_startTimeoutDate;
-(id)_trackerContext;
-(id)boundInterfaceIdentifier;
-(id)contentDispositionEncodingFallbackArray;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 cachePolicy:(NSUInteger)arg1 timeoutInterval:(CGFloat)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueForHTTPHeaderField:(id)arg0 ;
-(void)_removePropertyForKey:(id)arg0 ;
-(void)_setProperty:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif