// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(BOOL)completeInitializationForSession:(id)arg0 error:(*id)arg1 ;
-(BOOL)isCRImageReaderViableAfterError:(id)arg0 ;
-(id)_observationsForImageReaderOutput:(id)arg0 requestRevision:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)cachedImageReader;
-(id)newImageReaderAndReturnError:(*id)arg0 ;
-(id)processWithOptions:(id)arg0 regionOfInterest:(struct CGRect )arg1 warningRecorder:(id)arg2 error:(*id)arg3 progressHandler:(id)arg4 ;
-(void)setCachedImageReader:(id)arg0 ;


@end


#endif