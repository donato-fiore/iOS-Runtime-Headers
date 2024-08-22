// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HDDATAINSERTIONJOURNALENTRY_H
#define _HDDATAINSERTIONJOURNALENTRY_H

@class HKObject;


#import "HDJournalEntry.h"
#import "HDDataOriginProvenance.h"

@interface _HDDataInsertionJournalEntry : HDJournalEntry {
    HKObject *_dataObject;
    HDDataOriginProvenance *_provenance;
}




+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg0 withProfile:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif