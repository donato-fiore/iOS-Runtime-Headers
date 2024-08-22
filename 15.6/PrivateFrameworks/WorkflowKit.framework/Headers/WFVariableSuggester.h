// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFVARIABLESUGGESTER_H
#define WFVARIABLESUGGESTER_H

@class NSArray;
@protocol WFVariableSuggesterDelegate, WFVariableProvider;

#import <Foundation/Foundation.h>


@interface WFVariableSuggester : NSObject

@property (copy, nonatomic) NSArray *currentVariables; // ivar: _currentVariables
@property (weak, nonatomic) NSObject<WFVariableSuggesterDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger maxSuggestionsCount; // ivar: _maxSuggestionsCount
@property (nonatomic) NSUInteger minSuggestionsCount; // ivar: _minSuggestionsCount
@property (copy, nonatomic) NSArray *outputActions; // ivar: _outputActions
@property (retain, nonatomic) NSArray *suggestedVariables; // ivar: _suggestedVariables
@property (copy, nonatomic) NSArray *userDefinedVariableNames; // ivar: _userDefinedVariableNames
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider


-(id)init;
-(void)availableVariablesDidChange;


@end


#endif