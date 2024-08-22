// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPCOREAPPLICATIONHANDLER_H
#define CPCOREAPPLICATIONHANDLER_H

@class NSString;
@protocol LSApplicationWorkspaceObserverProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CPCoreApplicationHandler : NSObject <LSApplicationWorkspaceObserverProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)openApplicationService;
+(id)openApplicationServiceFactory:(SEL)arg0 ;
+(void)launchAppWithBundleId:(id)arg0 userActivityData:(id)arg1 launchSuspended:(BOOL)arg2 completion:(id)arg3 ;
+(void)setOpenApplicationServiceFactory:(id)arg0 ;
-(id)init;


@end


#endif