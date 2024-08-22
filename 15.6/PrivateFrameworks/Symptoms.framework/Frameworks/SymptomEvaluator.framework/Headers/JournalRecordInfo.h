// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JOURNALRECORDINFO_H
#define JOURNALRECORDINFO_H

@class NSMutableData, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface JournalRecordInfo : NSObject

@property (readonly) NSMutableData *journalData; // ivar: _journalData
@property (readonly) NSString *journalName; // ivar: _journalName
@property (readonly) NSDate *lastUpdate; // ivar: _lastUpdate


-(id)initWithCoder:(id)arg0 ;
-(id)initWithJournalName:(id)arg0 lastUpdate:(id)arg1 journalData:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif