// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUSCNETWORKREACHABILITYCORE_H
#define TSUSCNETWORKREACHABILITYCORE_H

@class NSString;
@protocol TSUNetworkReachabilityCore;

#import <Foundation/Foundation.h>


@interface TSUSCNetworkReachabilityCore : NSObject <TSUNetworkReachabilityCore>

 {
    *__SCNetworkReachability _reachabilityRef;
    id *_notifyBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getReachabilityFlags:(*unsigned int)arg0 ;
-(BOOL)startNotifyingWithQueue:(id)arg0 block:(id)arg1 ;
-(id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg0 ;
-(void)dealloc;
-(void)stopNotifying;


@end


#endif