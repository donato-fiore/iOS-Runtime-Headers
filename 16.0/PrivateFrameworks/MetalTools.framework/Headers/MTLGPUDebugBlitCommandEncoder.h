// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLGPUDEBUGBLITCOMMANDENCODER_H
#define MTLGPUDEBUGBLITCOMMANDENCODER_H

@class NSString;
@protocol MTLGPUDebugCommandEncoder;


#import "MTLToolsBlitCommandEncoder.h"

@interface MTLGPUDebugBlitCommandEncoder : MTLToolsBlitCommandEncoder <MTLGPUDebugCommandEncoder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int encoderID; // ivar: _encoderID
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithBlitCommandEncoder:(id)arg0 parent:(id)arg1 descriptor:(id)arg2 encoderID:(unsigned int)arg3 ;
-(id)temporaryBufferWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)temporaryBufferWithLength:(NSUInteger)arg0 ;
-(void)copyIndirectCommandBuffer:(id)arg0 sourceRange:(struct _NSRange )arg1 destination:(id)arg2 destinationIndex:(NSUInteger)arg3 ;
-(void)optimizeIndirectCommandBuffer:(id)arg0 withRange:(struct _NSRange )arg1 ;


@end


#endif