// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYMULTIPARTPANORAMASETTINGS_H
#define PXSTORYMULTIPARTPANORAMASETTINGS_H



#import "PXSettings.h"

@interface PXStoryMultipartPanoramaSettings : PXSettings

@property (nonatomic) BOOL isFeatureEnabled; // ivar: _isFeatureEnabled
@property (nonatomic) NSInteger maximumNumberOfParts; // ivar: _maximumNumberOfParts
@property (nonatomic) CGFloat maximumTileSide; // ivar: _maximumTileSide
@property (nonatomic) NSInteger overlappingTileCount; // ivar: _overlappingTileCount
@property (nonatomic) CGFloat productionReportsTimeInterval; // ivar: _productionReportsTimeInterval
@property (nonatomic) CGFloat productionSimulatedDelay; // ivar: _productionSimulatedDelay
@property (nonatomic) CGFloat tileOverlapThreshold; // ivar: _tileOverlapThreshold


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif