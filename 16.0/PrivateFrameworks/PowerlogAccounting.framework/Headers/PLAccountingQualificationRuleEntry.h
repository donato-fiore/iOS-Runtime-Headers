// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLACCOUNTINGQUALIFICATIONRULEENTRY_H
#define PLACCOUNTINGQUALIFICATIONRULEENTRY_H

@class NSNumber;


#import "PLAccountingRuleEntry.h"

@interface PLAccountingQualificationRuleEntry : PLAccountingRuleEntry

@property (readonly, nonatomic) NSNumber *qualificationID;
@property (readonly, nonatomic) NSNumber *rootNodeID;


+(id)entryKey;
+(void)load;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRootNodeID:(id)arg0 withQualificationID:(id)arg1 withEntryDate:(id)arg2 ;


@end


#endif