// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCONFIGURATION_H
#define TSCHCONFIGURATION_H

@class TSSPropertyMap, NSString;

#import <Foundation/Foundation.h>


@interface TSCHConfiguration : NSObject

@property (nonatomic) NSInteger analyticsAppType; // ivar: _analyticsAppType
@property (readonly) TSSPropertyMap *appSpecificPropertyOverrides;
@property (nonatomic) BOOL disableHighQualityRenderingIfNecessary; // ivar: _disableHighQualityRenderingIfNecessary
@property (nonatomic) BOOL exportsUsingSageKeynoteChartNonStyleDefaultsOverride; // ivar: _exportsUsingSageKeynoteChartNonStyleDefaultsOverride
@property (copy, nonatomic) NSString *modifyChartDataHelpKey; // ivar: _modifyChartDataHelpKey
@property (retain, nonatomic) Class multiDataChartOptionsControllerBuildSupportClass; // ivar: _multiDataChartOptionsControllerBuildSupportClass
@property (nonatomic) BOOL shouldForceDiscreteGraphicsFor3D; // ivar: _shouldForceDiscreteGraphicsFor3D
@property (nonatomic) BOOL showMessageOnSelection; // ivar: _showMessageOnSelection
@property (nonatomic) BOOL supports3DFillDataEmbeddingRecovery; // ivar: _supports3DFillDataEmbeddingRecovery
@property (nonatomic) BOOL supportsChartDataEditor; // ivar: _supportsChartDataEditor
@property (nonatomic) BOOL supportsChartRangeEditingMode; // ivar: _supportsChartRangeEditingMode
@property (nonatomic) BOOL supportsNumberFormatSameAsSource; // ivar: _supportsNumberFormatSameAsSource
@property (nonatomic) BOOL supportsTextBackground; // ivar: _supportsTextBackground
@property (nonatomic) BOOL supportsTextWrapping; // ivar: _supportsTextWrapping
@property (nonatomic) BOOL use3DFillFor3DChartFallback; // ivar: _use3DFillFor3DChartFallback


+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedChartConfiguration;
+(void)resetSharedChartConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif