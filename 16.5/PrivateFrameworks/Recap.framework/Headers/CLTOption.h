// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLTOPTION_H
#define CLTOPTION_H

@class NSString, NSMutableArray, NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface CLTOption : NSObject

@property (nonatomic) BOOL allowsNegativeNumbersAsArguments; // ivar: _allowsNegativeNumbersAsArguments
@property (retain, nonatomic) NSString *argumentHelp; // ivar: _argumentHelp
@property (retain, nonatomic) NSMutableArray *consumedArguments; // ivar: _consumedArguments
@property (readonly, nonatomic) NSArray *consumedOrDefaultArguments;
@property (retain, nonatomic) NSArray *defaultArguments; // ivar: _defaultArguments
@property (readonly, nonatomic) NSString *lefthandHelp; // ivar: _lefthandHelp
@property (readonly, nonatomic) NSArray *longforms; // ivar: _longforms
@property (nonatomic) int maxAllowedOccurencies; // ivar: _maxAllowedOccurencies
@property (nonatomic) int maxConsumedArguments; // ivar: _maxConsumedArguments
@property (nonatomic) int minConsumedArguments; // ivar: _minConsumedArguments
@property (readonly, nonatomic) NSNumber *numberValue;
@property (nonatomic) int occurencies; // ivar: _occurencies
@property (retain, nonatomic) NSString *righthandHelp; // ivar: _righthandHelp
@property (readonly, nonatomic) NSArray *shorthands; // ivar: _shorthands
@property (copy, nonatomic) id *triggerAction; // ivar: _triggerAction


-(BOOL)consumeArgument:(id)arg0 ;
-(id)init;
-(void)addLongform:(id)arg0 ;
-(void)addShorthand:(id)arg0 ;


@end


#endif