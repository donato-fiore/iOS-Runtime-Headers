// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLMESHPROXY_H
#define MDLMESHPROXY_H

@protocol NSSecureCoding;


#import "MDLMesh.h"

@interface MDLMeshProxy : MDLMesh <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVertexBuffers:(id)arg0 vertexCount:(NSUInteger)arg1 descriptor:(id)arg2 submeshes:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif