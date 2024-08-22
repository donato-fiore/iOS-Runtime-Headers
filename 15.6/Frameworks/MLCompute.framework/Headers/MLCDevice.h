// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCDEVICE_H
#define MLCDEVICE_H

@class NSArray;
@protocol NSCopying, MLComputeEngineControl><MLCLayerOperations><MLCEngineDispatch><MLComputeEngineOptimizerUpdate><MLCDeviceProperties, MLCDeviceProperties;

#import <Foundation/Foundation.h>


@interface MLCDevice : NSObject <NSCopying>



@property (readonly, nonatomic) int actualDeviceType;
@property (retain, nonatomic) NSObject<MLComputeEngineControl><MLCLayerOperations><MLCEngineDispatch><MLComputeEngineOptimizerUpdate><MLCDeviceProperties> *computeEngine; // ivar: _computeEngine
@property (retain, nonatomic) NSObject<MLCDeviceProperties> *engine; // ivar: _engine
@property (readonly, nonatomic) NSArray *gpuDevices;
@property (nonatomic) int type; // ivar: _type


+(id)aneDevice;
+(id)cpuDevice;
+(id)deviceWithGPUDevices:(id)arg0 ;
+(id)deviceWithType:(int)arg0 ;
+(id)deviceWithType:(int)arg0 selectsMultipleComputeDevices:(BOOL)arg1 ;
+(id)gpuDevice;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDevice:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithGPUs:(id)arg0 ;
-(id)initWithType:(int)arg0 engine:(id)arg1 ;
-(id)initWithType:(int)arg0 selectsMultipleComputeDevices:(BOOL)arg1 ;
-(void)switchToCPUDevice;


@end


#endif