// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDMAINTENANCEWORKCOORDINATORBLOCKDISPATCHER_H
#define HDMAINTENANCEWORKCOORDINATORBLOCKDISPATCHER_H

@class NSString;
@protocol HDBlockDispatcher;

#import <Foundation/Foundation.h>

#import "HDMaintenanceWorkCoordinator.h"

@interface HDMaintenanceWorkCoordinatorBlockDispatcher : NSObject <HDBlockDispatcher>

 {
    HDMaintenanceWorkCoordinator *_maintenanceWorkCoordinator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithMaintenanceWorkCoordinator:(id)arg0 ;
// -(void)dispatchBlock:(id)arg0 name:(unk)arg1  ;


@end


#endif