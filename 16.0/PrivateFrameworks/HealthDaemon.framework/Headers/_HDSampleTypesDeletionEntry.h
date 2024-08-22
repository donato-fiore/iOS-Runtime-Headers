// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDSAMPLETYPESDELETIONENTRY_H
#define _HDSAMPLETYPESDELETIONENTRY_H

@class NSSet;


#import "HDJournalEntry.h"

@interface _HDSampleTypesDeletionEntry : HDJournalEntry {
    NSSet *_sourceIDs;
    NSSet *_types;
}




+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg0 withProfile:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif