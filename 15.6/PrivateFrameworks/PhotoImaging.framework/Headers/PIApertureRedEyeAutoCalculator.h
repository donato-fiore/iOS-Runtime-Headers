// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIAPERTUREREDEYEAUTOCALCULATOR_H
#define PIAPERTUREREDEYEAUTOCALCULATOR_H

@class NUAutoCalculator, NUFaceDetectionRequest;



@interface PIApertureRedEyeAutoCalculator : NUAutoCalculator {
    NUFaceDetectionRequest *_faceRequest;
}




-(id)apertureRedEyeResultFromFaceObservations:(id)arg0 imageSize:(struct ? )arg1 ;
-(void)cancel;
-(void)submit:(id)arg0 ;


@end


#endif