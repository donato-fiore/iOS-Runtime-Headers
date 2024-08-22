// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLFACEBOOKGRAPHUTILS_H
#define SLFACEBOOKGRAPHUTILS_H


#import <Foundation/Foundation.h>


@interface SLFacebookGraphUtils : NSObject



+(id)_likeQueryStringForURL:(id)arg0 flags:(NSUInteger)arg1 ;
+(id)_parseServerResponse:(id)arg0 error:(*id)arg1 ;
+(void)_likeURL:(id)arg0 requestMethod:(NSInteger)arg1 account:(id)arg2 completion:(id)arg3 ;
+(void)fetchLikeStatusForURL:(id)arg0 flags:(id)arg1 account:(id)arg2 completion:(id)arg3 ;
+(void)likeURL:(id)arg0 account:(id)arg1 completion:(id)arg2 ;
+(void)unlikeURL:(id)arg0 account:(id)arg1 completion:(id)arg2 ;


@end


#endif