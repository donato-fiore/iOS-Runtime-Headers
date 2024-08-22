// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNCOREMLTRANSFORMER_H
#define VNCOREMLTRANSFORMER_H



#import "VNDetector.h"
#import "VNCoreMLModel.h"

@interface VNCoreMLTransformer : VNDetector

@property (readonly) VNCoreMLModel *model; // ivar: _model


-(BOOL)needsMetalContext;
-(id)initWithOptions:(id)arg0 model:(id)arg1 error:(*id)arg2 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;


@end


#endif