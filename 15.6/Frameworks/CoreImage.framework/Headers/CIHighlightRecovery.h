// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIHIGHLIGHTRECOVERY_H
#define CIHIGHLIGHTRECOVERY_H

@class NSNumber, NSDictionary;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIHighlightRecovery : CIFilter

@property (retain) NSNumber *inputApertureScaling; // ivar: inputApertureScaling
@property (retain, nonatomic) NSNumber *inputDraftMode; // ivar: inputDraftMode
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (retain) NSNumber *inputScale; // ivar: inputScale
@property (retain) NSDictionary *inputTuningParameters; // ivar: inputTuningParameters


-(id)outputImage;


@end


#endif