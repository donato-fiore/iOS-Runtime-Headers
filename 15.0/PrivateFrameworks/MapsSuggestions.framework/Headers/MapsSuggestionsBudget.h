// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSBUDGET_H
#define MAPSSUGGESTIONSBUDGET_H

@class NSString, NSMutableDictionary;
@protocol MapsSuggestionsObject, MapsSuggestionsCondition, MapsSuggestionsBudgetDelegate;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsBudget : NSObject <MapsSuggestionsObject, MapsSuggestionsCondition>

 {
    NSString *_name;
    Queue _queue;
    vector<MSg::_RollingWindowBudgetRule, std::allocator<MSg::_RollingWindowBudgetRule>> _rules;
    NSMutableDictionary *_data;
    id<MapsSuggestionsBudgetDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)hasBudgetLeft;
-(BOOL)isTrue;
-(BOOL)q_saveStateForRuleName:(id)arg0 state:(id)arg1 ;
-(BOOL)spendAtTime:(id)arg0 ;
-(BOOL)spendNow;
-(id)initWithDelegate:(id)arg0 name:(id)arg1 ;
-(id)nameForJSON;
-(id)objectForJSON;
-(id)q_loadStateForRuleName:(id)arg0 ;
-(void)addRollingWindowOfCount:(NSUInteger)arg0 perDuration:(*void)arg1 name:(id)arg2 ;
-(void)addRollingWindowOfCount:(NSUInteger)arg0 perTimeInterval:(CGFloat)arg1 name:(id)arg2 ;
-(void)reset;


@end


#endif