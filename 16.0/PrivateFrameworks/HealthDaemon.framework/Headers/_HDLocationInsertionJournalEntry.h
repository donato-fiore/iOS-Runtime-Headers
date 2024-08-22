// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDLOCATIONINSERTIONJOURNALENTRY_H
#define _HDLOCATIONINSERTIONJOURNALENTRY_H

@class NSUUID, NSArray;


#import "HDJournalEntry.h"

@interface _HDLocationInsertionJournalEntry : HDJournalEntry {
    NSUUID *_seriesIdentifier;
    NSArray *_data;
}




+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg0 withProfile:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif