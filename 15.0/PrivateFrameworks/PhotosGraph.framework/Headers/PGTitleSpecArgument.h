// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGTITLESPECARGUMENT_H
#define PGTITLESPECARGUMENT_H


#import <Foundation/Foundation.h>


@interface PGTitleSpecArgument : NSObject

@property (retain) id *inputVariable; // ivar: _inputVariable
@property BOOL requiresInput; // ivar: _requiresInput


-(id)_resolvedStringWithMomentNodes:(id)arg0 argumentEvaluationContext:(id)arg1 ;
-(id)_resolvedStringWithMomentNodes:(id)arg0 features:(id)arg1 argumentEvaluationContext:(id)arg2 ;


@end


#endif