// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTPORTRAITSTILLSDOFRENDERSTATE_H
#define PTPORTRAITSTILLSDOFRENDERSTATE_H

@class NSString;
@protocol PTRenderState;

#import <Foundation/Foundation.h>


@interface PTPortraitStillSDOFRenderState : NSObject <PTRenderState>

 {
    ? visCropFactor;
}


@property (nonatomic) int conversionGain; // ivar: conversionGain
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float focalLenIn35mmFilm; // ivar: focalLenIn35mmFilm
@property (readonly) NSUInteger hash;
@property (readonly) int quality; // ivar: _quality
@property (nonatomic) int rawSensorHeight; // ivar: rawSensorHeight
@property (nonatomic) int rawSensorWidth; // ivar: rawSensorWidth
@property (nonatomic) int readNoise_1x; // ivar: readNoise_1x
@property (nonatomic) int readNoise_8x; // ivar: readNoise_8x
@property (nonatomic) int sensorID; // ivar: sensorID
@property (readonly) Class superclass;
@property (nonatomic) CGRect totalSensorCrop; // ivar: totalSensorCrop
@property ? visCropFactor;


-(id)initWithDevice:(id)arg0 disparityWidth:(NSUInteger)arg1 disparityHeight:(NSUInteger)arg2 quality:(int)arg3 ;


@end


#endif