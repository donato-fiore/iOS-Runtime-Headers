// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDINPUTBUILDER_H
#define AMDINPUTBUILDER_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface AMDInputBuilder : NSObject

@property (retain, nonatomic) NSMutableDictionary *inputsDefinitions; // ivar: _inputsDefinitions
@property (retain, nonatomic) NSString *modelId; // ivar: _modelId


+(unsigned int)getSizeOfDataType:(NSInteger)arg0 ;
-(BOOL)isMatchingShape:(id)arg0 with:(id)arg1 ;
-(BOOL)isValid;
-(id)getGeneralMultiArrayForInput:(id)arg0 withDataType:(NSInteger)arg1 andShape:(id)arg2 withPaddingValue:(id)arg3 usingMetadata:(id)arg4 andModelAssets:(id)arg5 error:(*id)arg6 ;
-(id)getHyperParameterInput:(id)arg0 usingMetadata:(id)arg1 withInputFeatureDefinition:(id)arg2 ;
-(id)getInputsWithMetadata:(id)arg0 andModelAssets:(id)arg1 error:(*id)arg2 ;
-(id)getMinimalCToLMapping;
-(id)getModelInput:(id)arg0 usingMetadata:(id)arg1 andModelAssets:(id)arg2 error:(*id)arg3 ;
-(id)getRemapInfoFrom:(id)arg0 andModelAssets:(id)arg1 ;
-(id)getSimpleMultiArrayForInput:(id)arg0 OfSize:(id)arg1 withDataType:(NSInteger)arg2 withPaddingValue:(id)arg3 usingMetadata:(id)arg4 andModelAssets:(id)arg5 error:(*id)arg6 ;
-(id)initWithDictionary:(id)arg0 andModelId:(id)arg1 ;


@end


#endif