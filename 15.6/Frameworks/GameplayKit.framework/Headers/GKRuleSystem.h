// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKRULESYSTEM_H
#define GKRULESYSTEM_H

@class NSMutableArray, NSMapTable, NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface GKRuleSystem : NSObject {
    NSMutableArray *_rules;
    NSMutableArray *_agenda;
    NSMutableArray *_toBeExecuted;
    NSMutableArray *_executed;
    NSMapTable *_gradeByFact;
}


@property (readonly, retain, nonatomic) NSArray *agenda;
@property (readonly, retain, nonatomic) NSArray *executed;
@property (readonly, retain, nonatomic) NSArray *facts;
@property (readonly, retain, nonatomic) NSArray *rules;
@property (readonly, retain, nonatomic) NSMutableDictionary *state; // ivar: _state


-(float)gradeForFact:(id)arg0 ;
-(float)maximumGradeForFacts:(id)arg0 ;
-(float)minimumGradeForFacts:(id)arg0 ;
-(id)init;
-(void)_addRuleToAgenda:(id)arg0 ;
-(void)addRule:(id)arg0 ;
-(void)addRulesFromArray:(id)arg0 ;
-(void)assertFact:(id)arg0 ;
-(void)assertFact:(id)arg0 grade:(float)arg1 ;
-(void)evaluate;
-(void)removeAllRules;
-(void)reset;
-(void)retractFact:(id)arg0 ;
-(void)retractFact:(id)arg0 grade:(float)arg1 ;


@end


#endif