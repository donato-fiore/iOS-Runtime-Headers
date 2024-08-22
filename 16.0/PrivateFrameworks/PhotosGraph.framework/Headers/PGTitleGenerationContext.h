// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGTITLEGENERATIONCONTEXT_H
#define PGTITLEGENERATIONCONTEXT_H

@class CLSHolidayCalendarEventService;

#import <Foundation/Foundation.h>

#import "PGGraphPublicEventCategoryNodeCollection.h"
#import "PGGraph.h"
#import "PGGraphLocationHelper.h"

@interface PGTitleGenerationContext : NSObject

@property (readonly) PGGraphPublicEventCategoryNodeCollection *appleEventsCategoryNodes; // ivar: _appleEventsCategoryNodes
@property (retain, nonatomic) PGGraph *graph; // ivar: _graph
@property (readonly) CLSHolidayCalendarEventService *holidayService; // ivar: _holidayService
@property (readonly) PGGraphLocationHelper *locationHelper; // ivar: _locationHelper


-(id)initLegacyForMemories;
-(id)initWithGraph:(id)arg0 ;


@end


#endif