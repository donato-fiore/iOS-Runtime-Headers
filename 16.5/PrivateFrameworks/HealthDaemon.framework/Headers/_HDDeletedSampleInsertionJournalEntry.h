// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDDELETEDSAMPLEINSERTIONJOURNALENTRY_H
#define _HDDELETEDSAMPLEINSERTIONJOURNALENTRY_H

@class NSArray;


#import "HDJournalEntry.h"
#import "HDCodableObjectCollection.h"
#import "HDDataOriginProvenance.h"

@interface _HDDeletedSampleInsertionJournalEntry : HDJournalEntry {
    HDCodableObjectCollection *_objectCollection;
    NSArray *_samples;
    HDDataOriginProvenance *_provenance;
}




+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg0 withProfile:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif