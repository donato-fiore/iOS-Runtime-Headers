// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IOACCELMEMORYINFO_H
#define IOACCELMEMORYINFO_H

@class NSDictionary, NSSet, NSArray;

#import <Foundation/Foundation.h>


@interface IOAccelMemoryInfo : NSObject {
    NSDictionary *dict;
    id *_expansionData;
}


@property (readonly) NSSet *blamedProcesses;
@property (readonly) BOOL cacheDirty;
@property (readonly) BOOL cachedCopy;
@property (readonly) NSArray *devices;
@property (readonly) NSUInteger dirtyLength;
@property (readonly) NSArray *formattedDescriptions;
@property (readonly) NSUInteger length;
@property (readonly) NSArray *mappings;
@property (readonly) NSUInteger memoryPool;
@property (readonly) NSArray *openclObjects;
@property (readonly) NSArray *openglObjects;
@property (readonly) BOOL orphaned;
@property (readonly) NSSet *processIDs;
@property (readonly) BOOL purgeable;
@property (readonly) NSUInteger residentLength;
@property (readonly) unsigned int surfaceID;
@property (readonly) BOOL wired;


+(id)newKernelAllocationList:(id)arg0 ;
+(void)collectAllocationTotalsWithOptions:(id)arg0 queue:(id)arg1 completionBlock:(id)arg2 ;
+(void)collectDataWithCompletionQueue:(id)arg0 completionBlock:(id)arg1 ;
+(void)newKernelAllocationTotals:(id)arg0 totalsReturn:(id)arg1 errorReturn:(id)arg2 ;
+(void)purgeAllVidMem;
+(void)validateDictionary:(id)arg0 ;
-(id)blamedProcessesForProcess:(int)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif