// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMUTASKMEMORYCACHE_H
#define VMUTASKMEMORYCACHE_H


#import <Foundation/Foundation.h>


@interface VMUTaskMemoryCache : NSObject {
    unsigned int _task;
    BOOL _taskIs64Bit;
    BOOL _taskIsTranslated;
}


@property (readonly, nonatomic) *mapped_memory_t memoryRegions; // ivar: _memoryRegions
@property (copy, nonatomic) id *regionInfoBlock; // ivar: _regionInfoBlock


+(BOOL)taskIs64Bit:(unsigned int)arg0 ;
+(id)taskMemoryCacheForTask:(unsigned int)arg0 ;
-(BOOL)copyRange:(struct _VMURange )arg0 to:(*void)arg1 ;
-(BOOL)taskIsTranslated;
-(id)initWithTask:(unsigned int)arg0 ;
-(int)mapAddress:(NSUInteger)arg0 size:(NSUInteger)arg1 ;
-(int)mapAddress:(NSUInteger)arg0 size:(NSUInteger)arg1 returnedAddress:(*NSUInteger)arg2 returnedSize:(*NSUInteger)arg3 ;
-(int)peekAtAddress:(NSUInteger)arg0 size:(NSUInteger)arg1 returnsBuf:(**void)arg2 ;
-(int)readPointerAt:(NSUInteger)arg0 value:(*NSUInteger)arg1 ;
-(int)startPeeking;
-(int)stopPeeking;
-(int)unmapAddress:(NSUInteger)arg0 size:(NSUInteger)arg1 ;
-(struct mapped_region_node_t *)findMappedAddress:(NSUInteger)arg0 size:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)enumerateMemoryCache:(id)arg0 ;
-(void)flushMemoryCache;


@end


#endif