// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRDEVICEMANAGER_H
#define NRDEVICEMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NRDeviceManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)copySharedDeviceManager;
-(id)copyDeviceListString;
-(id)copyIDSDeviceID;
-(void)disableDevice:(id)arg0 ;
-(void)disableDevice:(id)arg0 queue:(id)arg1 completionBlock:(id)arg2 ;
-(void)enableDevice:(id)arg0 ;
-(void)enableDevice:(id)arg0 queue:(id)arg1 completionBlock:(id)arg2 ;
-(void)registerDevice:(id)arg0 properties:(id)arg1 operationalproperties:(id)arg2 queue:(id)arg3 completionBlock:(id)arg4 ;
-(void)registerDevice:(id)arg0 properties:(id)arg1 queue:(id)arg2 completionBlock:(id)arg3 ;
-(void)unregisterAllDevicesWithQueue:(id)arg0 completionBlock:(id)arg1 ;
-(void)unregisterDevice:(id)arg0 ;
-(void)unregisterDevice:(id)arg0 queue:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif