// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEEXPANDER_H
#define DEEXPANDER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface DEExpander : NSObject

@property (retain, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property BOOL shouldEvaluateConditions; // ivar: _shouldEvaluateConditions
@property BOOL shouldExpandOpts; // ivar: _shouldExpandOpts


-(id)expand:(id)arg0 localeString:(id)arg1 expansionType:(int)arg2 ;
-(id)expandWithParamsString:(id)arg0 localeString:(id)arg1 ;
-(id)expandWithParamsString:(id)arg0 localeString:(id)arg1 evaluateConditions:(BOOL)arg2 ;
-(id)expandWithParamsStringAsDAG:(id)arg0 localeString:(id)arg1 ;
-(id)init;


@end


#endif