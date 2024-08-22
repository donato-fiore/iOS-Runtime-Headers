// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLPROGRAMCONTEXT_H
#define MLPROGRAMCONTEXT_H

@class NSString, NSDictionary;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface MLProgramContext : NSObject

@property (retain, nonatomic) NSObject<MLFeatureProvider> *executionState; // ivar: _executionState
@property (retain, nonatomic) NSString *forwardFunctionLossName; // ivar: _forwardFunctionLossName
@property (retain, nonatomic) NSDictionary *functionNameToInputLayersNames; // ivar: _functionNameToInputLayersNames
@property (retain, nonatomic) NSDictionary *functionNameToOutputLayersNames; // ivar: _functionNameToOutputLayersNames
@property (retain, nonatomic) NSDictionary *functionNameToStateMap; // ivar: _functionNameToStateMap
@property (retain, nonatomic) NSString *trainFunctionLossName; // ivar: _trainFunctionLossName


-(id)initWithExecutionState:(id)arg0 functionNameToStateMap:(id)arg1 ;


@end


#endif