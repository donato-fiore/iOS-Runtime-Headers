// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCGREENFIELDPLACEHOLDERCOMPLICATIONDATASOURCE_H
#define NTKCGREENFIELDPLACEHOLDERCOMPLICATIONDATASOURCE_H

@class CLKComplicationTimelineEntry;


#import "NTKComplicationDataSource.h"
#import "NTKGreenfieldPlaceholderComplication.h"

@interface NTKCGreenfieldPlaceholderComplicationDataSource : NTKComplicationDataSource {
    NTKGreenfieldPlaceholderComplication *_placeholderComplication;
    CLKComplicationTimelineEntry *_cachedTimelineEntry;
}




+(BOOL)acceptsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)acceptsComplicationType:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(Class)richComplicationDisplayViewClassForDevice:(id)arg0 ;
-(id)_currentTimelineEntry;
-(id)currentSwitcherTemplate;
-(id)initWithComplication:(id)arg0 family:(NSInteger)arg1 forDevice:(id)arg2 ;
-(void)getCurrentTimelineEntryWithHandler:(id)arg0 ;
-(void)pause;
-(void)resume;


@end


#endif