// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKATTRIBUTEDSTRINGWEBVIEWCACHE_H
#define _WKATTRIBUTEDSTRINGWEBVIEWCACHE_H


#import <Foundation/Foundation.h>


@interface _WKAttributedStringWebViewCache : NSObject



+(id)cache;
+(id)configuration;
+(struct RetainPtr<WKWebView> )retrieveOrCreateWebView;
+(void)cacheWebView:(id)arg0 ;
+(void)clearConfiguration;
+(void)purgeAllWebViews;
+(void)purgeSingleWebView;
+(void)resetPurgeDelay;


@end


#endif