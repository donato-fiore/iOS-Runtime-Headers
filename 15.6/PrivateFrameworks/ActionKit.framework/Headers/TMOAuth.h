// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TMOAUTH_H
#define TMOAUTH_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TMOAuth : NSObject

@property (readonly, nonatomic) NSString *baseString; // ivar: _baseString
@property (readonly, nonatomic) NSString *headerString; // ivar: _headerString


+(id)headerForURL:(id)arg0 method:(id)arg1 postParameters:(id)arg2 nonce:(id)arg3 consumerKey:(id)arg4 consumerSecret:(id)arg5 token:(id)arg6 tokenSecret:(id)arg7 ;
-(id)initWithURL:(id)arg0 method:(id)arg1 postParameters:(id)arg2 nonce:(id)arg3 consumerKey:(id)arg4 consumerSecret:(id)arg5 token:(id)arg6 tokenSecret:(id)arg7 ;


@end


#endif