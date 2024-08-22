// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMORIENTATIONUTILITIES_H
#define CAMORIENTATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface CAMOrientationUtilities : NSObject



+(NSInteger)captureOrientationFromPanoramaCaptureOrientation:(NSInteger)arg0 ;
+(NSInteger)imageOrientationForVideoRequest:(id)arg0 ;
+(NSInteger)imageOrientationOfResult:(id)arg0 withCaptureDevice:(NSInteger)arg1 captureOrientation:(NSInteger)arg2 ;
+(NSInteger)panoramaCaptureOrientationFromCaptureOrientation:(NSInteger)arg0 ;
+(NSInteger)videoTrackOrientationForVideoRequest:(id)arg0 ;
+(int)exifOrientationForVideoRequest:(id)arg0 ;


@end


#endif