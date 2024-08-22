// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSCONCRETEURLCOMPONENTS_H
#define __NSCONCRETEURLCOMPONENTS_H

@protocol NSCopying;


#import "NSURLComponents.h"

@interface __NSConcreteURLComponents : NSURLComponents <NSCopying>

 {
    *__CFURLComponents _components;
}




+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)URL;
-(id)URLRelativeToURL:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodedHost;
-(id)fragment;
-(id)host;
-(id)init;
-(id)initWithString:(id)arg0 ;
-(id)initWithURL:(id)arg0 resolvingAgainstBaseURL:(BOOL)arg1 ;
-(id)password;
-(id)path;
-(id)percentEncodedFragment;
-(id)percentEncodedHost;
-(id)percentEncodedPassword;
-(id)percentEncodedPath;
-(id)percentEncodedQuery;
-(id)percentEncodedQueryItems;
-(id)percentEncodedUser;
-(id)port;
-(id)query;
-(id)queryItems;
-(id)scheme;
-(id)string;
-(id)user;
-(struct _NSRange )rangeOfFragment;
-(struct _NSRange )rangeOfHost;
-(struct _NSRange )rangeOfPassword;
-(struct _NSRange )rangeOfPath;
-(struct _NSRange )rangeOfPort;
-(struct _NSRange )rangeOfQuery;
-(struct _NSRange )rangeOfScheme;
-(struct _NSRange )rangeOfUser;
-(void)dealloc;
-(void)setEncodedHost:(id)arg0 ;
-(void)setFragment:(id)arg0 ;
-(void)setHost:(id)arg0 ;
-(void)setPassword:(id)arg0 ;
-(void)setPath:(id)arg0 ;
-(void)setPercentEncodedFragment:(id)arg0 ;
-(void)setPercentEncodedHost:(id)arg0 ;
-(void)setPercentEncodedPassword:(id)arg0 ;
-(void)setPercentEncodedPath:(id)arg0 ;
-(void)setPercentEncodedQuery:(id)arg0 ;
-(void)setPercentEncodedQueryItems:(id)arg0 ;
-(void)setPercentEncodedUser:(id)arg0 ;
-(void)setPort:(id)arg0 ;
-(void)setQuery:(id)arg0 ;
-(void)setQueryItems:(id)arg0 ;
-(void)setScheme:(id)arg0 ;
-(void)setUser:(id)arg0 ;


@end


#endif