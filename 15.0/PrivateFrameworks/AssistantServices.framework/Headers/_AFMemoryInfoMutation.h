// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AFMEMORYINFOMUTATION_H
#define _AFMEMORYINFOMUTATION_H

@class NSString;
@protocol AFMemoryInfoMutating;

#import <Foundation/Foundation.h>

#import "AFMemoryInfo.h"

@interface _AFMemoryInfoMutation : NSObject <AFMemoryInfoMutating>

 {
    AFMemoryInfo *_baseModel;
    NSUInteger _virtualMemorySizeInBytes;
    int _numberOfRegions;
    int _pageSizeInBytes;
    NSUInteger _residentMemorySizeInBytes;
    NSUInteger _peakResidentMemorySizeInBytes;
    NSUInteger _physicalMemoryFootprintInBytes;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setNumberOfRegions:(int)arg0 ;
-(void)setPageSizeInBytes:(int)arg0 ;
-(void)setPeakResidentMemorySizeInBytes:(NSUInteger)arg0 ;
-(void)setPhysicalMemoryFootprintInBytes:(NSUInteger)arg0 ;
-(void)setResidentMemorySizeInBytes:(NSUInteger)arg0 ;
-(void)setVirtualMemorySizeInBytes:(NSUInteger)arg0 ;


@end


#endif