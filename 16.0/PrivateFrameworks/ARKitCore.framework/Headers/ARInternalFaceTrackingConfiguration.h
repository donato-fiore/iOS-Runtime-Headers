// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARINTERNALFACETRACKINGCONFIGURATION_H
#define ARINTERNALFACETRACKINGCONFIGURATION_H



#import "ARConfiguration.h"

@interface ARInternalFaceTrackingConfiguration : ARConfiguration

@property (nonatomic) NSInteger maximumNumberOfTrackedFaces; // ivar: _maximumNumberOfTrackedFaces
@property (nonatomic) BOOL useAlternativeResources; // ivar: _useAlternativeResources


+(BOOL)isSupported;
+(id)new;
+(id)supportedVideoFormats;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)imageSensorSettings;
-(id)init;
-(id)renderingTechnique;
-(void)createTechniques:(id)arg0 ;
-(void)setCameraPosition:(NSInteger)arg0 ;
-(void)setLightEstimationEnabled:(BOOL)arg0 ;
-(void)setMirroredFrameOutput:(BOOL)arg0 ;


@end


#endif