// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLEMULATIONINDIRECTARGUMENTBUFFERLAYOUT_H
#define MTLEMULATIONINDIRECTARGUMENTBUFFERLAYOUT_H

@class MTLIndirectArgumentBufferLayout;



@interface MTLEmulationIndirectArgumentBufferLayout : MTLIndirectArgumentBufferLayout {
    NSUInteger _alignment;
    *void _bufferIndices;
    *void _textureIndices;
    *void _samplerIndices;
    *void _constantIndices;
    *void _constantOffsets;
    NSUInteger _bufferOffset;
    NSUInteger _textureOffset;
    NSUInteger _samplerOffset;
}


@property (readonly, nonatomic) NSUInteger stride; // ivar: _stride


-(*void)virtualAddressForBufferAtIndex:(NSUInteger)arg0 inIndirectArgumentBuffer:(id)arg1 atOffset:(NSUInteger)arg2 ;
-(BOOL)bufferLayoutMatchesFrontEndLayout;
-(NSUInteger)alignment;
-(NSUInteger)constantOffsetAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)encodedLength;
-(NSUInteger)offsetForBuffer:(NSUInteger)arg0 ;
-(NSUInteger)offsetForConstant:(NSUInteger)arg0 ;
-(NSUInteger)offsetForSampler:(NSUInteger)arg0 ;
-(NSUInteger)offsetForTexture:(NSUInteger)arg0 ;
-(NSUInteger)uniqueIdentifierForComputePipelineAtIndex:(NSUInteger)arg0 inIndirectArgumentBuffer:(id)arg1 atOffset:(NSUInteger)arg2 ;
-(NSUInteger)uniqueIdentifierForRenderPipelineAtIndex:(NSUInteger)arg0 inIndirectArgumentBuffer:(id)arg1 atOffset:(NSUInteger)arg2 ;
-(NSUInteger)uniqueIdentifierForSamplerAtIndex:(NSUInteger)arg0 inIndirectArgumentBuffer:(id)arg1 atOffset:(NSUInteger)arg2 ;
-(NSUInteger)uniqueIdentifierForTextureAtIndex:(NSUInteger)arg0 inIndirectArgumentBuffer:(id)arg1 atOffset:(NSUInteger)arg2 ;
-(id)initWithStructType:(id)arg0 ;
-(unsigned int)hashMask;
-(unsigned int)hashOffset;
-(unsigned int)hashSignature;
-(unsigned int)hashValue;
-(void)dealloc;


@end


#endif