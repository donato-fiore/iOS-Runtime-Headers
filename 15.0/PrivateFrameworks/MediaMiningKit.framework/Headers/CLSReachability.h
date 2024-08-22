// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSREACHABILITY_H
#define CLSREACHABILITY_H


#import <Foundation/Foundation.h>


@interface CLSReachability : NSObject {
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
-(id)initWithNetworkReachability:(struct __SCNetworkReachability *)arg0 ;
-(void)dealloc;
-(void)stopNotifier;


@end


#endif