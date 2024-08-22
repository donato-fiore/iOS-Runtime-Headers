// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKCALENDARMIGRATOR_H
#define MKCALENDARMIGRATOR_H

@class EKEventStore;

#import <Foundation/Foundation.h>


@interface MKCalendarMigrator : NSObject {
    EKEventStore *_eventStore;
}




-(id)init;
-(void)import:(id)arg0 ;
-(void)importiCal:(id)arg0 ;


@end


#endif