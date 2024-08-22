// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLRESOURCEALLOCATIONINFO_H
#define MTLRESOURCEALLOCATIONINFO_H

@class NSString;
@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface MTLResourceAllocationInfo : NSObject <NSCopying, NSCoding>



@property (readonly) NSUInteger dirtySize;
@property (readonly) NSString *memoryPool;
@property (readonly) BOOL pageoffRequired;
@property (readonly) BOOL purgeable;
@property (readonly) NSUInteger residentSize;
@property (readonly) NSUInteger uniqueIdentifier;
@property (readonly) NSUInteger virtualSize;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif