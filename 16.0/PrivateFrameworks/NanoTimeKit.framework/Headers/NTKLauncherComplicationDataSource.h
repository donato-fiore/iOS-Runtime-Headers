// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKLAUNCHERCOMPLICATIONDATASOURCE_H
#define NTKLAUNCHERCOMPLICATIONDATASOURCE_H



#import "NTKComplicationDataSource.h"

@interface NTKLauncherComplicationDataSource : NTKComplicationDataSource



+(BOOL)acceptsComplicationType:(NSUInteger)arg0 withFamily:(NSInteger)arg1 forDevice:(id)arg2 ;
-(NSUInteger)timelineAnimationBehavior;
-(id)_appBackgroundColor;
-(id)_appTintColor;
-(id)_appTitle;
-(id)_circularTemplateMedium:(BOOL)arg0 ;
-(id)_complicationApplicationIdentifier;
-(id)_complicationLaunchURL;
-(id)_currentTimelineEntry;
-(id)_extraLarge;
-(id)_fullColorImageProvider;
-(id)_graphicExtraLargeTemplate;
-(id)_modularLargeTemplate;
-(id)_modularSmallTemplate;
-(id)_signatureBezelTemplate;
-(id)_signatureCircularTemplate;
-(id)_signatureCornerTemplate;
-(id)_symbolAppFullColorImageProviderIfSupported;
-(id)_symbolAppImageProviderIfSupported;
-(id)_symbolName;
-(id)_symbolSize;
-(id)_symbolSizeforMailApp;
-(id)_symbolSizeforMapsApp;
-(id)_symbolSizeforTinCanApp;
-(id)_tinCanAppTintColor;
-(id)_tintableAppImageProvider;
-(id)_utilitarianLargeTemplate;
-(id)_utilitarianSmallTemplate;
-(id)complicationApplicationIdentifier;
-(id)currentSwitcherTemplate;
-(void)getCurrentTimelineEntryWithHandler:(id)arg0 ;
-(void)getLaunchURLForTimelineEntryDate:(id)arg0 timeTravelDate:(id)arg1 withHandler:(id)arg2 ;


@end


#endif