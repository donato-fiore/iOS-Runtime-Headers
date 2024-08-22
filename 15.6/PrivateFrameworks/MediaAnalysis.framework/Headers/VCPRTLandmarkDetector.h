// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPRTLANDMARKDETECTOR_H
#define VCPRTLANDMARKDETECTOR_H


#import <Foundation/Foundation.h>


@interface VCPRTLandmarkDetector : NSObject {
    *LandmarkDetector _internalLandmarkDetector;
    int _numOfLandmarks;
}




-(id)initFromConfigFile:(id)arg0 numStage:(int)arg1 numLandmarks:(int)arg2 numTreePerStage:(int)arg3 depthOfTree:(int)arg4 numFeatures:(int)arg5 ;
-(void)calculateFaceRectFromPrevLM:(*float)arg0 result:(*float)arg1 numOfLandmarks:(int)arg2 ;
-(void)dealloc;
-(void)detectLandmark:(char *)arg0 width:(int)arg1 height:(int)arg2 stride:(int)arg3 facerect:(*float)arg4 prevResult:(*float)arg5 result:(*float)arg6 ;


@end


#endif