// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OUTPUTDEFINITION_H
#define OUTPUTDEFINITION_H

@class NSString, NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface OutputDefinition : NSObject

@property (retain, nonatomic) NSString *mode; // ivar: _mode
@property (retain, nonatomic) NSString *modelOutputName; // ivar: _modelOutputName
@property (retain, nonatomic) NSNumber *modelTopN; // ivar: _modelTopN
@property (retain, nonatomic) NSArray *modifiers; // ivar: _modifiers
@property (retain, nonatomic) NSString *remapDictionaryId; // ivar: _remapDictionaryId
@property (retain, nonatomic) NSNumber *scoreThresholdAsMultipleOfRandomScore; // ivar: _scoreThresholdAsMultipleOfRandomScore


-(BOOL)isValid;
-(id)initWithOutputDefinitionDictionary:(id)arg0 ;


@end


#endif