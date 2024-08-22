// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUIMAGEEXPORTJOB_H
#define NUIMAGEEXPORTJOB_H

@class NSData;


#import "NUExportJob.h"

@interface NUImageExportJob : NUExportJob {
    NSData *_destinationData;
}




-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)_filterProperties:(id)arg0 ;
-(id)getOriginalAuxImagesFromNodeGraph:(*id)arg0 ;
-(id)imageDestinationOptions;
-(id)imageExportRequest;
-(id)initWithExportRequest:(id)arg0 ;
-(id)initWithImageExportRequest:(id)arg0 ;
-(id)prepareNodeWithPipelineState:(id)arg0 error:(*id)arg1 ;
-(id)renderer:(*id)arg0 ;
-(id)result;
-(struct CGImage *)copyCGImageWithIOSurface:(id)arg0 fromRect:(struct CGRect )arg1 colorSpace:(id)arg2 error:(*id)arg3 ;
-(void)cleanUp;


@end


#endif