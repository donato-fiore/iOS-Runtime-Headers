// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKASTRONOMYTIMELINEENTRYMODEL_H
#define NTKASTRONOMYTIMELINEENTRYMODEL_H

@class CLLocation, NSDate;


#import "NTKTimelineEntryModel.h"

@interface NTKAstronomyTimelineEntryModel : NTKTimelineEntryModel

@property (readonly, nonatomic) CLLocation *anyLocation; // ivar: _anyLocation
@property (readonly, nonatomic) NSDate *currentDate; // ivar: _currentDate
@property (readonly, nonatomic) CLLocation *currentLocation; // ivar: _currentLocation
@property (readonly, nonatomic) NSUInteger vista; // ivar: _vista


-(id)_graphicRectangular;
-(id)initWithVista:(NSUInteger)arg0 entryDate:(id)arg1 currentDate:(id)arg2 currentLocation:(id)arg3 anyLocation:(id)arg4 ;
-(id)templateForComplicationFamily:(NSInteger)arg0 ;


@end


#endif