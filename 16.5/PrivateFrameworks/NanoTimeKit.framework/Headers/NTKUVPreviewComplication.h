// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKUVPREVIEWCOMPLICATION_H
#define NTKUVPREVIEWCOMPLICATION_H

@class CLKComplicationPreviewTimelineEntry;


#import "NTKComplication.h"

@interface NTKUVPreviewComplication : NTKComplication

@property (readonly, nonatomic) CLKComplicationPreviewTimelineEntry *entry; // ivar: _entry
@property (readonly, nonatomic) NSInteger family; // ivar: _family


+(id)complicationWithEntry:(id)arg0 forFamily:(NSInteger)arg1 ;
-(BOOL)supportsComplicationFamily:(NSInteger)arg0 forDevice:(id)arg1 ;
-(id)init;
-(id)initWithComplicationType:(NSUInteger)arg0 ;


@end


#endif