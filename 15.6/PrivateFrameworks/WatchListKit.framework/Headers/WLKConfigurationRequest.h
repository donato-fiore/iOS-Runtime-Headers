// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKCONFIGURATIONREQUEST_H
#define WLKCONFIGURATIONREQUEST_H


#import <Foundation/Foundation.h>


@interface WLKConfigurationRequest : NSObject



+(id)_configURLString:(*id)arg0 ;
+(void)_fetchV3WithOptions:(NSInteger)arg0 cachePolicy:(NSUInteger)arg1 sessionConfiguration:(id)arg2 queryParameters:(id)arg3 completion:(id)arg4 ;
+(void)_fetchV3WithOptions:(NSInteger)arg0 cachePolicy:(NSUInteger)arg1 sessionConfiguration:(id)arg2 queryParameters:(id)arg3 fileStorage:(id)arg4 completion:(id)arg5 ;
+(void)fetchWithOptions:(NSInteger)arg0 cachePolicy:(NSUInteger)arg1 sessionConfiguration:(id)arg2 queryParameters:(id)arg3 fileStorage:(id)arg4 completion:(id)arg5 ;


@end


#endif