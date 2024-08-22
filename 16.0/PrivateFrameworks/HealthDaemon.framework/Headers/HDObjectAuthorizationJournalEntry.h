// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDOBJECTAUTHORIZATIONJOURNALENTRY_H
#define HDOBJECTAUTHORIZATIONJOURNALENTRY_H

@class NSArray;


#import "HDJournalEntry.h"

@interface HDObjectAuthorizationJournalEntry : HDJournalEntry {
    NSArray *_records;
    CGFloat _modificationDate;
    NSInteger _syncProvenance;
}




+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg0 withProfile:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif