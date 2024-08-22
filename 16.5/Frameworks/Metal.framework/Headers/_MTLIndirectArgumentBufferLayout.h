// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MTLINDIRECTARGUMENTBUFFERLAYOUT_H
#define _MTLINDIRECTARGUMENTBUFFERLAYOUT_H

@protocol MTLDeviceSPI;

#import <Foundation/Foundation.h>


@interface _MTLIndirectArgumentBufferLayout : NSObject {
    *void _private;
}


@property (readonly) NSUInteger alignment;
@property (readonly) BOOL bufferLayoutMatchesFrontEndLayout;
@property (readonly, nonatomic) NSObject<MTLDeviceSPI> *device;
@property (readonly) NSUInteger encodedLength;
@property (readonly) unsigned int hashMask;
@property (readonly) unsigned int hashOffset;
@property (readonly) unsigned int hashSignature;
@property (readonly) unsigned int hashValue;


-(*void)virtualAddressForBufferAtIndex:(NSUInteger)arg0 inIndirectArgumentBuffer:(id)arg1 atOffset:(NSUInteger)arg2 ;
-(NSUInteger)constantOffsetAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)uniqueIdentifierForComputePipelineAtIndex:(NSUInteger)arg0 inIndirectArgumentBuffer:(id)arg1 atOffset:(NSUInteger)arg2 ;
-(NSUInteger)uniqueIdentifierForIndirectCommandBufferAtIndex:(NSUInteger)arg0 inIndirectArgumentBuffer:(id)arg1 atOffset:(NSUInteger)arg2 ;
-(NSUInteger)uniqueIdentifierForInstanceAccelerationStructureAtIndex:(NSUInteger)arg0 inIndirectArgumentBuffer:(id)arg1 atOffset:(NSUInteger)arg2 ;
-(NSUInteger)uniqueIdentifierForIntersectionFunctionTableAtIndex:(NSUInteger)arg0 inIndirectArgumentBuffer:(id)arg1 atOffset:(NSUInteger)arg2 ;
-(NSUInteger)uniqueIdentifierForPrimitiveAccelerationStructureAtIndex:(NSUInteger)arg0 inIndirectArgumentBuffer:(id)arg1 atOffset:(NSUInteger)arg2 ;
-(NSUInteger)uniqueIdentifierForRenderPipelineAtIndex:(NSUInteger)arg0 inIndirectArgumentBuffer:(id)arg1 atOffset:(NSUInteger)arg2 ;
-(NSUInteger)uniqueIdentifierForSamplerAtIndex:(NSUInteger)arg0 inIndirectArgumentBuffer:(id)arg1 atOffset:(NSUInteger)arg2 ;
-(NSUInteger)uniqueIdentifierForTextureAtIndex:(NSUInteger)arg0 inIndirectArgumentBuffer:(id)arg1 atOffset:(NSUInteger)arg2 ;
-(NSUInteger)uniqueIdentifierForVisibleFunctionTableAtIndex:(NSUInteger)arg0 inIndirectArgumentBuffer:(id)arg1 atOffset:(NSUInteger)arg2 ;
-(id)bufferLayoutForResourceAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(void)dealloc;
-(void)setStructType:(id)arg0 withDevice:(id)arg1 ;


@end


#endif