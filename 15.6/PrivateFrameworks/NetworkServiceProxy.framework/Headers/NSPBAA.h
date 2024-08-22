// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPBAA_H
#define NSPBAA_H

@class NSString;
@protocol NSPAuthentication;

#import <Foundation/Foundation.h>


@interface NSPBAA : NSObject <NSPAuthentication>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)authenticationFailure;
+(void)fetchRequest:(id)arg0 session:(id)arg1 completionHandler:(id)arg2 ;
+(void)sendRequestForTokens:(id)arg0 tokenFetchURLSession:(id)arg1 tokenActivationQuery:(id)arg2 completionHandler:(id)arg3 ;
+(void)sendRequestForTokens:(id)arg0 tokenFetchURLSession:(id)arg1 tokenActivationQuery:(id)arg2 completionHandlerWithDataSign:(id)arg3 ;
+(void)signData:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif