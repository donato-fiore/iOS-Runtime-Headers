// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMESHBLENDSHAPEBUFFERDESCRIPTOR_H
#define REMESHBLENDSHAPEBUFFERDESCRIPTOR_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMeshBlendShapeBufferDescriptor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) unsigned int alignedFloatsPerStream; // ivar: _alignedFloatsPerStream
@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) unsigned int blendShapesCount; // ivar: _blendShapesCount
@property (readonly, nonatomic) unsigned int float4sPerIndex; // ivar: _float4sPerIndex
@property (readonly, nonatomic) unsigned int numFloatsPerStream; // ivar: _numFloatsPerStream


+(BOOL)supportsSecureCoding;
-(BOOL)validateWithPayloadSize:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithBlendShapeBufferPayload:(*void)arg0 indexType:(NSUInteger)arg1 payloadBuilder:(*void)arg2 ;
-(id)initWithBlendShapesCount:(unsigned int)arg0 float4sPerIndex:(unsigned int)arg1 numFloatsPerStream:(unsigned int)arg2 alignedFloatsPerStream:(unsigned int)arg3 attributes:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addToBlendShapeModelBuilder:(struct BlendShapeModelBuilder *)arg0 blendShapeIndex:(NSUInteger)arg1 payloadBuffer:(struct Buffer *)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif