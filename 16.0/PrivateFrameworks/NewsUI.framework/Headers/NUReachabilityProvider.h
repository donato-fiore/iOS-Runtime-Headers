// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUREACHABILITYPROVIDER_H
#define NUREACHABILITYPROVIDER_H

@class NSString, FCNetworkReachability, NSHashTable;
@protocol FCNetworkReachabilityObserving, SWReachabilityProvider;

#import <Foundation/Foundation.h>


@interface NUReachabilityProvider : NSObject <FCNetworkReachabilityObserving, SWReachabilityProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FCNetworkReachability *networkReachability; // ivar: _networkReachability
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


-(BOOL)isNetworkReachable;
-(id)initWithNetworkReachability:(id)arg0 ;
-(void)addReachabilityObserver:(id)arg0 ;
-(void)networkReachabilityDidChange:(id)arg0 ;
-(void)removeReachabilityObserver:(id)arg0 ;


@end


#endif