// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADSTATSCALENDARS_H
#define CADSTATSCALENDARS_H

@class NSMutableArray;


#import "CADStatCollector.h"
#import "CADStatCollectionContext.h"

@interface CADStatsCalendars : CADStatCollector {
    CADStatCollectionContext *_context;
    NSMutableArray *_calendarInfos;
}




+(id)eventName;
-(BOOL)calendarUsesAuthentication:(*void)arg0 ;
-(BOOL)wantsCalendars;
-(id)eventDictionaries;
-(void)prepareWithContext:(id)arg0 ;
-(void)processCalendars:(id)arg0 inStore:(*void)arg1 ;


@end


#endif