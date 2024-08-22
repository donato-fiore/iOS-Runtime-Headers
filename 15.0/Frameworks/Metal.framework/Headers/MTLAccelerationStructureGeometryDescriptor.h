// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLACCELERATIONSTRUCTUREGEOMETRYDESCRIPTOR_H
#define MTLACCELERATIONSTRUCTUREGEOMETRYDESCRIPTOR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLAccelerationStructureGeometryDescriptor : NSObject <NSCopying>



@property (nonatomic) BOOL allowDuplicateIntersectionFunctionInvocation; // ivar: _allowDuplicateIntersectionFunctionInvocation
@property (nonatomic) NSUInteger intersectionFunctionTableOffset; // ivar: _intersectionFunctionTableOffset
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) BOOL opaque; // ivar: _opaque


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif