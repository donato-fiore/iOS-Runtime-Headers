// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHNETWORKREQUESTER_H
#define SHNETWORKREQUESTER_H


#import <Foundation/Foundation.h>


@interface SHNetworkRequester : NSObject



+(void)downloadResourceFromRequest:(id)arg0 completionHandler:(id)arg1 ;
+(void)performRequest:(id)arg0 completionHandler:(id)arg1 ;
+(void)responseForRequest:(id)arg0 response:(id)arg1 data:(id)arg2 error:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif