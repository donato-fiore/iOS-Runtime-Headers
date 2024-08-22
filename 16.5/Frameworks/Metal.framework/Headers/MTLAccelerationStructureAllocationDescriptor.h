// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLACCELERATIONSTRUCTUREALLOCATIONDESCRIPTOR_H
#define MTLACCELERATIONSTRUCTUREALLOCATIONDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLAccelerationStructureAllocationDescriptor : NSObject <NSCopying>



@property (nonatomic) BOOL forceResourceIndex; // ivar: _forceResourceIndex
@property (nonatomic) NSUInteger resourceIndex; // ivar: _resourceIndex
@property (nonatomic) NSUInteger storageMode; // ivar: _storageMode


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif