// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JOURNALTIMESTAMP_H
#define JOURNALTIMESTAMP_H


#import <Foundation/Foundation.h>


@interface JournalTimeStamp : NSObject



+(BOOL)shouldPurgeJournal:(id)arg0 olderThan:(id)arg1 ;
+(id)getCurrentJournalNameUsingPrefix:(id)arg0 ;
+(id)getDateFromJournalName:(id)arg0 ;
+(id)getJournalNameUsingPrefix:(id)arg0 forDate:(id)arg1 ;


@end


#endif