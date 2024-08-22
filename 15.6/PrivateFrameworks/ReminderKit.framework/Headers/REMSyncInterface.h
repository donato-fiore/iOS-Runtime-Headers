// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMSYNCINTERFACE_H
#define REMSYNCINTERFACE_H


#import <Foundation/Foundation.h>

#import "REMXPCDaemonController.h"

@interface REMSyncInterface : NSObject

@property (retain, nonatomic) REMXPCDaemonController *daemonController; // ivar: _daemonController


-(id)init;
-(id)initWithDaemonController:(id)arg0 ;
-(void)restartCloudKitSyncWithReason:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)syncCloudKitWithReason:(id)arg0 discretionary:(BOOL)arg1 queue:(id)arg2 completion:(id)arg3 ;


@end


#endif