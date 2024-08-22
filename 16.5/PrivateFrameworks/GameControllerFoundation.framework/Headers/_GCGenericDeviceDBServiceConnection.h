// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCGENERICDEVICEDBSERVICECONNECTION_H
#define _GCGENERICDEVICEDBSERVICECONNECTION_H

@class NSString;
@protocol _GCGenericDeviceDBService;


#import "GCConfigXPCServiceServiceConnection.h"

@interface _GCGenericDeviceDBServiceConnection : GCConfigXPCServiceServiceConnection <_GCGenericDeviceDBService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serviceProtocol;
-(id)hasModelForDevice:(id)arg0 ;
-(id)preparedModelForDevice:(id)arg0 ;


@end


#endif