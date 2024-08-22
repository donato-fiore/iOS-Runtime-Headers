// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMREACHABILITY_H
#define FMREACHABILITY_H


#import <Foundation/Foundation.h>


@interface FMReachability : NSObject {
    BOOL localWiFiRef;
    *__SCNetworkReachability reachabilityRef;
}




+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithAddress:(struct sockaddr_in *)arg0 ;
+(id)reachabilityWithHostName:(id)arg0 ;
-(BOOL)connectionRequired;
-(BOOL)startNotifier;
-(NSUInteger)currentReachabilityStatus;
-(NSUInteger)localWiFiStatusForFlags:(unsigned int)arg0 ;
-(NSUInteger)networkStatusForFlags:(unsigned int)arg0 ;
-(void)dealloc;
-(void)stopNotifier;


@end


#endif