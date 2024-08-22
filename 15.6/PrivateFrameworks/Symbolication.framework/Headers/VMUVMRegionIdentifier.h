// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMUVMREGIONIDENTIFIER_H
#define VMUVMREGIONIDENTIFIER_H

@class NSMutableArray, NSMapTable;

#import <Foundation/Foundation.h>

#import "VMUTaskThreadStates.h"

@interface VMUVMRegionIdentifier : NSObject {
    unsigned int _task;
    int _pid;
    VMUTaskThreadStates *_threadStates;
    NSMutableArray *_regions;
    NSMapTable *_mallocZoneStatisticsMap;
    BOOL _hasFractionalPageSizes;
}




+(id)descriptionForRange:(struct _VMURange )arg0 inSortedRegions:(id)arg1 options:(NSUInteger)arg2 ;
-(BOOL)hasFractionalPageSizes;
-(id)descriptionForMallocZoneTotalsWithOptions:(NSUInteger)arg0 memorySizeDivisor:(unsigned int)arg1 ;
-(id)descriptionForRange:(struct _VMURange )arg0 ;
-(id)descriptionForRange:(struct _VMURange )arg0 options:(NSUInteger)arg1 ;
-(id)descriptionForRegionTotalsWithOptions:(NSUInteger)arg0 ;
-(id)descriptionForRegionTotalsWithOptions:(NSUInteger)arg0 memorySizeDivisor:(unsigned int)arg1 ;
-(id)descriptionOfRegionsAroundAddress:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)descriptionOfRegionsAroundAddress:(NSUInteger)arg0 options:(NSUInteger)arg1 maximumLength:(NSUInteger)arg2 memorySizeDivisor:(unsigned int)arg3 ;
-(id)init;
-(id)initWithGraph:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithTask:(unsigned int)arg0 ;
-(id)initWithTask:(unsigned int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithTask:(unsigned int)arg0 pid:(int)arg1 options:(NSUInteger)arg2 ;
-(id)nonSubmapRegionContainingAddress:(NSUInteger)arg0 ;
-(id)regions;
-(id)taskThreadStates;
-(int)_recordRegionsAroundAddress:(NSUInteger)arg0 regionDescriptionOptions:(NSUInteger)arg1 ;


@end


#endif