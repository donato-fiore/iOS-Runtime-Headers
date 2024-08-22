// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSTATUSBARSTYLEOVERRIDESCOORDINATORCLIENT_H
#define SBSTATUSBARSTYLEOVERRIDESCOORDINATORCLIENT_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBStatusBarStyleOverridesCoordinatorClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (nonatomic) NSUInteger registeredOverrides; // ivar: _registeredOverrides
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *registeredOverridesQueue; // ivar: _registeredOverridesQueue


-(id)initWithConnection:(id)arg0 andStyleOverrides:(NSUInteger)arg1 ;
-(void)acquireAssertionAndDeliverTapContextToClient:(id)arg0 ;


@end


#endif