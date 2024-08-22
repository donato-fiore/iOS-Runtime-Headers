// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADCALENDARDATABASECALCALENDARINFOPROVIDER_H
#define CADCALENDARDATABASECALCALENDARINFOPROVIDER_H

@protocol CADCalCalendarInfoProvider, CADDatabaseProvider;

#import <Foundation/Foundation.h>


@interface CADCalendarDatabaseCalCalendarInfoProvider : NSObject <CADCalCalendarInfoProvider>



@property (readonly, weak, nonatomic) NSObject<CADDatabaseProvider> *databaseProvider; // ivar: _databaseProvider


-(id)calendarRowIDsInStoreWithRowID:(int)arg0 ;
-(id)initWithDatabaseProvider:(id)arg0 ;
-(int)naturalLanguageSuggestionsCalendarRowID;
-(int)suggestionsCalendarRowID;


@end


#endif