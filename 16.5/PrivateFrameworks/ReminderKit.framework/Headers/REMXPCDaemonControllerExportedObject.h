// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMXPCDAEMONCONTROLLEREXPORTEDOBJECT_H
#define REMXPCDAEMONCONTROLLEREXPORTEDOBJECT_H

@protocol REMXPCClient, REMXPCDaemonControllerCloudKitNetworkActivityDelegate;

#import <Foundation/Foundation.h>


@interface REMXPCDaemonControllerExportedObject : NSObject <REMXPCClient>



@property (weak, nonatomic) NSObject<REMXPCDaemonControllerCloudKitNetworkActivityDelegate> *cloudKitNetworkActivityDelegate; // ivar: _cloudKitNetworkActivityDelegate


-(void)cloudKitNetworkActivityDidUpdate:(id)arg0 ;


@end


#endif