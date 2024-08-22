// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFMEMORYINFO_H
#define AFMEMORYINFO_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFMemoryInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) int numberOfRegions; // ivar: _numberOfRegions
@property (readonly, nonatomic) int pageSizeInBytes; // ivar: _pageSizeInBytes
@property (readonly, nonatomic) NSUInteger peakResidentMemorySizeInBytes; // ivar: _peakResidentMemorySizeInBytes
@property (readonly, nonatomic) NSUInteger physicalMemoryFootprintInBytes; // ivar: _physicalMemoryFootprintInBytes
@property (readonly, nonatomic) NSUInteger residentMemorySizeInBytes; // ivar: _residentMemorySizeInBytes
@property (readonly, nonatomic) NSUInteger virtualMemorySizeInBytes; // ivar: _virtualMemorySizeInBytes


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVirtualMemorySizeInBytes:(NSUInteger)arg0 numberOfRegions:(int)arg1 pageSizeInBytes:(int)arg2 residentMemorySizeInBytes:(NSUInteger)arg3 peakResidentMemorySizeInBytes:(NSUInteger)arg4 physicalMemoryFootprintInBytes:(NSUInteger)arg5 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif