// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PANORAMAGYROSTAGE_H
#define PANORAMAGYROSTAGE_H

@class NSDictionary, NSString;
@protocol ImageBufferProcessor;

#import <Foundation/Foundation.h>


@interface PanoramaGyroStage : NSObject <ImageBufferProcessor>

 {
    BOOL _sensorCoordinateSystem;
    ? _txty;
    ? _translationRate;
    ? _translation;
    ? _rotation;
}


@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (nonatomic) CGFloat curTime; // ivar: _curTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float focalLength; // ivar: _focalLength
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isGyroDataValid; // ivar: _isGyroDataValid
@property (nonatomic) BOOL isTranslationValid; // ivar: _isTranslationValid
@property ? rotation;
@property (nonatomic) float sliceRatio; // ivar: _sliceRatio
@property (readonly) Class superclass;
@property ? translation;
@property ? translationRate;
@property (retain, nonatomic) NSDictionary *tuningParameters;
@property ? txty;


-(int)update:(id)arg0 sliceType:(int)arg1 sliceWidth:(float)arg2 sliceHeight:(float)arg3 sliceID:(int)arg4 ;
-(int)updateWithCoreMotion:(*float)arg0 sliceType:(int)arg1 sliceWidth:(float)arg2 sliceWidth:(float)arg3 scale:(float)arg4 ;
-(int)updateWithMedian:(struct ? *)arg0 ;


@end


#endif