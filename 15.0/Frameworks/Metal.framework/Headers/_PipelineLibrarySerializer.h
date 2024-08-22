// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PIPELINELIBRARYSERIALIZER_H
#define _PIPELINELIBRARYSERIALIZER_H


#import <Foundation/Foundation.h>


@interface _PipelineLibrarySerializer : NSObject {
    *void _binarySerializer;
}




-(NSUInteger)addLibrary:(*void)arg0 ;
-(NSUInteger)totalSize;
-(NSUInteger)writeToMemory:(char *)arg0 size:(NSUInteger)arg1 ;
-(id)addComputePipelineDescriptor:(*void)arg0 ;
-(id)addRenderPipelineDescriptor:(*void)arg0 ;
-(id)addSpecializedFunction:(id)arg0 descriptor:(*void)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif