// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMESHBLENDSHAPEMODELDESCRIPTOR_H
#define REMESHBLENDSHAPEMODELDESCRIPTOR_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMeshBlendShapeModelDescriptor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *blendShapeBuffers; // ivar: _blendShapeBuffers
@property (readonly, nonatomic) NSUInteger blendShapeIndexType; // ivar: _blendShapeIndexType
@property (readonly, nonatomic) NSArray *perMeshPartBlendShapeBufferIndex; // ivar: _perMeshPartBlendShapeBufferIndex


+(BOOL)supportsSecureCoding;
-(BOOL)validateWithPayloadSize:(NSUInteger)arg0 partCount:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithBlendShapeIndexType:(NSUInteger)arg0 blendShapeBuffers:(id)arg1 perMeshPartBlendShapeBufferIndex:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMeshBlendShapeData:(*void)arg0 meshPartCount:(NSUInteger)arg1 payloadBuilder:(*void)arg2 deformationModelData:(*void)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif