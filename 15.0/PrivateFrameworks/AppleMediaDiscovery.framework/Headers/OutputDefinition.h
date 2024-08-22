// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OUTPUTDEFINITION_H
#define OUTPUTDEFINITION_H

@class NSArray, NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "AMDBusinessLogic.h"
#import "AMDDictionaryFeatureProvider.h"

@interface OutputDefinition : NSObject

@property (retain, nonatomic) NSArray *bitmaskIds; // ivar: _bitmaskIds
@property (retain, nonatomic) AMDBusinessLogic *businessLogic; // ivar: _businessLogic
@property (retain, nonatomic) AMDDictionaryFeatureProvider *features; // ivar: _features
@property (retain, nonatomic) NSString *mode; // ivar: _mode
@property (retain, nonatomic) NSString *modelOutputName; // ivar: _modelOutputName
@property (retain, nonatomic) NSNumber *modelTopN; // ivar: _modelTopN
@property (retain, nonatomic) NSString *remapDictionaryId; // ivar: _remapDictionaryId
@property (retain, nonatomic) NSNumber *scoreThresholdAsMultipleOfRandomScore; // ivar: _scoreThresholdAsMultipleOfRandomScore


-(BOOL)isValid;
-(id)initWithOutputDefinitionDictionary:(id)arg0 ;


@end


#endif