// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAPPLEPORTRAITMETADATA_H
#define AVAPPLEPORTRAITMETADATA_H

@class NSData, NSIndexSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AVApplePortraitMetadataInternal.h"

@interface AVApplePortraitMetadata : NSObject <NSSecureCoding>

 {
    AVApplePortraitMetadataInternal *_internal;
}


@property (readonly) unsigned int SDOFRenderingVersion;
@property (readonly) float apertureFocalRatio;
@property (readonly) NSData *faceObservationsData;
@property (readonly) int faceOrientation;
@property (readonly) CGRect focusRectangle;
@property (readonly) NSIndexSet *indexesOfShallowDepthOfFieldObservations;
@property (readonly) float luminanceNoiseAmplitude;
@property (readonly) float maximumApertureFocalRatio;
@property (readonly) float minimumApertureFocalRatio;
@property (readonly) float portraitLightingEffectStrength;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternal:(id)arg0 ;
-(id)initWithPortraitMetadataDictionary:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif