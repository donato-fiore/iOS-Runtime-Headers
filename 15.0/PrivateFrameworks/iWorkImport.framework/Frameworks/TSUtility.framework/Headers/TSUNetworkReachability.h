// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUNETWORKREACHABILITY_H
#define TSUNETWORKREACHABILITY_H

@class NSString;
@protocol OS_dispatch_queue, TSUNetworkReachabilityCore;

#import <Foundation/Foundation.h>


@interface TSUNetworkReachability : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    id<TSUNetworkReachabilityCore> *_core;
    NSInteger _enableCount;
    NSInteger _cachedStatus;
}


@property (copy, nonatomic) NSString *hostName; // ivar: _hostName
@property (readonly, nonatomic) NSInteger lastKnownStatus;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (nonatomic) BOOL notifierActive; // ivar: _notifierActive
@property (copy, nonatomic) id *reachabilityUpdatedBlock; // ivar: _reachabilityUpdatedBlock


+(BOOL)synchronousHostLookup:(id)arg0 ;
+(NSInteger)networkStatusForFlags:(unsigned int)arg0 ;
+(id)internetReachabilityStatusQueue;
+(id)networkReachabilityForDocumentResources;
+(id)networkReachabilityForInternetConnection;
+(id)networkReachabilityWithAddress:(struct sockaddr_in *)arg0 ;
+(id)networkReachabilityWithHostName:(id)arg0 ;
+(id)networkReachabilityWithNetworkReachabilityRef:(struct __SCNetworkReachability *)arg0 hostNameOrNil:(id)arg1 ;
+(id)p_stringForNetworkReachabilityFlags:(unsigned int)arg0 ;
+(id)p_stringForNetworkReachabilityStatus:(NSInteger)arg0 ;
+(struct __SCNetworkReachability *)newNetworkReachabilityRefForInternetConnection;
+(struct __SCNetworkReachability *)newNetworkReachabilityRefWithAddress:(struct sockaddr_in *)arg0 ;
+(struct __SCNetworkReachability *)newNetworkReachabilityRefWithHostName:(char *)arg0 ;
+(void)internetReachabilityStatusWithQueue:(id)arg0 completion:(id)arg1 ;
-(NSInteger)statusFromFlags:(unsigned int)arg0 ;
-(id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg0 ;
-(struct sockaddr_in )hostAddress;
-(void)dealloc;
-(void)disableNotifier;
-(void)enableNotifier;
-(void)p_reachabilityFlagsDidChange:(unsigned int)arg0 ;
-(void)p_startNotifier;
-(void)p_stopNotifier;
-(void)p_updateCachedStatus:(NSInteger)arg0 ;
-(void)reachabilityStatusWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateCachedStatus:(NSInteger)arg0 ;


@end


#endif