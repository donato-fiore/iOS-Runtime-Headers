// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICRADIOPLAYBACKHISTORYSTORE_H
#define ICRADIOPLAYBACKHISTORYSTORE_H

@class NSOperationQueue, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICUserIdentityStore.h"

@interface ICRadioPlaybackHistoryStore : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_identityResolutionQueue;
}


@property (readonly, copy, nonatomic) NSURL *containerDirectoryURL; // ivar: _containerURL
@property (readonly, nonatomic) ICUserIdentityStore *userIdentityStore; // ivar: _identityStore


+(id)_defaultContainerURL;
-(id)_fileURLForStationWithIdentifier:(id)arg0 identityKey:(id)arg1 ;
-(id)_playbackHistoryOfClass:(Class)arg0 forStationWithIdentifier:(id)arg1 identityKey:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithContainerDirectoryURL:(id)arg0 ;
-(id)initWithContainerDirectoryURL:(id)arg0 identityStore:(id)arg1 ;
-(id)initWithIdentityStore:(id)arg0 ;
-(void)_getCacheKeyForUserIdentity:(id)arg0 completionHandler:(id)arg1 ;
-(void)flushWithCompletionHandler:(id)arg0 ;
-(void)getHistoryForStationWithIdentifier:(id)arg0 userIdentity:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeHistoryForStationWithIdentifier:(id)arg0 userIdentity:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateHistoryForStationWithIdentifier:(id)arg0 userIdentity:(id)arg1 usingBlock:(id)arg2 ;
// -(void)updateHistoryForStationWithIdentifier:(id)arg0 userIdentity:(id)arg1 usingBlock:(id)arg2 completionHandler:(unk)arg3  ;


@end


#endif