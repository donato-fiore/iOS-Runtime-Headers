// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWUBINFERENCECONTROLLERCONFIGURATION_H
#define BWUBINFERENCECONTROLLERCONFIGURATION_H



#import "BWStillImageProcessorConfiguration.h"
#import "BWVideoFormat.h"

@interface BWUBInferenceControllerConfiguration : BWStillImageProcessorConfiguration

@property (nonatomic) BOOL generateInfoWhetherMasksContainValidContent; // ivar: _generateInfoWhetherMasksContainValidContent
@property (retain, nonatomic) BWVideoFormat *inputFormat; // ivar: _inputFormat
@property (nonatomic) int personSemanticsVersion; // ivar: _personSemanticsVersion
@property (nonatomic) BOOL providePersonInstanceMasks; // ivar: _providePersonInstanceMasks
@property (nonatomic) BOOL providePersonMask; // ivar: _providePersonMask
@property (nonatomic) BOOL provideSkinToneClassifications; // ivar: _provideSkinToneClassifications
@property (nonatomic) BOOL provideSkyMask; // ivar: _provideSkyMask
@property (nonatomic) BOOL provideSmartCameraClassifications; // ivar: _provideSmartCameraClassifications
@property (nonatomic) BOOL redEyeReductionEnabled; // ivar: _redEyeReductionEnabled
@property (nonatomic) int semanticDevelopmentVersion; // ivar: _semanticDevelopmentVersion
@property (nonatomic) int semanticRenderingVersion; // ivar: _semanticRenderingVersion


-(id)init;
-(void)dealloc;


@end


#endif