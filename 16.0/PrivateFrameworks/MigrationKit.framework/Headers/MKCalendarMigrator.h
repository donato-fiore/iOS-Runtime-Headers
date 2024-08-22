// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKCALENDARMIGRATOR_H
#define MKCALENDARMIGRATOR_H

@class EKEventStore;


#import "MKMigrator.h"

@interface MKCalendarMigrator : MKMigrator {
    EKEventStore *_eventStore;
}




-(id)init;
-(void)import:(id)arg0 ;
-(void)importiCal:(id)arg0 ;


@end


#endif