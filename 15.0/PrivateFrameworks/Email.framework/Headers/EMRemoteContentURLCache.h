// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMREMOTECONTENTURLCACHE_H
#define EMREMOTECONTENTURLCACHE_H

@class NSURLCache;



@interface EMRemoteContentURLCache : NSURLCache



-(void)getCachedResponseForDataTask:(id)arg0 completionHandler:(id)arg1 ;
-(void)storeCachedResponse:(id)arg0 forDataTask:(id)arg1 ;
-(void)storeCancelationIfNeededForDataTask:(id)arg0 completionHandler:(id)arg1 ;
-(void)storeResponseIfNeeded:(id)arg0 withData:(id)arg1 forDataTask:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif