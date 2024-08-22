// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSAPPLICATIONUSERQUITMONITOR_H
#define SBSAPPLICATIONUSERQUITMONITOR_H

@class BSServiceConnection, NSString;
@protocol SBSApplicationUserQuitMonitorServerToClientInterface, OS_dispatch_queue, SBSApplicationUserQuitMonitorDelegate;

#import <Foundation/Foundation.h>


@interface SBSApplicationUserQuitMonitor : NSObject <SBSApplicationUserQuitMonitorServerToClientInterface>

 {
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BSServiceConnection *_connection;
    id<SBSApplicationUserQuitMonitorDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)_connectionQueue_invalidate;
-(void)_connectionQueue_setupAndActivate;
-(void)invalidate;
-(void)userClosedLastSceneOfApplicationWithBundleID:(id)arg0 ;


@end


#endif