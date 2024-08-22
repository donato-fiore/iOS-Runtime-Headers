// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSABINARYIMAGECATALOG_H
#define OSABINARYIMAGECATALOG_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "OSABinaryImageSegment.h"

@interface OSABinaryImageCatalog : NSObject {
    OSABinaryImageSegment *_absolute_segment;
    OSABinaryImageSegment *_kernel_cache_segment;
    NSMutableArray *_kernel_segments;
    NSMutableArray *_kernel_text_exec_segments;
    NSMutableArray *_rootedCacheLibs;
    OSABinaryImageSegment *_targeted_cache;
    NSUInteger _targeted_slide;
    NSMutableDictionary *_shared_segments;
    NSMutableArray *_used_segments;
    NSMutableArray *_notes;
}




+(BOOL)isApplePath:(id)arg0 orBundle:(id)arg1 ;
-(BOOL)isAddressInTargetedCache:(NSUInteger)arg0 ;
-(NSUInteger)markImageAsUsed:(id)arg0 from:(int)arg1 ;
-(id)init;
-(id)reportUsedImages;
-(id)reportUsedImagesFullInfoUsingBlock:(id)arg0 ;
-(id)searchFrame:(NSUInteger)arg0 in:(id)arg1 regions:(id)arg2 result:(*id)arg3 ;
-(id)searchFrame:(NSUInteger)arg0 in:(id)arg1 result:(*id)arg2 ;
-(void)appendNotesTo:(id)arg0 ;
-(void)setKernelCache:(unsigned char)arg0 address:(NSUInteger)arg1 size:(NSUInteger)arg2 ;
-(void)setKernelImages:(id)arg0 ;
-(void)setKernelTextExecImages:(id)arg0 ;
-(void)setRootedCacheLibs:(struct dyld_uuid_info_64 *)arg0 count:(unsigned int)arg1 ;
-(void)targetSharedCache:(unsigned char)arg0 withSlide:(NSUInteger)arg1 atBaseAddress:(NSUInteger)arg2 ;


@end


#endif