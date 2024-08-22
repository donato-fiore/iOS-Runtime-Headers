// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDINPUTBUILDER_H
#define AMDINPUTBUILDER_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface AMDInputBuilder : NSObject

@property (retain, nonatomic) NSMutableDictionary *inputsDefinitions; // ivar: _inputsDefinitions
@property (retain, nonatomic) NSString *modelId; // ivar: _modelId


-(*void)allocateMemoryForInput:(NSInteger)arg0 withSize:(int)arg1 ;
-(BOOL)isValid;
-(id)getInputsWithMetadata:(id)arg0 usingFeatureProvider:(id)arg1 andModelAssets:(id)arg2 error:(*id)arg3 ;
-(id)getMinimalCToLMapping;
-(id)getModelInput:(id)arg0 usingMetadata:(id)arg1 usingFeatureProvider:(id)arg2 andModelAssets:(id)arg3 ;
-(id)getModelInput:(id)arg0 usingMetadata:(id)arg1 withInputFeatureDefinition:(id)arg2 ;
-(id)initWithDictionary:(id)arg0 andModelId:(id)arg1 ;


@end


#endif