// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HDKEYVALUEJOURNALENTRY_H
#define _HDKEYVALUEJOURNALENTRY_H

@class NSString, NSDate;
@protocol NSSecureCoding;


#import "HDJournalEntry.h"

@interface _HDKeyValueJournalEntry : HDJournalEntry {
    id<NSSecureCoding> *_value;
    NSString *_key;
    NSString *_domain;
    NSInteger _category;
    NSInteger _provenance;
    NSDate *_modificationDate;
    NSInteger _updatePolicy;
}




+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg0 withProfile:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(id)arg0 key:(id)arg1 domain:(id)arg2 category:(NSInteger)arg3 provenance:(NSInteger)arg4 updatePolicy:(NSInteger)arg5 modificationDate:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif