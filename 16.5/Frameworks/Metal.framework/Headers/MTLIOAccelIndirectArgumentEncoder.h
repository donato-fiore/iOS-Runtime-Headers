// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLIOACCELINDIRECTARGUMENTENCODER_H
#define MTLIOACCELINDIRECTARGUMENTENCODER_H

@class MTLIndirectArgumentEncoder;



@interface MTLIOAccelIndirectArgumentEncoder : MTLIndirectArgumentEncoder

@property (readonly) NSUInteger encodedLength;


-(*void)constantDataAtIndex:(NSUInteger)arg0 ;
-(void)setBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setIndirectArgumentBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(void)setIndirectCommandBuffer:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setIndirectCommandBuffers:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setIntersectionFunctionTable:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setIntersectionFunctionTables:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setSamplerState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setVisibleFunctionTable:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setVisibleFunctionTables:(*id)arg0 withRange:(struct _NSRange )arg1 ;


@end


#endif