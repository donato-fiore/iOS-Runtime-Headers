// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XRVMREGION_H
#define XRVMREGION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface XRVMRegion : NSObject <NSSecureCoding, NSCopying>

 {
    NSUInteger start;
    NSUInteger length;
    int current_prot;
    int max_prot;
    unsigned char external_pager;
    unsigned char share_mode;
    unsigned char user_tag;
    BOOL is_submap;
    NSString *path;
    NSString *type;
    unsigned int pages_resident;
    unsigned int pages_shared_now_private;
    unsigned int pages_swapped_out;
    unsigned int pages_dirtied;
    unsigned int ref_count;
    unsigned int region_page_shift;
}


@property (nonatomic) NSUInteger pageSize; // ivar: _pageSize


+(BOOL)supportsSecureCoding;
+(NSUInteger)regionIndexInArray:(id)arg0 forAddress:(NSUInteger)arg1 ;
+(void)initialize;
-(BOOL)isAdjacentTo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNullRegion;
-(BOOL)isSubmapRegion;
-(BOOL)matchesAddr:(NSUInteger)arg0 size:(NSUInteger)arg1 regionInfo:(struct vm_region_submap_info_64 *)arg2 ;
-(BOOL)regionMatch:(id)arg0 ;
-(BOOL)typeMatches:(id)arg0 ;
-(NSUInteger)dirtySize;
-(NSUInteger)location;
-(NSUInteger)residentSize;
-(NSUInteger)swappedSize;
-(NSUInteger)virtualSize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)displayPath;
-(id)displayType;
-(id)initWithAddress:(NSUInteger)arg0 size:(NSUInteger)arg1 regionInfo:(struct vm_region_submap_info_64 *)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)path;
-(id)type;
-(int)currentProtection;
-(int)maxProtection;
-(unsigned char)tag;
-(unsigned int)virtualPages;
-(void)_setResident:(unsigned int)arg0 dirty:(unsigned int)arg1 swapped:(unsigned int)arg2 speculative:(unsigned int)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAddress:(NSUInteger)arg0 size:(NSUInteger)arg1 ;
-(void)setPath:(id)arg0 type:(id)arg1 ;


@end


#endif