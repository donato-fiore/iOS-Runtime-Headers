// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IOGPUMETALDEVICESHMEMPOOL_H
#define IOGPUMETALDEVICESHMEMPOOL_H


#import <Foundation/Foundation.h>


@interface IOGPUMetalDeviceShmemPool : NSObject {
    _IOGPUMetalDeviceShmemPoolPrivate _priv;
}




-(id)initWithDevice:(id)arg0 resourceClass:(Class)arg1 shmemSize:(unsigned int)arg2 shmemType:(int)arg3 options:(id)arg4 ;
-(int)availableCount;
-(unsigned int)shmemSize;
-(void)dealloc;
-(void)prune;
-(void)purge;
-(void)setShmemSize:(unsigned int)arg0 ;


@end


#endif