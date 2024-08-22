// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BDSREACHABILITY_H
#define BDSREACHABILITY_H


#import <Foundation/Foundation.h>


@interface BDSReachability : NSObject {
    BOOL localWiFiRef;
    *__SCNetworkReachability reachabilityRef;
}




+(BOOL)isOffline;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithAddress:(struct sockaddr_in *)arg0 ;
+(id)reachabilityWithHostName:(id)arg0 ;
+(id)sharedReachabilityForInternetConnection;
+(void)_updateIsOffline;
-(BOOL)connectionRequired;
-(BOOL)startNotifier;
-(int)currentReachabilityStatus;
-(int)localWiFiStatusForFlags:(unsigned int)arg0 ;
-(int)networkStatusForFlags:(unsigned int)arg0 ;
-(void)dealloc;
-(void)stopNotifier;


@end


#endif