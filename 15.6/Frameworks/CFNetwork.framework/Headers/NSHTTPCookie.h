// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSHTTPCOOKIE_H
#define NSHTTPCOOKIE_H

@class NSString, NSURL, NSDate, NSArray, NSDictionary;
@protocol NSCoding;

#import <Foundation/Foundation.h>

#import "NSHTTPCookieInternal.h"

@interface NSHTTPCookie : NSObject <NSCoding>

 {
    NSHTTPCookieInternal *_cookiePrivate;
}


@property (readonly, getter=isHTTPOnly) BOOL HTTPOnly;
@property (readonly) *HTTPCookie _inner;
@property (readonly, copy) NSString *comment;
@property (readonly, copy) NSURL *commentURL;
@property (readonly, copy) NSString *domain;
@property (readonly, copy) NSDate *expiresDate;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *path;
@property (readonly, copy) NSArray *portList;
@property (readonly, copy) NSDictionary *properties;
@property (readonly, copy) NSString *sameSitePolicy;
@property (readonly, getter=isSecure) BOOL secure;
@property (readonly, getter=isSessionOnly) BOOL sessionOnly;
@property (readonly, copy) NSString *value;
@property (readonly) NSUInteger version;


+(id)_cf2nsCookies:(struct __CFArray *)arg0 ;
+(id)_cookieForSetCookieString:(id)arg0 forURL:(id)arg1 partition:(id)arg2 ;
+(id)_parsedCookiesWithResponseHeaderFields:(id)arg0 forURL:(id)arg1 ;
+(id)cookieWithCFHTTPCookie:(struct OpaqueCFHTTPCookie *)arg0 ;
+(id)cookieWithProperties:(id)arg0 ;
+(id)cookiesWithResponseHeaderFields:(id)arg0 forURL:(id)arg1 ;
+(id)requestHeaderFieldsWithCookies:(id)arg0 ;
+(struct __CFArray *)_ns2cfCookies:(id)arg0 ;
-(BOOL)_isExpired;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_compareForHeaderOrder:(id)arg0 ;
-(NSUInteger)hash;
-(id)Comment;
-(id)CommentURL;
-(id)Discard;
-(id)Domain;
-(id)Expires;
-(id)MaxAge;
-(id)Name;
-(id)OriginURL;
-(id)Path;
-(id)Port;
-(id)SameSitePolicy;
-(id)Secure;
-(id)StoragePartition;
-(id)Value;
-(id)Version;
-(id)_initWithCookie:(id)arg0 partition:(id)arg1 ;
-(id)_initWithHeader:(struct CompactCookieHeader *)arg0 ;
-(id)_initWithInternal:(id)arg0 ;
-(id)_initWithProperties:(id)arg0 fromString:(BOOL)arg1 ;
-(id)_initWithReference:(struct CompactCookieArray *)arg0 index:(NSInteger)arg1 ;
-(id)_key;
-(id)_storagePartition;
-(id)description;
-(id)init;
-(id)initWithCFHTTPCookie:(struct OpaqueCFHTTPCookie *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProperties:(id)arg0 ;
-(struct OpaqueCFHTTPCookie *)_CFHTTPCookie;
-(struct OpaqueCFHTTPCookie *)_GetInternalCFHTTPCookie;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif