// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSREACHABILITY_H
#define TPSREACHABILITY_H


#import <Foundation/Foundation.h>


@interface TPSReachability : NSObject {
    *__SCNetworkReachability _reachabilityRef;
}




+(id)reachabilityForInternetConnection;
+(id)reachabilityWithAddress:(struct sockaddr_in *)arg0 ;
+(id)reachabilityWithHostName:(id)arg0 ;
-(BOOL)connectionRequired;
-(BOOL)startNotifier;
-(NSInteger)currentReachabilityStatus;
-(NSInteger)networkStatusForFlags:(unsigned int)arg0 ;
-(void)dealloc;
-(void)stopNotifier;


@end


#endif