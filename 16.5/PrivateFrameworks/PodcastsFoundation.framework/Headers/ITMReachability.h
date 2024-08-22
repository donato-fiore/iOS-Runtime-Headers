// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ITMREACHABILITY_H
#define ITMREACHABILITY_H


#import <Foundation/Foundation.h>


@interface ITMReachability : NSObject {
    *__SCNetworkReachability _reachabilityRef;
}




+(id)reachabilityForInternetConnection;
+(id)reachabilityWithAddress:(struct sockaddr *)arg0 ;
+(id)reachabilityWithHostName:(id)arg0 ;
-(BOOL)connectionRequired;
-(BOOL)startNotifier;
-(NSInteger)currentReachabilityStatus;
-(NSInteger)networkStatusForFlags:(unsigned int)arg0 ;
-(void)dealloc;
-(void)stopNotifier;


@end


#endif