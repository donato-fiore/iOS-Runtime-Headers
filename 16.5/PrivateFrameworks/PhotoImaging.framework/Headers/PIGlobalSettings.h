// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIGLOBALSETTINGS_H
#define PIGLOBALSETTINGS_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PIGlobalSettings : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (nonatomic) BOOL allowSpillMatteOnOlderPortraitV2Captures; // ivar: _allowSpillMatteOnOlderPortraitV2Captures
@property (nonatomic) BOOL cinematicAllowRGB10Packed;
@property (nonatomic) BOOL cinematicAllowYUVSourceInput;
@property (nonatomic) BOOL disableSegmentation;
@property (nonatomic) BOOL falseColorHDR;
@property (nonatomic) BOOL forceGlassesMatteOff; // ivar: _forceGlassesMatteOff
@property (nonatomic) BOOL forceSpillMatteOff; // ivar: _forceSpillMatteOff
@property (copy, nonatomic) NSString *parallaxLayoutConfigurationOverride;
@property (nonatomic) BOOL parallaxStyleAvoidColorWashBrownOverride; // ivar: parallaxStyleAvoidColorWashBrownOverride
@property (nonatomic) NSInteger parallaxStyleKeyLevelOverride; // ivar: parallaxStyleKeyLevelOverride
@property (nonatomic) BOOL parallaxWallpaperDisableUpgrade;
@property (nonatomic) BOOL segmentationDebugPreviewDisableClock;
@property (nonatomic) BOOL segmentationDebugPreviewHighQuality;
@property (nonatomic) BOOL segmentationDebugRoundTripProxyImage;
@property (nonatomic) BOOL segmentationDebugTintLayers;
@property (nonatomic) BOOL segmentationDisableCaching;
@property (nonatomic) NSInteger segmentationInfillAlgorithm;
@property (nonatomic) CGFloat segmentationManualGatingLenience;
@property (copy, nonatomic) NSString *styleRecipeConfigDirectoryPath;
@property (nonatomic) BOOL useStyleRecipeConfigDirectory;


+(id)IPXEditSettings;
+(id)PUEditSettings;
+(id)editSettings;
+(id)globalSettings;
-(id)init;


@end


#endif