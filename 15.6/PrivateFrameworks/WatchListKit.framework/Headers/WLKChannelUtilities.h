// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKCHANNELUTILITIES_H
#define WLKCHANNELUTILITIES_H

@class NSDictionary, NSError, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WLKChannelsResponse.h"

@interface WLKChannelUtilities : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _filtered;
    WLKChannelsResponse *_cachedResponse;
    int _shouldRefreshNotificationToken;
    BOOL _shouldRefresh;
    os_unfair_lock_s _shouldRefreshLock;
}


@property (readonly, copy, nonatomic) NSDictionary *channelsByBundleID; // ivar: _channelsByBundleID
@property (readonly, copy, nonatomic) NSDictionary *channelsByID;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL loaded;
@property (readonly, copy, nonatomic) NSArray *orderedChannels;


+(BOOL)isItunesBundleID:(id)arg0 ;
+(id)_validiTunesBundles;
+(id)sharedInstance;
+(id)sharedInstanceFiltered;
-(BOOL)isItunesOrFirstPartyBundleID:(id)arg0 ;
-(id)_configuration;
-(id)channelForBundleID:(id)arg0 ;
-(id)channelForID:(id)arg0 ;
-(id)channelIDForBundleID:(id)arg0 ;
-(id)init;
-(id)initFiltered:(BOOL)arg0 ;
-(void)_loadConfigIfNeededWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidateCache;
-(void)loadIfNeededWithCompletion:(id)arg0 ;


@end


#endif