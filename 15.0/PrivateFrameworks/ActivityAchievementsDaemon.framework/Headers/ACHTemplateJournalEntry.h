// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHTEMPLATEJOURNALENTRY_H
#define ACHTEMPLATEJOURNALENTRY_H

@class HDJournalEntry, ACHTemplate;



@interface ACHTemplateJournalEntry : HDJournalEntry

@property (readonly, nonatomic) NSInteger action; // ivar: _action
@property (nonatomic) NSInteger provenance; // ivar: _provenance
@property (readonly, nonatomic) ACHTemplate *template; // ivar: _template


+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg0 withProfile:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTemplate:(id)arg0 provenance:(NSInteger)arg1 action:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif