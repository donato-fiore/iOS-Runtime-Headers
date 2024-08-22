// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMDDODMLDATAPROCESSOR_H
#define AMDDODMLDATAPROCESSOR_H

@class NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "AMDDODMLAttachmentProcessor.h"
#import "AMDClient.h"

@interface AMDDODMLDataProcessor : NSObject {
    NSArray *_actionArray;
    NSMutableDictionary *_coreDictionary;
    NSMutableDictionary *_inputDictionary;
    NSMutableDictionary *_elementsInSample;
    NSMutableDictionary *_numberInputsBound;
    AMDDODMLAttachmentProcessor *_attachmentsProcessor;
    AMDClient *_myAMDClient;
}




-(NSInteger)getInputSize;
-(id)aggregateArray:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)bindToBuffer:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)checkIfArrayEmptyAndThrowError:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)combineArray:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)constantValueMathFunction:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)destroyArray:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)downSampleData:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)filterArrayOnNumber:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)generateHashFromInputs:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)getCoreDictionary;
-(id)getElementInCoreDictionary:(id)arg0 ;
-(id)getElementInInputDictionary:(id)arg0 ;
-(id)getElementInNumberInputsBounds:(id)arg0 ;
-(id)getElementsInSampleDictionary;
-(id)getInputDictionary;
-(id)hashAdamIdsToIndices:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)hashFromCoreDictionary:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)ifStatement:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)initWithActionArray:(id)arg0 withAttachmentProcessor:(id)arg1 ;
-(id)insertArray:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)insertRawArray:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)padArray:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)parseAndCall:(id)arg0 withInputs:(id)arg1 error:(*id)arg2 errorDomain:(id)arg3 ;
-(id)processForLoop:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)processForLoopHelper:(id)arg0 withNumber:(id)arg1 withDictionary:(id)arg2 ;
-(id)processRecipe:(*id)arg0 errorDomain:(id)arg1 ;
-(id)randomizeArray:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)replicateArray:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)requestData:(id)arg0 withUseStubs:(NSInteger)arg1 error:(*id)arg2 errorDomain:(id)arg3 ;
-(id)sampleFromDistribution:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)sortArray:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)spliceArray:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)strideCopyAndSplitArray:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)strideCopyArray:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)twoArrayMathFunction:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(id)windowFunction:(id)arg0 error:(*id)arg1 errorDomain:(id)arg2 ;
-(void)resetDataProcessorWithRecipe:(id)arg0 ;
-(void)setElementInCoreDictionary:(id)arg0 withKey:(id)arg1 ;
-(void)setElementsInCoreDictionary:(id)arg0 ;


@end


#endif