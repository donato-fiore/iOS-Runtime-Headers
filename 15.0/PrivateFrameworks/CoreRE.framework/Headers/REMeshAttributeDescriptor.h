// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMESHATTRIBUTEDESCRIPTOR_H
#define REMESHATTRIBUTEDESCRIPTOR_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMeshAttributeDescriptor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger bufferSize;
@property (readonly, nonatomic) unsigned int count; // ivar: _count
@property (readonly, nonatomic) NSUInteger format; // ivar: _format
@property (readonly, nonatomic) unsigned int payloadOffset; // ivar: _payloadOffset
@property (readonly, nonatomic) NSUInteger stepFunction; // ivar: _stepFunction


+(BOOL)supportsSecureCoding;
-(BOOL)validateWithPayloadSize:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMeshAssetBuffer:(*void)arg0 payloadBuilder:(*void)arg1 ;
-(id)initWithPayloadOffset:(unsigned int)arg0 count:(unsigned int)arg1 format:(NSUInteger)arg2 stepFunction:(NSUInteger)arg3 ;
-(id)initWithVertexAttributeDescriptor:(struct VertexAttributeDescriptor *)arg0 payloadOffset:(unsigned int)arg1 count:(unsigned int)arg2 ;
-(void)addBufferToArray:(*void)arg0 name:(char *)arg1 payloadBuffer:(struct Buffer *)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif