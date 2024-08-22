// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRMSREACHABILITY_H
#define TVRMSREACHABILITY_H


#import <Foundation/Foundation.h>


@interface TVRMSReachability : NSObject {
    BOOL _alwaysReturnLocalWiFiStatus;
    *__SCNetworkReachability _reachabilityRef;
}




+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithAddress:(struct sockaddr_in *)arg0 ;
+(id)reachabilityWithHostName:(id)arg0 ;
-(BOOL)connectionRequired;
-(BOOL)startNotifier;
-(NSInteger)currentReachabilityStatus;
-(NSInteger)localWiFiStatusForFlags:(unsigned int)arg0 ;
-(NSInteger)networkStatusForFlags:(unsigned int)arg0 ;
-(void)dealloc;
-(void)stopNotifier;


@end


#endif