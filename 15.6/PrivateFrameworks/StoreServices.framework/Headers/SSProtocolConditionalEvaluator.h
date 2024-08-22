// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSPROTOCOLCONDITIONALEVALUATOR_H
#define SSPROTOCOLCONDITIONALEVALUATOR_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "SSProtocolConditionalContext.h"

@interface SSProtocolConditionalEvaluator : NSObject {
    SSProtocolConditionalContext *_context;
    NSDictionary *_dictionary;
}




+(id)defaultConditionalContext;
+(void)setDefaultConditionalContext:(id)arg0 ;
-(BOOL)_checkConditions:(id)arg0 withOperator:(id)arg1 ;
-(id)_arrayByEvaluatingChildrenOfArray:(id)arg0 withForcedValue:(NSInteger)arg1 ;
-(id)_dictionaryByEvaluatingChildrenOfDictionary:(id)arg0 withForcedValue:(NSInteger)arg1 ;
-(id)_dictionaryByEvaluatingDictionary:(id)arg0 withForcedValue:(NSInteger)arg1 ;
-(id)_dictionaryByEvaluatingWithForcedValue:(NSInteger)arg0 ;
-(id)dictionaryByEvaluatingConditions;
-(id)dictionaryByRemovingConditions;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 conditionalContext:(id)arg1 ;
-(int)_logicalOperatorForString:(id)arg0 ;
-(void)dealloc;


@end


#endif