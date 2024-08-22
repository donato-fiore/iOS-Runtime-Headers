// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSURLCOMPONENTS_H
#define NSURLCOMPONENTS_H

@class NSURL, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NSString.h"
#import "NSNumber.h"

@interface NSURLComponents : NSObject <NSCopying>



@property (readonly, copy) NSURL *URL;
@property (copy) NSString *encodedHost;
@property (copy) NSString *fragment;
@property (copy) NSString *host;
@property (copy) NSString *password;
@property (copy) NSString *path;
@property (copy) NSString *percentEncodedFragment;
@property (copy) NSString *percentEncodedHost;
@property (copy) NSString *percentEncodedPassword;
@property (copy) NSString *percentEncodedPath;
@property (copy) NSString *percentEncodedQuery;
@property (copy) NSArray *percentEncodedQueryItems;
@property (copy) NSString *percentEncodedUser;
@property (copy) NSNumber *port;
@property (copy) NSString *query;
@property (copy) NSArray *queryItems;
@property (readonly) _NSRange rangeOfFragment;
@property (readonly) _NSRange rangeOfHost;
@property (readonly) _NSRange rangeOfPassword;
@property (readonly) _NSRange rangeOfPath;
@property (readonly) _NSRange rangeOfPort;
@property (readonly) _NSRange rangeOfQuery;
@property (readonly) _NSRange rangeOfScheme;
@property (readonly) _NSRange rangeOfUser;
@property (copy) NSString *scheme;
@property (readonly, copy) NSString *string;
@property (copy) NSString *user;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)componentsWithString:(id)arg0 ;
+(id)componentsWithURL:(id)arg0 resolvingAgainstBaseURL:(BOOL)arg1 ;
-(id)URLRelativeToURL:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithString:(id)arg0 ;
-(id)initWithURL:(id)arg0 resolvingAgainstBaseURL:(BOOL)arg1 ;


@end


#endif