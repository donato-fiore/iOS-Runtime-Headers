// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMESHSKINNINGMODELDESCRIPTOR_H
#define REMESHSKINNINGMODELDESCRIPTOR_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMeshSkinningModelDescriptor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *inverseBindPoseAttributes; // ivar: _inverseBindPoseAttributes
@property (readonly, nonatomic) NSArray *skinningParts; // ivar: _skinningParts


+(BOOL)supportsSecureCoding;
-(BOOL)validateWithPayloadSize:(NSUInteger)arg0 partCount:(NSUInteger)arg1 skeletonCount:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInverseBindPoseAttributes:(id)arg0 skinningParts:(id)arg1 ;
-(id)initWithMeshSkinningData:(*void)arg0 inverseBindPoseAttributes:(id)arg1 payloadBuilder:(*void)arg2 deformationModelData:(*void)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif