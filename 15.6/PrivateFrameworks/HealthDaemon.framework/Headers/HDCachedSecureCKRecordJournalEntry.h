// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCACHEDSECURECKRECORDJOURNALENTRY_H
#define HDCACHEDSECURECKRECORDJOURNALENTRY_H

@class NSData;


#import "HDJournalEntry.h"

@interface HDCachedSecureCKRecordJournalEntry : HDJournalEntry

@property (retain, nonatomic) NSData *recordData; // ivar: _recordData
@property (nonatomic) NSInteger recordID; // ivar: _recordID


+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg0 withProfile:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif