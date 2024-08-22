// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSMEMORYFOOTPRINT_H
#define WBSMEMORYFOOTPRINT_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WBSMemoryFootprintMallocZone.h"

@interface WBSMemoryFootprint : NSObject <NSSecureCoding>

 {
    task_vm_info _vmInfo;
}


@property (readonly, nonatomic) WBSMemoryFootprintMallocZone *defaultMallocZone;
@property (readonly, nonatomic) NSUInteger dirtySize;
@property (readonly, nonatomic) NSUInteger residentSize;
@property (readonly, nonatomic) NSArray *zones; // ivar: _zones


+(BOOL)supportsSecureCoding;
+(id)new;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif