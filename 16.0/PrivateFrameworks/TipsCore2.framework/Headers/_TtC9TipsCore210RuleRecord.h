// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9TIPSCORE210RULERECORD_H
#define _TTC9TIPSCORE210RULERECORD_H

@class NSManagedObject, NSString, NSDate, NSDictionary, NSSet;


#import "_TtC9TipsCore211EventRecord.h"
#import "_TtC9TipsCore210RuleRecord.h"
#import "_TtC9TipsCore211StateRecord.h"
#import "_TtC9TipsCore29TipRecord.h"

@interface _TtC9TipsCore210RuleRecord : NSManagedObject {
    ? _category;
    ? _status;
    ? _type;
    ? _options;
}


@property (nonatomic) NSInteger categoryValue;
@property (nonatomic, retain) _TtC9TipsCore211EventRecord *event;
@property (nonatomic, copy) NSString *expression;
@property (nonatomic, copy) NSString *id;
@property (nonatomic) BOOL isDirty;
@property (nonatomic, copy) NSDate *lastEvaluated;
@property (nonatomic) NSInteger optionsValue;
@property (nonatomic, retain) _TtC9TipsCore210RuleRecord *parent;
@property (nonatomic, copy) NSDictionary *ruleInfo;
@property (nonatomic, retain) _TtC9TipsCore211StateRecord *state;
@property (nonatomic) NSInteger statusValue;
@property (nonatomic, copy) NSSet *subrules;
@property (nonatomic, retain) _TtC9TipsCore29TipRecord *tip;
@property (nonatomic) NSInteger typeValue;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif