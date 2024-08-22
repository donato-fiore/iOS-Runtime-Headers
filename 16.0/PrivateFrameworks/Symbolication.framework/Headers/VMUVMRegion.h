// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMUVMREGION_H
#define VMUVMREGION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VMUVMRegion : NSObject {
    _VMURange range;
    unsigned int prot;
    unsigned int maxProt;
    NSString *type;
    NSString *path;
    BOOL summarized;
    unsigned char external_pager;
    unsigned char share_mode;
    int purgeable;
    NSUInteger virtual_pages;
    NSUInteger pages_resident;
    NSUInteger pages_shared_now_private;
    NSUInteger pages_swapped_out;
    NSUInteger pages_dirtied;
    NSUInteger ref_count;
    unsigned int user_tag;
    NSUInteger object_id;
    NSUInteger offset;
    unsigned int nesting_depth;
    BOOL is_submap;
    BOOL is_macho_region;
    BOOL is_unused_data_region;
    BOOL is_unused_data_page_shared_with_active_content;
    BOOL is_wired;
    BOOL reserved_flags;
    NSUInteger mallocBlockCount;
    unsigned int mallocTypeFlag;
    unsigned int zone_index;
    unsigned int coalesced_region_count;
    NSUInteger resident_size;
    NSUInteger shared_now_private_size;
    NSUInteger swapped_out_size;
    NSUInteger dirty_size;
    NSUInteger purgable_vol_size;
    NSUInteger purgable_non_vol_size;
    NSUInteger purgable_empty_size;
    NSUInteger reusable_size;
}




+(id)columnHeadersWithOptions:(NSUInteger)arg0 maximumLength:(NSUInteger)arg1 ;
+(id)columnHeadersWithOptions:(NSUInteger)arg0 maximumLength:(NSUInteger)arg1 memorySizeDivisor:(unsigned int)arg2 hasFractionalPageSizes:(BOOL)arg3 ;
+(void)initialize;
-(BOOL)hasSameInfoAsRegion:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNullRegion;
-(BOOL)isSubmap;
-(BOOL)isWired;
-(NSUInteger)address;
-(NSUInteger)dirtyLength;
-(NSUInteger)length;
-(id)breakAtLength:(NSUInteger)arg0 ;
-(id)description;
-(id)descriptionWithOptions:(NSUInteger)arg0 maximumLength:(NSUInteger)arg1 ;
-(id)descriptionWithOptions:(NSUInteger)arg0 maximumLength:(NSUInteger)arg1 memorySizeDivisor:(unsigned int)arg2 hasFractionalPageSizes:(BOOL)arg3 ;
-(id)init;
-(id)initWithVMRegionData:(struct _VMUVMRegionData *)arg0 encodedVersion:(NSInteger)arg1 simpleSerializer:(id)arg2 error:(*id)arg3 ;
-(id)path;
-(id)type;
-(struct _VMURange )range;
-(unsigned int)maxProtection;
-(unsigned int)protection;
-(void)addInfoFromRegion:(id)arg0 ;
-(void)getVMRegionData:(struct _VMUVMRegionData *)arg0 withSimpleSerializer:(id)arg1 ;
-(void)getVMRegionDataExtra:(struct _VMUVMRegionDataExtra *)arg0 ;
-(void)setVMRegionDataExtra:(struct _VMUVMRegionDataExtra *)arg0 ;


@end


#endif