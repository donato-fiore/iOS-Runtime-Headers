// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IOGPUMETALRESOURCEPOOL_H
#define IOGPUMETALRESOURCEPOOL_H

@class IOGPUMetalDevice<MTLDevice>;

#import <Foundation/Foundation.h>


@interface IOGPUMetalResourcePool : NSObject {
    _IOGPUMetalResourcePoolPrivate _priv;
    Class _resourceClass;
    IOGPUMetalDevice<MTLDevice> *_device;
    NSUInteger age_to_purge;
    unsigned int generation;
}


@property (readonly) *IOGPUNewResourceArgs resourceArgs; // ivar: _resourceArgs
@property (readonly) unsigned int resourceArgsSize; // ivar: _resourceArgsSize


-(BOOL)updateResourcePurgeability;
-(id)initWithDevice:(id)arg0 resourceClass:(Class)arg1 resourceArgs:(struct IOGPUNewResourceArgs *)arg2 resourceArgsSize:(unsigned int)arg3 options:(id)arg4 ;
-(int)availableCount;
-(void)dealloc;
-(void)purge;
-(void)purgeWithLock;


@end


#endif