// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMREACHABILITY_H
#define IMREACHABILITY_H

@class NSString;
@protocol OS_dispatch_queue, IMReachabilityDelegate;

#import <Foundation/Foundation.h>


@interface IMReachability : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_queue; // ivar: _queue
@property (readonly, nonatomic) BOOL connectionRequired;
@property (weak, nonatomic) NSObject<IMReachabilityDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (nonatomic) BOOL gettingFlags; // ivar: _gettingFlags
@property (retain, nonatomic) NSString *reachabilityDescription; // ivar: _description
@property (nonatomic) *void reachabilityRef; // ivar: _reachabilityRef


+(id)reachabilityWithHostName:(id)arg0 ;
+(id)reachabilityWithLocalAddress:(id)arg0 remoteAddress:(id)arg1 ;
+(id)reachabilityWithRemoteAddress:(id)arg0 ;
-(id)_initWithReachabilityRef:(struct __SCNetworkReachability *)arg0 description:(id)arg1 delegate:(id)arg2 ;
-(id)description;
-(id)initWithLocalSocketAddress:(id)arg0 remoteSocketAddress:(id)arg1 delegate:(id)arg2 ;
-(id)initWithRemoteHost:(id)arg0 delegate:(id)arg1 ;
-(void)_forceGetFlagsIfNecessary;
-(void)_handleCallbackForSCNetworkReachability:(struct __SCNetworkReachability *)arg0 ;
-(void)dealloc;


@end


#endif