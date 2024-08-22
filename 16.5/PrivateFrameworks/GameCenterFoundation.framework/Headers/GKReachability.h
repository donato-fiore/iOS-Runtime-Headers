// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKREACHABILITY_H
#define GKREACHABILITY_H


#import <Foundation/Foundation.h>


@interface GKReachability : NSObject {
    BOOL localWiFiRef;
    *__SCNetworkReachability reachabilityRef;
}




+(BOOL)_gkIsOnline;
+(id)_gkReachabilityForInternetConnection;
+(id)_gkReachabilityForLocalWiFi;
+(id)_gkReachabilityWithAddress:(struct sockaddr_in *)arg0 ;
+(id)_gkReachabilityWithHostName:(id)arg0 ;
-(BOOL)_gkConnectionRequired;
-(BOOL)_gkStartNotifier;
-(int)_gkCurrentReachabilityStatus;
-(int)localWiFiStatusForFlags:(unsigned int)arg0 ;
-(int)networkStatusForFlags:(unsigned int)arg0 ;
-(void)_gkStopNotifier;
-(void)dealloc;


@end


#endif