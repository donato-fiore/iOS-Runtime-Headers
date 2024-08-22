// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLVNFRAMEWORKHANDLE_H
#define _MLVNFRAMEWORKHANDLE_H


#import <Foundation/Foundation.h>


@interface _MLVNFrameworkHandle : NSObject

@property (readonly, nonatomic) Class VNImageBufferClass; // ivar: _VNImageBufferClass
@property (readonly, nonatomic) *unk detectionPrintShapesImpl; // ivar: _detectionPrintShapesImpl
@property (readonly, nonatomic) *unk detectionPrintSupportedRevisionsImpl; // ivar: _detectionPrintSupportedRevisionsImpl
@property (readonly, nonatomic) *unk detectionPrintsFromPixelBuffersImpl; // ivar: _detectionPrintsFromPixelBuffersImpl
@property (readonly, nonatomic) *unk detectionPrintsFromPixelBuffersUsesCPUOnlyImpl; // ivar: _detectionPrintsFromPixelBuffersUsesCPUOnlyImpl
@property (readonly, nonatomic) *unk scenePrintElementCountImpl; // ivar: _scenePrintElementCountImpl
@property (readonly, nonatomic) *unk scenePrintLengthImpl; // ivar: _scenePrintLengthImpl
@property (readonly, nonatomic) *unk scenePrintsFromPixelBuffersImpl; // ivar: _scenePrintsFromPixelBuffersImpl
@property (readonly, nonatomic) *unk scenePrintsFromPixelBuffersUsesCPUOnlyImpl; // ivar: _scenePrintsFromPixelBuffersUsesCPUOnlyImpl
@property (readonly, nonatomic, getter=isValid) BOOL validForObjectprint; // ivar: _validForObjectprint
@property (readonly, nonatomic, getter=isValid) BOOL validForSceneprint; // ivar: _validForSceneprint


+(id)addOrientation:(unsigned int)arg0 toOptions:(id)arg1 ;
+(id)sharedHandle;
-(NSUInteger)elementCountForScenePrintRequestRevision:(NSUInteger)arg0 ;
-(NSUInteger)lengthInBytesForScenePrintRequestRevision:(NSUInteger)arg0 ;
-(id)detectionPrintShapes:(NSUInteger)arg0 ;
-(id)detectionPrintSupportedRevisions;
-(id)detectionPrintsFromPixelBuffers:(struct __CVBuffer *)arg0 version:(NSUInteger)arg1 augmentationOptions:(id)arg2 useCPUOnly:(BOOL)arg3 error:(*id)arg4 ;
-(id)init;
-(id)scenePrintsFromPixelBuffers:(struct __CVBuffer *)arg0 version:(NSUInteger)arg1 augmentationOptions:(id)arg2 useCPUOnly:(BOOL)arg3 error:(*id)arg4 ;
-(struct __CVBuffer *)createPixelBufferFromCGImage:(struct CGImage *)arg0 constraint:(id)arg1 cropRect:(struct CGRect )arg2 cropAndScaleOption:(NSUInteger)arg3 options:(id)arg4 error:(*id)arg5 ;
-(struct __CVBuffer *)createPixelBufferFromImageAtURL:(id)arg0 constraint:(id)arg1 cropRect:(struct CGRect )arg2 cropAndScaleOption:(NSUInteger)arg3 options:(id)arg4 error:(*id)arg5 ;
-(struct __CVBuffer *)createPixelBufferFromVNImageBuffer:(id)arg0 constraint:(id)arg1 cropRect:(struct CGRect )arg2 cropAndScaleOption:(NSUInteger)arg3 options:(id)arg4 error:(*id)arg5 ;


@end


#endif