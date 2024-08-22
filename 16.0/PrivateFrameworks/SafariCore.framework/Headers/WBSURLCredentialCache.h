// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSURLCREDENTIALCACHE_H
#define WBSURLCREDENTIALCACHE_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSURLCredentialCache : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDictionary *_credentialCache;
    id *_credentialFetchBlock;
}


@property (readonly, copy) NSDictionary *credentials;


-(id)initWithCachingMode:(NSInteger)arg0 credentialFetchBlock:(id)arg1 ;
-(id)initWithCredentialFetchBlock:(id)arg0 ;
-(void)getCredentialsWithCompletionHandler:(id)arg0 ;
-(void)invalidate;


@end


#endif