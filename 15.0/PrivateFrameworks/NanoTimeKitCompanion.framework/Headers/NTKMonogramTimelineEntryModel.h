// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKMONOGRAMTIMELINEENTRYMODEL_H
#define NTKMONOGRAMTIMELINEENTRYMODEL_H

@class NSString;


#import "NTKTimelineEntryModel.h"

@interface NTKMonogramTimelineEntryModel : NTKTimelineEntryModel

@property (copy, nonatomic) NSString *monogram; // ivar: _monogram


-(id)_newSimpleTextTemplate;
-(id)templateForComplicationFamily:(NSInteger)arg0 ;


@end


#endif