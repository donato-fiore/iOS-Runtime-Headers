// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNMTLMESHELEMENT_H
#define SCNMTLMESHELEMENT_H


#import <Foundation/Foundation.h>

#import "SCNMTLBuffer.h"

@interface SCNMTLMeshElement : NSObject

@property (readonly, nonatomic) NSInteger effectiveIndexCount; // ivar: _effectiveIndexCount
@property (readonly, nonatomic) NSInteger effectiveIndexOffset; // ivar: _effectiveIndexOffset
@property (readonly, nonatomic) NSInteger effectivePrimitiveCount;
@property (retain, nonatomic) SCNMTLBuffer *indexBuffer; // ivar: _indexBuffer
@property (nonatomic) NSInteger indexCount; // ivar: _indexCount
@property (nonatomic) NSUInteger indexType; // ivar: _indexType
@property (nonatomic) NSUInteger instanceCount; // ivar: _instanceCount
@property (readonly, nonatomic) NSInteger primitiveCount;
@property (nonatomic) NSUInteger primitiveType; // ivar: _primitiveType
@property (nonatomic) NSInteger sharedIndexBufferOffset; // ivar: _sharedIndexBufferOffset


-(?)setupWithElement;
-(id)description;
-(void)dealloc;
-(void)setPrimitiveRange:(struct ? )arg0 ;


@end


#endif