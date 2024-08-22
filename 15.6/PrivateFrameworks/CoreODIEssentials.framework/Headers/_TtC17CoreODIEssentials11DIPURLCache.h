// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC17COREODIESSENTIALS11DIPURLCACHE_H
#define _TTC17COREODIESSENTIALS11DIPURLCACHE_H

@class NSURLCache;



@interface _TtC17CoreODIEssentials11DIPURLCache : NSURLCache



-(id)init;
-(id)initWithMemoryCapacity:(NSInteger)arg0 diskCapacity:(NSInteger)arg1 directoryURL:(id)arg2 ;
-(id)initWithMemoryCapacity:(NSInteger)arg0 diskCapacity:(NSInteger)arg1 diskPath:(id)arg2 ;
-(void)storeCachedResponse:(id)arg0 forDataTask:(id)arg1 ;
-(void)storeCachedResponse:(id)arg0 forRequest:(id)arg1 ;


@end


#endif