// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSMEMORYFOOTPRINTMALLOCZONE_H
#define WBSMEMORYFOOTPRINTMALLOCZONE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSMemoryFootprintMallocZone : NSObject <NSSecureCoding>

 {
    NSUInteger _addr;
    malloc_statistics_t _statistics;
}


@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger sizeAllocated;
@property (readonly, nonatomic) NSUInteger sizeInUse;


+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMallocZone:(struct _malloc_zone_t *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif