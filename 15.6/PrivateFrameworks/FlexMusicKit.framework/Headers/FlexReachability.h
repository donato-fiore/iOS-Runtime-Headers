// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLEXREACHABILITY_H
#define FLEXREACHABILITY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FlexReachability : NSObject {
    BOOL _isNotifying;
    BOOL localWiFiRef;
    *__SCNetworkReachability reachabilityRef;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reachabilityQueue; // ivar: _reachabilityQueue


+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithAddress:(struct sockaddr_in *)arg0 ;
+(id)reachabilityWithHostName:(id)arg0 ;
-(BOOL)connectionRequired;
-(BOOL)interventionRequired;
-(BOOL)startNotifier;
-(NSInteger)currentReachabilityStatus;
-(NSInteger)localWiFiStatusForFlags:(unsigned int)arg0 ;
-(NSInteger)networkStatusForFlags:(unsigned int)arg0 ;
-(id)init;
-(void)dealloc;
-(void)stopNotifier;


@end


#endif