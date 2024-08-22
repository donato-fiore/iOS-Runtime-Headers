// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNPROCESSINGDEVICE_H
#define VNPROCESSINGDEVICE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VNProcessingDevice : NSObject <NSCopying>





+(id)allDevices;
+(id)defaultANEDevice;
+(id)defaultCPUDevice;
+(id)defaultDevice;
+(id)defaultMetalDevice;
+(id)deviceForMetalDevice:(id)arg0 ;
+(id)directANEDevice;
+(void)_lockStaticObjectsAccessLock;
+(void)_unlockStaticObjectsAccessLock;
+(void)forcedCleanup;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)targetsANE;
-(BOOL)targetsCPU;
-(BOOL)targetsGPU;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)metalDevice;
-(int)espressoDeviceID;
-(int)espressoEngine;
-(int)espressoStorageType;


@end


#endif