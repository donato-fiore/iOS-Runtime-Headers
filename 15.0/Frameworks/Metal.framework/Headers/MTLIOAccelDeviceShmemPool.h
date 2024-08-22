// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLIOACCELDEVICESHMEMPOOL_H
#define MTLIOACCELDEVICESHMEMPOOL_H


#import <Foundation/Foundation.h>


@interface MTLIOAccelDeviceShmemPool : NSObject {
    _MTLIOAccelDeviceShmemPoolPrivate _priv;
}




-(id)initWithDevice:(id)arg0 resourceClass:(Class)arg1 shmemSize:(unsigned int)arg2 options:(id)arg3 ;
-(int)availableCount;
-(unsigned int)shmemSize;
-(void)dealloc;
-(void)prune;
-(void)purge;
-(void)setShmemSize:(unsigned int)arg0 ;


@end


#endif