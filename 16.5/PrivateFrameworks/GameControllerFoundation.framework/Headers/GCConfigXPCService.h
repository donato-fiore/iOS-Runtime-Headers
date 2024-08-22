// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCCONFIGXPCSERVICE_H
#define GCCONFIGXPCSERVICE_H

@class NSString;
@protocol GCConfigXPCServiceInterface, NSObject, OS_dispatch_workloop;

#import <Foundation/Foundation.h>

#import "_GCConfigurationDataManager.h"
#import "_GCGenericDeviceDB.h"

@interface GCConfigXPCService : NSObject <GCConfigXPCServiceInterface, NSObject>

 {
    NSObject<OS_dispatch_workloop> *_workloop;
    _GCConfigurationDataManager *_configurationManager;
    _GCGenericDeviceDB *_genericDeviceDB;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)serviceFor:(id)arg0 client:(id)arg1 ;
-(void)connectToAssetManagementServiceWithClient:(id)arg0 reply:(id)arg1 ;
-(void)connectToGenericDeviceDBServiceWithClient:(id)arg0 reply:(id)arg1 ;


@end


#endif