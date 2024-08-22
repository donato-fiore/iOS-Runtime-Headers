// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ETTASK_H
#define ETTASK_H


#import <Foundation/Foundation.h>

#import "ETImageDescriptorExtractor.h"
#import "ETModelDef.h"
#import "ETOptimizerDef.h"

@interface ETTask : NSObject {
    ? network;
}


@property (nonatomic) BOOL dumpData; // ivar: _dumpData
@property (retain, nonatomic) ETImageDescriptorExtractor *extractor; // ivar: _extractor
@property (retain, nonatomic) ETModelDef *model; // ivar: _model
@property (retain, nonatomic) ETOptimizerDef *optimizer; // ivar: _optimizer


-(BOOL)fit:(id)arg0 numberOfBatches:(unsigned int)arg1 outputNames:(id)arg2 batchCallback:(id)arg3 ;
-(BOOL)fit:(id)arg0 numberOfEpochs:(int)arg1 outputNames:(id)arg2 batchCallback:(id)arg3 ;
-(BOOL)moveToGPU:(int)arg0 error:(*id)arg1 ;
-(BOOL)runBatches:(id)arg0 numberOfBatches:(unsigned int)arg1 outputNames:(id)arg2 batchCallback:(id)arg3 ;
-(BOOL)runInference:(id)arg0 outputNames:(id)arg1 batchCallback:(id)arg2 ;
-(float)fit:(id)arg0 numberOfBatches:(unsigned int)arg1 withProgress:(id)arg2 ;
-(float)fit:(id)arg0 numberOfEpochs:(int)arg1 withProgress:(id)arg2 ;
-(id)evaluate:(id)arg0 ;
-(id)init;
-(id)initWithModelDef:(id)arg0 optimizerDef:(id)arg1 extractor:(id)arg2 ;
-(id)initWithModelDef:(id)arg0 optimizerDef:(id)arg1 extractor:(id)arg2 needWeightsInitialization:(BOOL)arg3 ;
-(id)initWithModelDef:(id)arg0 optimizerDef:(id)arg1 lossConfig:(id)arg2 ;
-(id)initWithModelDef:(id)arg0 optimizerDef:(id)arg1 lossConfig:(id)arg2 extractor:(id)arg3 ;
-(struct vector<std::string, std::allocator<std::string>> )reinitializeVariables;
-(void)saveNetwork:(id)arg0 ;
-(void)saveNetwork:(id)arg0 revertToInferenceMode:(BOOL)arg1 ;


@end


#endif