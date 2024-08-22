// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMNETWORKREACHABILITY_H
#define IMNETWORKREACHABILITY_H


#import <Foundation/Foundation.h>


@interface IMNetworkReachability : NSObject {
    BOOL localWiFiRef;
    *__SCNetworkReachability reachabilityRef;
}




+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithAddress:(struct sockaddr_in *)arg0 ;
+(id)reachabilityWithHostName:(id)arg0 ;
-(NSInteger)currentReachabilityStatus;
-(NSInteger)localWiFiStatusForFlags:(unsigned int)arg0 ;
-(NSInteger)networkStatusForFlags:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif