// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLTOOLSRESOURCE_H
#define MTLTOOLSRESOURCE_H

@class NSString;
@protocol MTLResourceSPI, MTLDevice, MTLHeap;


#import "MTLToolsObject.h"
#import "MTLToolsHeap.h"

@interface MTLToolsResource : MTLToolsObject <MTLResourceSPI>

 {
    MTLToolsHeap *_heap;
}


@property (readonly) NSUInteger allocatedSize;
@property (readonly) NSUInteger allocationID;
@property (readonly) NSUInteger cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hazardTrackingMode;
@property (readonly) NSObject<MTLHeap> *heap;
@property (readonly) NSUInteger heapOffset;
@property (copy) NSString *label;
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly) NSUInteger protectionOptions;
@property (readonly) NSUInteger resourceOptions;
@property int responsibleProcess;
@property (readonly) NSUInteger storageMode;
@property (readonly) Class superclass;
@property (readonly) NSUInteger unfilteredResourceOptions;


-(BOOL)doesAliasAllResources:(*id)arg0 count:(NSUInteger)arg1 ;
-(BOOL)doesAliasAnyResources:(*id)arg0 count:(NSUInteger)arg1 ;
-(BOOL)doesAliasResource:(id)arg0 ;
-(BOOL)isAliasable;
-(BOOL)isComplete;
-(BOOL)isPurgeable;
-(NSUInteger)setPurgeableState:(NSUInteger)arg0 ;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 heap:(id)arg2 ;
-(int)setOwnerWithIdentity:(unsigned int)arg0 ;
-(void)makeAliasable;
-(void)validateCPUReadable;
-(void)validateCPUWriteable;
-(void)waitUntilComplete;


@end


#endif