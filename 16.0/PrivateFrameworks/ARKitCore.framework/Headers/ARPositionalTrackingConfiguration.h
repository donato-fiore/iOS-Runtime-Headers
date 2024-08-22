// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARPOSITIONALTRACKINGCONFIGURATION_H
#define ARPOSITIONALTRACKINGCONFIGURATION_H



#import "ARConfiguration.h"
#import "ARWorldMap.h"

@interface ARPositionalTrackingConfiguration : ARConfiguration

@property (retain, nonatomic) ARWorldMap *initialWorldMap; // ivar: _initialWorldMap
@property (nonatomic) NSUInteger planeDetection; // ivar: _planeDetection
@property (nonatomic, getter=isRelocalizationEnabled) BOOL relocalizationEnabled; // ivar: _relocalizationEnabled
@property (nonatomic, getter=isVIOFusionEnabled) BOOL vioFusionEnabled; // ivar: _vioFusionEnabled


+(BOOL)isSupported;
+(id)_querySupportedVideoFormats;
+(id)new;
+(id)supportedVideoFormats;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)imageSensorSettings;
-(id)init;
-(id)worldTrackingOptions;
-(void)createTechniques:(id)arg0 ;


@end


#endif