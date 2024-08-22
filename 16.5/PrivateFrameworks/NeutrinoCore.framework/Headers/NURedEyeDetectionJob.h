// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUREDEYEDETECTIONJOB_H
#define NUREDEYEDETECTIONJOB_H

@class CIImage;


#import "NUImageDataJob.h"

@interface NURedEyeDetectionJob : NUImageDataJob {
    CIImage *_fullSizeImage;
}




-(BOOL)prepare:(*id)arg0 ;
-(id)requestOptions;
-(void)cleanUp;


@end


#endif