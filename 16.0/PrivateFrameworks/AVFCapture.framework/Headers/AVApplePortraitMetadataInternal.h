// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAPPLEPORTRAITMETADATAINTERNAL_H
#define AVAPPLEPORTRAITMETADATAINTERNAL_H

@class NSData, NSIndexSet;

#import <Foundation/Foundation.h>


@interface AVApplePortraitMetadataInternal : NSObject

@property (nonatomic) unsigned int SDOFRenderingVersion; // ivar: SDOFRenderingVersion
@property (nonatomic) float apertureFocalRatio; // ivar: apertureFocalRatio
@property (retain, nonatomic) NSData *faceObservationsData; // ivar: faceObservationsData
@property (nonatomic) int faceOrientation; // ivar: faceOrientation
@property (nonatomic) CGRect focusRectangle; // ivar: focusRectangle
@property (retain, nonatomic) NSIndexSet *indexesOfShallowDepthOfFieldObservations; // ivar: indexesOfShallowDepthOfFieldObservations
@property (nonatomic) float luminanceNoiseAmplitude; // ivar: luminanceNoiseAmplitude
@property (nonatomic) float maximumApertureFocalRatio; // ivar: maximumApertureFocalRatio
@property (nonatomic) float minimumApertureFocalRatio; // ivar: minimumApertureFocalRatio
@property (nonatomic) float portraitLightingEffectStrength; // ivar: portraitLightingEffectStrength
@property (nonatomic) int version; // ivar: version


-(id)init;
-(void)dealloc;


@end


#endif