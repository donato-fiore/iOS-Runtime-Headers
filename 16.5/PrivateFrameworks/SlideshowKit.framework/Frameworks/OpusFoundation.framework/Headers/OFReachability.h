// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OFREACHABILITY_H
#define OFREACHABILITY_H


#import <Foundation/Foundation.h>


@interface OFReachability : NSObject {
    *__SCNetworkReachability _reachabilityRef;
    BOOL _localWiFiRef;
}




+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithAddress:(struct sockaddr_in *)arg0 ;
+(id)reachabilityWithHostName:(id)arg0 ;
-(BOOL)connectionRequired;
-(BOOL)startNotifier;
-(NSInteger)_localWiFiStatusForFlags:(unsigned int)arg0 ;
-(NSInteger)_networkStatusForFlags:(unsigned int)arg0 ;
-(NSInteger)currentNetworkStatus;
-(id)init;
-(void)dealloc;
-(void)stopNotifier;


@end


#endif