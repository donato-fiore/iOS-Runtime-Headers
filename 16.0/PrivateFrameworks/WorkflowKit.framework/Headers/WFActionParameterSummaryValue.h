// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFACTIONPARAMETERSUMMARYVALUE_H
#define WFACTIONPARAMETERSUMMARYVALUE_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface WFActionParameterSummaryValue : NSObject

@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, copy, nonatomic) NSDictionary *requiredValues; // ivar: _requiredValues
@property (readonly, copy, nonatomic) NSArray *requiredVisibleParameterKeys; // ivar: _requiredVisibleParameterKeys
@property (readonly, copy, nonatomic) NSString *summaryString; // ivar: _summaryString


+(id)parenthesisRegularExpression;
-(id)explodedKeysWithPossibleValuesInAction:(id)arg0 ;
-(id)initWithKey:(id)arg0 summaryString:(id)arg1 ;
-(id)mapPossibleValuesToKeys:(id)arg0 ;
-(id)matchVisibleParameterKeys:(id)arg0 checkingRequiredValuesInAction:(id)arg1 ;
-(id)namedRequiredValuesInAction:(id)arg0 ;
-(void)explodeKeys:(id)arg0 currentKeyIndex:(NSUInteger)arg1 possibleValuesPerKey:(id)arg2 currentCombination:(id)arg3 results:(id)arg4 ;


@end


#endif