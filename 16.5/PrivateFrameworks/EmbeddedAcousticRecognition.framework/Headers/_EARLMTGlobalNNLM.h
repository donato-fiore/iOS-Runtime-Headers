// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EARLMTGLOBALNNLM_H
#define _EARLMTGLOBALNNLM_H

@class NSDictionary, NSMutableArray, NSString, NSMutableDictionary, NSArray, NSData;

#import <Foundation/Foundation.h>

#import "TextProcessorInference.h"
#import "DataSourceInference.h"
#import "TextProcessorTrain.h"
#import "DataSourceTrain.h"
#import "SimpleMmapBuffer.h"
#import "_EARLMTKaldiVocab.h"

@interface _EARLMTGlobalNNLM : NSObject {
    NSDictionary *_recipe;
    NSUInteger _numParam;
    NSUInteger _numWordsTrain;
    NSUInteger _numWordsEval;
    NSMutableArray *_data;
    TextProcessorInference *_textProcessorInference;
    DataSourceInference *_fofeInferenceSource;
    TextProcessorTrain *_textProcessorTrain;
    DataSourceTrain *_fofeTrainSource;
    NSString *_language;
    NSString *_assetPath;
    *float _weightsRawPtr;
    unique_ptr<float[], std::default_delete<float[]>> _weights;
    SimpleMmapBuffer *_mmappedWeights;
    NSDictionary *_tensors;
    NSDictionary *_tensorsWeightMap;
    NSDictionary *_tensorInfo;
    BOOL _weightsAreUpdated;
    NSMutableDictionary *_partialUpdateOffsets;
    SimpleMmapBuffer *_mmappedPartialWeights;
}


@property (copy, nonatomic) NSArray *attachments; // ivar: _attachments
@property (readonly, nonatomic) NSData *delta; // ivar: _delta
@property (readonly, nonatomic) BOOL deltaIsPartial; // ivar: _deltaIsPartial
@property (copy, nonatomic) NSMutableArray *evalData; // ivar: _evalData
@property (readonly, nonatomic) NSMutableDictionary *results; // ivar: _results
@property (copy, nonatomic) NSMutableArray *trainData; // ivar: _trainData
@property (readonly, nonatomic) _EARLMTKaldiVocab *vocab; // ivar: _vocab


+(id)attachmentURL:(id)arg0 withName:(id)arg1 ;
+(id)compressedAttachmentURLFromRecipe:(id)arg0 attachments:(id)arg1 ;
+(void)initialize;
-(id)_fetchTensorInfo:(id)arg0 ;
-(id)computeDelta:(BOOL)arg0 ;
-(id)evaluate;
-(id)evaluatePartialDelta;
-(id)findTensorsIndicesByKeyWord:(id)arg0 tensorInfo:(id)arg1 ;
-(id)getEvalTask:(*id)arg0 ;
-(id)getTrainTask:(*id)arg0 ;
-(id)initWithRecipe:(id)arg0 ;
-(id)initWithRecipe:(id)arg0 assetPath:(id)arg1 ;
-(id)loadData;
-(id)loadWeight;
-(id)restoreFromLatestWeights:(id)arg0 ;
-(id)saveWeight:(id)arg0 ;
-(id)setup;
-(id)train;


@end


#endif