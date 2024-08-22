// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKSAMPLECOMPLICATIONDATASOURCE_H
#define NTKSAMPLECOMPLICATIONDATASOURCE_H

@class CLKComplicationTemplate;


#import "NTKComplicationDataSource.h"

@interface NTKSampleComplicationDataSource : NTKComplicationDataSource {
    CLKComplicationTemplate *_complicationTemplate;
}




+(BOOL)_isComplicationFamilyAvaialbleBeforeGlory:(NSInteger)arg0 ;
+(BOOL)_shouldUseFallbackImagesForDevice:(id)arg0 ;
+(BOOL)acceptsClassicComplicationType:(NSUInteger)arg0 withFamily:(NSInteger)arg1 ;
+(BOOL)acceptsComplicationType:(NSUInteger)arg0 withFamily:(NSInteger)arg1 forDevice:(id)arg2 ;
-(BOOL)supportsFlowerImages;
-(Class)richComplicationDisplayViewClassForDevice:(id)arg0 ;
-(id)_alarmTemplate;
-(id)_astronomyTemplateFromVista:(NSUInteger)arg0 ;
-(id)_batteryTemplate;
-(id)_breathingTemplate;
-(id)_city;
-(id)_currentEntryModel;
-(id)_fullColorImageProviderWithSystemImageName:(id)arg0 tintColor:(id)arg1 fallbackImageName:(id)arg2 ;
-(id)_heartrateTemplate;
-(id)_imageProviderWithSystemImageName:(id)arg0 overridePointSize:(id)arg1 tintColor:(id)arg2 fallbackImageName:(id)arg3 ;
-(id)_moonPhaseTemplate;
-(id)_musicTemplate;
-(id)_newsTemplate;
-(id)_nowPlayingTemplate;
-(id)_podcastsTemplate;
-(id)_radioTemplate;
-(id)_reminderTemplate;
-(id)_siriTemplate;
-(id)_solarTemplate;
-(id)_stopwatchTemplate;
-(id)_worldClockTemplate;
-(id)currentSwitcherTemplate;
-(id)initWithComplication:(id)arg0 family:(NSInteger)arg1 forDevice:(id)arg2 ;
-(id)sampleTemplate;
-(void)_localeDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif