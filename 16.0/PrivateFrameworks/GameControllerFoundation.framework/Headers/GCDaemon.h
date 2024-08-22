// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCDAEMON_H
#define GCDAEMON_H

@class NSString;
@protocol NSObject, OS_dispatch_workloop;

#import <Foundation/Foundation.h>

#import "GCConfigXPCServiceConnection.h"
#import "GCConfigurationAssetManagementServiceConnection.h"
#import "_GCGenericDeviceDBServiceConnection.h"

@interface GCDaemon : NSObject <NSObject>

 {
    NSObject<OS_dispatch_workloop> *_workloop;
    GCConfigXPCServiceConnection *_configServiceConnection;
    GCConfigurationAssetManagementServiceConnection *_configAssetManagementServiceConnection;
    _GCGenericDeviceDBServiceConnection *_configGenericDeviceDBServiceConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createRootWorkloop;
-(id)init;
-(id)serviceFor:(id)arg0 client:(id)arg1 ;


@end


#endif