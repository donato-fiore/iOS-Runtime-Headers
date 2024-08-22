// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IOGPUMEMORYINFO_H
#define IOGPUMEMORYINFO_H


#import <Foundation/Foundation.h>

#import "IOGPUMetalResource.h"

@interface IOGPUMemoryInfo : NSObject {
    *void memlist_key;
    IOGPUMetalResource *fResourceListHead;
    os_unfair_lock_s _memoryInfoLock;
}




+(id)initialize;
-(*void)addDataSource:(id)arg0 ;
-(id)init;
-(struct __CFArray *)annotationList;
-(void)addResourceToList:(id)arg0 ;
-(void)dealloc;
-(void)lock;
-(void)removeDataSource:(*void)arg0 ;
-(void)removeResourceFromList:(id)arg0 ;
-(void)shutdown;
-(void)unlock;


@end


#endif