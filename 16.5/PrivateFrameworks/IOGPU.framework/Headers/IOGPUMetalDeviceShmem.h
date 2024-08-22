// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IOGPUMETALDEVICESHMEM_H
#define IOGPUMETALDEVICESHMEM_H


#import <Foundation/Foundation.h>

#import "IOGPUMetalDevice.h"

@interface IOGPUMetalDeviceShmem : NSObject {
    _IOGPUMetalDeviceShmemPrivate _priv;
    IOGPUMetalDevice *_device;
    BOOL purgeable;
}


@property (readonly) unsigned int shmemID; // ivar: _shmemID
@property (readonly) unsigned int shmemSize; // ivar: _shmemSize
@property (readonly) *void virtualAddress; // ivar: _virtualAddress


-(id)initWithDevice:(id)arg0 shmemSize:(unsigned int)arg1 shmemType:(int)arg2 ;
-(void)dealloc;


@end


#endif