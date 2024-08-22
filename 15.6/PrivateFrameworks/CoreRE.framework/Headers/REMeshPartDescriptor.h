// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMESHPARTDESCRIPTOR_H
#define REMESHPARTDESCRIPTOR_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMeshPartDescriptor : NSObject <NSSecureCoding>

 {
    ? _boundingBoxMin;
    ? _boundingBoxMax;
}


@property ? boundingBoxMax;
@property ? boundingBoxMin;
@property (readonly, nonatomic) NSDictionary *coreAttributes; // ivar: _coreAttributes
@property (readonly, nonatomic) NSDictionary *customAttributes; // ivar: _customAttributes
@property (readonly, nonatomic) unsigned char doubleSidedFlag; // ivar: _doubleSidedFlag
@property (readonly, nonatomic) NSUInteger indexBufferSize;
@property (readonly, nonatomic) unsigned int indexCount; // ivar: _indexCount
@property (readonly, nonatomic) unsigned int indexPayloadOffset; // ivar: _indexPayloadOffset
@property (readonly, nonatomic) NSUInteger indexType; // ivar: _indexType
@property (readonly, nonatomic) BOOL isIndexed; // ivar: _isIndexed
@property (readonly, nonatomic) unsigned int materialIndex; // ivar: _materialIndex
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) ? transform; // ivar: _transform
@property (readonly, nonatomic) unsigned int vertexCount; // ivar: _vertexCount
@property (readonly, nonatomic) unsigned char windingOrderIsCCW; // ivar: _windingOrderIsCCW


-(BOOL)validateAttribute:(id)arg0 payloadSize:(NSUInteger)arg1 required:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)validateWithPayloadSize:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 vertexCount:(unsigned int)arg1 indexCount:(unsigned int)arg2 attributes:(id)arg3 materialIndex:(unsigned int)arg4 boundingBoxMin:(unsigned char)arg5 boundingBoxMax:(unsigned char)arg6 doubleSidedFlag:(struct ? )arg7 windingOrderIsCCWtransform;
-(id)initWithResourceDefinition:(*void)arg0 meshPart:(*void)arg1 payloadBuilder:(*void)arg2 ;
-(struct MeshPart )meshPartWithPayloadBuffer:(struct Buffer *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif