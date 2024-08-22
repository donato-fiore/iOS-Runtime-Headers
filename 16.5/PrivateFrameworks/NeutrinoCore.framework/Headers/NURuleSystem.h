// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NURULESYSTEM_H
#define NURULESYSTEM_H

@class NSMutableDictionary, NSMutableArray, NSMapTable, NSMutableString, NSArray, NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NURuleSystem : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_constants;
    NSMutableArray *_rules;
    NSMutableArray *_agenda;
    NSMutableArray *_executed;
    NSMapTable *_gradeByFact;
    NSMutableString *_runLog;
}


@property (readonly, copy, nonatomic) NSArray *agenda;
@property (copy, nonatomic) NSDictionary *constants;
@property (nonatomic) BOOL enableLogging; // ivar: _enableLogging
@property (readonly, copy, nonatomic) NSArray *executed;
@property (readonly, copy, nonatomic) NSDictionary *facts;
@property (readonly, copy, nonatomic) NSArray *rules;
@property (readonly, copy, nonatomic) NSString *runLog;
@property (readonly, copy, nonatomic) NSDictionary *state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(CGFloat)gradeForFact:(id)arg0 ;
-(CGFloat)maximumGradeForFacts:(id)arg0 ;
-(CGFloat)minimumGradeForFacts:(id)arg0 ;
-(id)debugDescription;
-(id)debugQuickLookObject;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_addRuleToAgenda:(id)arg0 ;
-(void)addRule:(id)arg0 ;
-(void)addRulesFromArray:(id)arg0 ;
-(void)assertFact:(id)arg0 ;
-(void)assertFact:(id)arg0 grade:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)evaluate;
-(void)removeAllRules;
-(void)reset;
-(void)resetAndEvaluateWithInitialState:(id)arg0 ;
-(void)retractFact:(id)arg0 ;
-(void)retractFact:(id)arg0 grade:(CGFloat)arg1 ;


@end


#endif