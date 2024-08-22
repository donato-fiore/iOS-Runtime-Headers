// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLINDIRECTCOMMANDBUFFERDESCRIPTOR_H
#define MTLINDIRECTCOMMANDBUFFERDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTLIndirectCommandBufferDescriptor : NSObject <NSCopying>

 {
    MTLIndirectCommandBufferDescriptorState _state;
}


@property (nonatomic) NSUInteger commandTypes;
@property (nonatomic) BOOL inheritBuffers;
@property (nonatomic) BOOL inheritPipelineState;
@property (nonatomic) NSUInteger maxFragmentBufferBindCount;
@property (nonatomic) NSUInteger maxKernelBufferBindCount;
@property (nonatomic) NSUInteger maxVertexBufferBindCount;
@property (nonatomic) NSUInteger resourceIndex;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif