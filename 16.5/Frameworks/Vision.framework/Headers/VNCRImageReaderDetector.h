// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNCRIMAGEREADERDETECTOR_H
#define VNCRIMAGEREADERDETECTOR_H

@class CRImageReader;


#import "VNDetector.h"

@interface VNCRImageReaderDetector : VNDetector {
    CRImageReader *_imageReader;
}




+(id)_imageReaderInitializationOptionsForCreationOptions:(id)arg0 error:(*id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)imageReaderRecognitionOptionsForProcessOptions:(id)arg0 ;
+(id)supportedLanguagesForProcessOptions:(id)arg0 error:(*id)arg1 ;
-(?)createRegionOfInterestCrop:(?)arg0 options:(?)arg1 warningRecorder:(?)arg2 pixelBuffer:(?)arg3 errorprogressHandler;
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)isCRImageReaderViableAfterError:(id)arg0 ;
-(id)_observationsForImageReaderOutput:(id)arg0 requestRevision:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)cachedImageReader;
-(id)newImageReaderAndReturnError:(*id)arg0 ;
-(id)processRegionOfInterest:(struct CGRect )arg0 croppedPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 error:(*id)arg5 progressHandler:(id)arg6 ;
-(void)setCachedImageReader:(id)arg0 ;


@end


#endif