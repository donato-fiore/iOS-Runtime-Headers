// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKUVPREVIEWCOMPLICATIONDATASOURCE_H
#define NTKUVPREVIEWCOMPLICATIONDATASOURCE_H

@class CLKComplicationPreviewTimelineEntry;


#import "NTKComplicationDataSource.h"

@interface NTKUVPreviewComplicationDataSource : NTKComplicationDataSource {
    CLKComplicationPreviewTimelineEntry *_entry;
}




+(BOOL)acceptsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)acceptsComplicationType:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(id)currentSwitcherTemplate;
-(id)initWithComplication:(id)arg0 family:(NSInteger)arg1 forDevice:(id)arg2 ;
-(void)getCurrentTimelineEntryWithHandler:(id)arg0 ;
-(void)getTimelineEndDateWithHandler:(id)arg0 ;
-(void)getTimelineEntriesAfterDate:(id)arg0 limit:(NSUInteger)arg1 withHandler:(id)arg2 ;


@end


#endif