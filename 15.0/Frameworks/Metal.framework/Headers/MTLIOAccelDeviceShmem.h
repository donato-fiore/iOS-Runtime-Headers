// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLIOACCELDEVICESHMEM_H
#define MTLIOACCELDEVICESHMEM_H


#import <Foundation/Foundation.h>

#import "MTLIOAccelDevice.h"

@interface MTLIOAccelDeviceShmem : NSObject {
    _MTLIOAccelDeviceShmemPrivate _priv;
    MTLIOAccelDevice *_device;
    BOOL purgeable;
}


@property (readonly) unsigned int shmemID; // ivar: _shmemID
@property (readonly) unsigned int shmemSize; // ivar: _shmemSize
@property (readonly) *void virtualAddress; // ivar: _virtualAddress


-(id)initWithDevice:(id)arg0 shmemSize:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif