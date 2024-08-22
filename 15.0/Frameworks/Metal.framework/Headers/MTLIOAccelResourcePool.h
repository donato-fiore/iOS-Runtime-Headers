// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLIOACCELRESOURCEPOOL_H
#define MTLIOACCELRESOURCEPOOL_H

@class MTLIOAccelDevice<MTLDevice>;

#import <Foundation/Foundation.h>


@interface MTLIOAccelResourcePool : NSObject {
    _MTLIOAccelResourcePoolPrivate _priv;
    Class _resourceClass;
    MTLIOAccelDevice<MTLDevice> *_device;
    NSUInteger age_to_purge;
    unsigned int generation;
}


@property (readonly) *IOAccelNewResourceArgs resourceArgs; // ivar: _resourceArgs
@property (readonly) unsigned int resourceArgsSize; // ivar: _resourceArgsSize


-(BOOL)updateResourcePurgeability;
-(id)initWithDevice:(id)arg0 resourceClass:(Class)arg1 resourceArgs:(struct IOAccelNewResourceArgs *)arg2 resourceArgsSize:(unsigned int)arg3 options:(id)arg4 ;
-(int)availableCount;
-(void)dealloc;
-(void)purge;
-(void)purgeWithLock;


@end


#endif