// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUNETWORKREACHABILITY_H
#define TSUNETWORKREACHABILITY_H


#import <Foundation/Foundation.h>


@interface TSUNetworkReachability : NSObject {
    *__SCNetworkReachability _reachabilityRef;
    BOOL _localWiFi;
}


@property (readonly, nonatomic) BOOL connectionRequired;
@property (readonly, nonatomic) NSInteger status;


+(NSInteger)networkReachabilityStatusForDocumentResources;
+(NSInteger)networkReachabilityStatusForInternetConnection;
+(NSInteger)networkReachabilityStatusForLocalWiFi;
+(id)networkReachabilityForDocumentResources;
+(id)networkReachabilityForInternetConnection;
+(id)networkReachabilityForLocalWiFi;
+(id)networkReachabilityWithAddress:(struct sockaddr_in *)arg0 ;
+(id)networkReachabilityWithHostName:(id)arg0 ;
-(NSInteger)localWiFiStatusForFlags:(unsigned int)arg0 ;
-(NSInteger)networkStatusForFlags:(unsigned int)arg0 ;
-(id)init;
-(id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg0 ;
-(void)dealloc;


@end


#endif