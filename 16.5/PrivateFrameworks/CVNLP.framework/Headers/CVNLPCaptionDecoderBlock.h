// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVNLPCAPTIONDECODERBLOCK_H
#define CVNLPCAPTIONDECODERBLOCK_H

@class NSString;
@protocol OS_dispatch_queue;


#import "CVNLPCaptionModelBase.h"
#import "CVNLPCaptionDecoderBlock.h"

@interface CVNLPCaptionDecoderBlock : CVNLPCaptionModelBase {
    map<std::string, std::vector<float>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<float>>>> _stateOutputEspressoBuffers;
    map<std::string, std::vector<float>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<float>>>> _stateInputEspressoBuffers;
    map<std::string, std::vector<unsigned long>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<unsigned long>>>> _stateInputEspressoBuffersShape;
    vector<std::string, std::allocator<std::string>> _decoderInputNames;
}


@property (nonatomic) ? attFeatsPlaceholderBlob; // ivar: _attFeatsPlaceholderBlob
@property (nonatomic) ? blockInput; // ivar: _blockInput
@property (nonatomic) ? blockOutput; // ivar: _blockOutput
@property (nonatomic) *void decoderCtx; // ivar: _decoderCtx
@property ? decoderInputNames;
@property (nonatomic) ? decoderNet; // ivar: _decoderNet
@property (nonatomic) *void decoderPlan; // ivar: _decoderPlan
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *decoderQueue; // ivar: _decoderQueue
@property (nonatomic) ? maskInput; // ivar: _maskInput
@property (retain, nonatomic) NSString *metricCopyString; // ivar: _metricCopyString
@property (retain, nonatomic) NSString *metricString; // ivar: _metricString
@property (nonatomic) NSUInteger modelIndex; // ivar: _modelIndex
@property (retain, nonatomic) CVNLPCaptionDecoderBlock *nextBlock; // ivar: _nextBlock
@property (nonatomic) ? positionInput; // ivar: _positionInput
@property (nonatomic) ? scaleInput; // ivar: _scaleInput
@property ? stateInputEspressoBuffers;
@property ? stateInputEspressoBuffersShape;
@property ? stateOutputEspressoBuffers;


-(BOOL)_loadNetwork:(id)arg0 modelIndex:(NSUInteger)arg1 ;
-(id)initWithOptions:(id)arg0 modelIndex:(NSUInteger)arg1 runTimeParams:(id)arg2 ;
-(void)_runBlockWithCopyOutputBlock:(id)arg0 ;
-(void)buildNetworkForSequenceLength:(NSUInteger)arg0 imageFeatures:(id)arg1 ;
-(void)copyInputState:(id)arg0 ;
-(void)copyOutputState:(id)arg0 ;
-(void)runBlockWithCopyInput:(*float)arg0 copyOutputBlock:(id)arg1 ;
// -(void)runBlockWithCopyInputBlock:(id)arg0 copyOutputBlock:(unk)arg1  ;


@end


#endif