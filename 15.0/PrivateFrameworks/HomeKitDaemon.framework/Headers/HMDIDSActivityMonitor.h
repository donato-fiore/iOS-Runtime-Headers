// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDIDSACTIVITYMONITOR_H
#define HMDIDSACTIVITYMONITOR_H

@class IDSActivityMonitor, NSString;
@protocol HMFLogging;

#import <Foundation/Foundation.h>


@interface HMDIDSActivityMonitor : NSObject <HMFLogging>



@property (readonly) IDSActivityMonitor *activityMonitor; // ivar: _activityMonitor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithActivity:(id)arg0 serviceIdentifier:(id)arg1 ;
-(id)logIdentifier;
-(void)broadcastSubActivity:(id)arg0 toPushTokens:(id)arg1 ;
-(void)listenWithDelegate:(id)arg0 ;
-(void)stopBroadcastingSubActivity:(id)arg0 ;


@end


#endif