// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PANORAMAGYROSTAGE_H
#define PANORAMAGYROSTAGE_H

@class NSDictionary, NSString;
@protocol ImageBufferProcessor;

#import <Foundation/Foundation.h>


@interface PanoramaGyroStage : NSObject <ImageBufferProcessor>

 {
    CGFloat _curTime;
    BOOL _isTranslationValid;
    BOOL _isGyroDataValid;
    ? _translationRate;
    ? _translation;
    ? _rotation;
    ? _txty;
    ? _transformMatrix;
    float _focalLength;
    float _sliceHeight;
    float _sliceWidth;
    int _motionSource;
}


@property (retain, nonatomic) NSDictionary *cameraInfoByPortType; // ivar: cameraInfoByPortType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *tuningParameters; // ivar: tuningParameters


-(id)init;
-(int)finishProcessing;
-(int)prepareToProcess:(unsigned int)arg0 ;
-(int)prewarm;
-(int)process;
-(int)purgeResources;
-(int)resetState;
-(int)setup;
-(int)update:(id)arg0 sliceType:(int)arg1 sliceWidth:(float)arg2 sliceHeight:(float)arg3 sliceID:(int)arg4 ;
-(int)updateWithDebugISPMedian:(struct ? *)arg0 ;
-(int)updateWithTransformMatrix:(*float)arg0 sliceType:(int)arg1 ;
-(int)updateWithTranslation:(*float)arg0 sliceType:(int)arg1 ;
-(struct ? )ISPMotionToHomography;
-(struct ? )toHomography;
-(struct ? )transformToHomography;
-(struct ? )translationToHomography;


@end


#endif