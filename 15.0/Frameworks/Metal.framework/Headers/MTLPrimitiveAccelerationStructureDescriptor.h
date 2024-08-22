// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLPRIMITIVEACCELERATIONSTRUCTUREDESCRIPTOR_H
#define MTLPRIMITIVEACCELERATIONSTRUCTUREDESCRIPTOR_H

@class NSArray;


#import "MTLAccelerationStructureDescriptor.h"

@interface MTLPrimitiveAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor

@property (retain, nonatomic) NSArray *geometryDescriptors; // ivar: _geometryDescriptors
@property (nonatomic) unsigned int motionEndBorderMode; // ivar: _motionEndBorderMode
@property (nonatomic) float motionEndTime; // ivar: _motionEndTime
@property (nonatomic) NSUInteger motionKeyframeCount; // ivar: _motionKeyframeCount
@property (nonatomic) unsigned int motionStartBorderMode; // ivar: _motionStartBorderMode
@property (nonatomic) float motionStartTime; // ivar: _motionStartTime


+(id)descriptor;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif