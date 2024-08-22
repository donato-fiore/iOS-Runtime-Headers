// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _REACHABILITYREQUEST_H
#define _REACHABILITYREQUEST_H

@class NSLock, NSString;

#import <Foundation/Foundation.h>


@interface _ReachabilityRequest : NSObject {
    NSLock *_lock;
    *__SCNetworkReachability _reachability;
    unsigned int _flags;
    *__CFDictionary _observers;
    BOOL _isReachable;
    BOOL _receivedAtLeastOneCallback;
}


@property (readonly, nonatomic) NSString *hostname; // ivar: _hostname


-(BOOL)hasObservers;
-(id)description;
-(id)initWithHostname:(id)arg0 ;
-(void)addObserver:(id)arg0 selector:(SEL)arg1 ;
-(void)dealloc;
-(void)reachabilityChangedWithFlags:(unsigned int)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif