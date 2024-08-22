// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTTUNINGPARAMETERS_H
#define PTTUNINGPARAMETERS_H


#import <Foundation/Foundation.h>


@interface PTTuningParameters : NSObject



+(float)noiseScaleFactorForHwModelID:(int)arg0 sensorID:(int)arg1 ;
+(id)hwModelIDToString:(int)arg0 ;
+(int)hwModelIDFromFigModelSpecificName:(id)arg0 ;


@end


#endif