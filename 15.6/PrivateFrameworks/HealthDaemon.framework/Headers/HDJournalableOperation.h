// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDJOURNALABLEOPERATION_H
#define HDJOURNALABLEOPERATION_H

@protocol NSSecureCoding;


#import "HDJournalEntry.h"

@interface HDJournalableOperation : HDJournalEntry <NSSecureCoding>



@property (readonly, nonatomic) BOOL didJournal; // ivar: _didJournal


+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg0 withProfile:(id)arg1 ;
-(BOOL)performOrJournalWithProfile:(id)arg0 error:(*id)arg1 ;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)transactionContext;


@end


#endif