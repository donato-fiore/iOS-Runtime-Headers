// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPANISETTE_H
#define NSPANISETTE_H

@class NSString;
@protocol NSPAuthentication;

#import <Foundation/Foundation.h>


@interface NSPAnisette : NSObject <NSPAuthentication>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)authenticationFailure;
+(void)sendRequestForTokens:(id)arg0 tokenFetchURLSession:(id)arg1 messageBody:(id)arg2 completionHandler:(id)arg3 ;
+(void)sendRequestForTokens:(id)arg0 tokenFetchURLSession:(id)arg1 tokenActivationQuery:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif