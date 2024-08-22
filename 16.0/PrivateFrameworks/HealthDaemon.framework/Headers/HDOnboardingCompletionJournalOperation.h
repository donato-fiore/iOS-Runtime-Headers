// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDONBOARDINGCOMPLETIONJOURNALOPERATION_H
#define HDONBOARDINGCOMPLETIONJOURNALOPERATION_H

@class NSArray;
@protocol NSSecureCoding;


#import "HDJournalEntry.h"

@interface HDOnboardingCompletionJournalOperation : HDJournalEntry <NSSecureCoding>

 {
    NSArray *_codableOnboardingCompletions;
    NSInteger _syncProvenance;
}




+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg0 withProfile:(id)arg1 ;
-(BOOL)performOrJournalWithProfile:(id)arg0 error:(*id)arg1 ;
-(id)initWithCodableOnboardingCompletions:(id)arg0 syncProvenance:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif