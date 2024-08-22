// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLIOACCELRESOURCE_H
#define MTLIOACCELRESOURCE_H

@class MTLResource, NSString;
@protocol MTLResourceSPI, MTLDevice, MTLHeap;


#import "MTLIOAccelResource.h"

@interface MTLIOAccelResource : MTLResource <MTLResourceSPI>

 {
    _MTLIOAccelResource _res;
    MTLIOAccelResource *next;
    MTLIOAccelResource *prev;
    NSUInteger uniqueId;
}


@property (readonly) NSUInteger allocatedSize;
@property (readonly) NSUInteger allocationID;
@property (readonly) NSUInteger cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly, nonatomic) NSUInteger gpuAddress;
@property (readonly) NSUInteger gpuHandle;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hazardTrackingMode;
@property (readonly) NSObject<MTLHeap> *heap;
@property (readonly) NSUInteger heapOffset;
@property (copy) NSString *label;
@property (readonly) NSUInteger protectionOptions;
@property (readonly, nonatomic) unsigned int resourceID;
@property (readonly) NSUInteger resourceOptions;
@property (readonly) *__IOAccelResource resourceRef;
@property (readonly, nonatomic) NSUInteger resourceSize;
@property int responsibleProcess;
@property (readonly) NSUInteger storageMode;
@property (readonly) Class superclass;
@property (readonly) NSUInteger unfilteredResourceOptions;
@property (readonly, nonatomic) *void virtualAddress;


-(BOOL)doesAliasAllResources:(*id)arg0 count:(NSUInteger)arg1 ;
-(BOOL)doesAliasAnyResources:(*id)arg0 count:(NSUInteger)arg1 ;
-(BOOL)doesAliasResource:(id)arg0 ;
-(BOOL)isAliasable;
-(BOOL)isComplete;
-(BOOL)isPurgeable;
-(NSUInteger)setPurgeableState:(NSUInteger)arg0 ;
-(id)initMemoryless:(id)arg0 descriptor:(id)arg1 ;
-(id)initStandinWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 options:(NSUInteger)arg1 args:(struct IOAccelNewResourceArgs *)arg2 argsSize:(unsigned int)arg3 ;
-(id)initWithResource:(id)arg0 ;
-(id)retainedLabel;
-(int)setOwnerWithIdentity:(unsigned int)arg0 ;
-(struct __CFArray *)copyAnnotations;
-(struct __CFDictionary *)copyAnnotationDictionary:(NSUInteger)arg0 obj_key_name:(struct __CFString *)arg1 obj_dict:(struct __CFDictionary *)arg2 ;
-(void)annotateResource:(struct __CFDictionary *)arg0 ;
-(void)dealloc;
-(void)makeAliasable;
-(void)waitUntilComplete;


@end


#endif