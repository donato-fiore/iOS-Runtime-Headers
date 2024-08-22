// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACHEARNEDINSTANCEJOURNALENTRY_H
#define ACHEARNEDINSTANCEJOURNALENTRY_H

@class HDJournalEntry, ACHEarnedInstance;



@interface ACHEarnedInstanceJournalEntry : HDJournalEntry

@property (readonly, nonatomic) NSInteger action; // ivar: _action
@property (readonly, nonatomic) ACHEarnedInstance *earnedInstance; // ivar: _earnedInstance
@property (readonly, nonatomic) NSInteger persistentID; // ivar: _persistentID
@property (readonly, nonatomic) NSInteger provenance; // ivar: _provenance


+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg0 withProfile:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEarnedInstance:(id)arg0 provenance:(NSInteger)arg1 action:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif