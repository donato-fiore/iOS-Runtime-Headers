// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVVISIONHELPER_H
#define PVVISIONHELPER_H


#import <Foundation/Foundation.h>


@interface PVVisionHelper : NSObject



-(float)distanceBetweenFaceObservation:(id)arg0 andFaceObservation:(id)arg1 error:(*id)arg2 ;
-(id)faceObservationFromFace:(id)arg0 ;
-(id)representativenessFromFaceObservations:(id)arg0 error:(*id)arg1 ;


@end


#endif