// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDREMOTEEVENTROUTERASSERTIONCONTROLLER_H
#define HMDREMOTEEVENTROUTERASSERTIONCONTROLLER_H

@class NSNotificationCenter, NSHashTable, NSString;
@protocol HMFLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDRemoteEventRouterAssertionController : NSObject <HMFLogging>

 {
    BOOL _isPluggedIn;
    BOOL _isHomeAppForeground;
    NSObject<OS_dispatch_queue> *_queue;
    NSNotificationCenter *_notificationCenter;
    NSHashTable *_clients;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithQueue:(id)arg0 notificationCenter:(id)arg1 ;
-(void)_handleProcessStateChange:(id)arg0 ;
-(void)configure;
-(void)registerClient:(id)arg0 ;


@end


#endif