// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHDEVICE_H
#define MPSGRAPHDEVICE_H

@class NSString;
@protocol MTLDevice;

#import <Foundation/Foundation.h>


@interface MPSGraphDevice : NSObject {
    id<MTLDevice> *_mtlDevice;
}


@property (readonly, nonatomic) NSInteger gpuCoreCount;
@property (readonly, nonatomic) NSObject<MTLDevice> *metalDevice; // ivar: _metalDevice
@property (readonly, nonatomic) NSString *metalDeviceName; // ivar: _metalDeviceName
@property (readonly, nonatomic) unsigned int type; // ivar: _type


+(id)ANEDevice;
+(id)CPUDevice;
+(id)deviceWithMTLDevice:(id)arg0 ;
+(void)initialize;
-(id)initWithDeviceType:(unsigned int)arg0 metalDevice:(id)arg1 ;


@end


#endif