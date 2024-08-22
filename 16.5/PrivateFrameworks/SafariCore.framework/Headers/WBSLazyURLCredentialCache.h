// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSLAZYURLCREDENTIALCACHE_H
#define WBSLAZYURLCREDENTIALCACHE_H



#import "WBSURLCredentialCache.h"

@interface WBSLazyURLCredentialCache : WBSURLCredentialCache



-(id)credentials;
-(void)getCredentialsWithCompletionHandler:(id)arg0 ;
-(void)invalidate;


@end


#endif