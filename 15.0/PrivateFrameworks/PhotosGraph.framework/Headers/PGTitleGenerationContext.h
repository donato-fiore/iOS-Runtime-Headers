// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGTITLEGENERATIONCONTEXT_H
#define PGTITLEGENERATIONCONTEXT_H

@class CLSHolidayCalendarEventService;

#import <Foundation/Foundation.h>

#import "PGGraphLocationHelper.h"

@interface PGTitleGenerationContext : NSObject

@property (readonly) CLSHolidayCalendarEventService *holidayService; // ivar: _holidayService
@property (readonly) PGGraphLocationHelper *locationHelper; // ivar: _locationHelper


-(id)initLegacyForMemories;
-(id)initWithGraph:(id)arg0 ;


@end


#endif