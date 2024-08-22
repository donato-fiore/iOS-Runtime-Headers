// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDDATAMANAGERDELETIONJOURNALENTRY_H
#define _HDDATAMANAGERDELETIONJOURNALENTRY_H

@protocol HKUUIDCollection;


#import "HDJournalEntry.h"
#import "HDDataDeletionConfiguration.h"

@interface _HDDataManagerDeletionJournalEntry : HDJournalEntry

@property (readonly, nonatomic) NSObject<HKUUIDCollection> *UUIDCollection; // ivar: _UUIDCollection
@property (readonly, copy, nonatomic) HDDataDeletionConfiguration *configuration; // ivar: _configuration


+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg0 withProfile:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 objectUUIDs:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif