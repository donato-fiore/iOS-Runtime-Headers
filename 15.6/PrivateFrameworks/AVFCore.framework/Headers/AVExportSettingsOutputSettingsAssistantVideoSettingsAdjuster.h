// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVEXPORTSETTINGSOUTPUTSETTINGSASSISTANTVIDEOSETTINGSADJUSTER_H
#define AVEXPORTSETTINGSOUTPUTSETTINGSASSISTANTVIDEOSETTINGSADJUSTER_H

@class NSString, NSDictionary;
@protocol AVOutputSettingsAssistantVideoSettingsAdjuster;

#import <Foundation/Foundation.h>


@interface AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster : NSObject <AVOutputSettingsAssistantVideoSettingsAdjuster>

 {
    NSString *_outputSettingsPresetIdentifier;
    NSDictionary *_exportSettings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)averageBitRateForSourceFormatDescription:(struct opaqueCMFormatDescription *)arg0 andTargetFrameRate:(float)arg1 andEncoderSpecification:(id)arg2 ;
-(id)colorSpaceFromSourceFormatDescriptions:(id)arg0 andRendererColorSpace:(id)arg1 ;
-(id)initWithOutputSettingsPreset:(id)arg0 ;
-(void)dealloc;


@end


#endif