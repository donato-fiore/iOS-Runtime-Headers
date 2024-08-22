// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXRELATEDWEBVIEWCACHE_H
#define SXRELATEDWEBVIEWCACHE_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface SXRelatedWebViewCache : NSObject

@property (readonly, nonatomic) NSMapTable *cache; // ivar: _cache


-(id)init;
-(id)relatedWebViewForBaseURL:(id)arg0 ;
-(void)storeRelatedWebView:(id)arg0 baseURL:(id)arg1 ;


@end


#endif