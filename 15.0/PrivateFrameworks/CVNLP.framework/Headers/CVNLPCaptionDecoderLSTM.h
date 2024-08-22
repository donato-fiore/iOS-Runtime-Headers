// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVNLPCAPTIONDECODERLSTM_H
#define CVNLPCAPTIONDECODERLSTM_H

@class NSDictionary;


#import "CVNLPCaptionDecoder.h"

@interface CVNLPCaptionDecoderLSTM : CVNLPCaptionDecoder {
    int startID;
    int endID;
    int maxCaptionLen;
    int beamSize;
    int vocabSize;
    NSDictionary *vocab;
    *void _decoderPlan;
    *void decoderCtx;
    ? decoderNet;
    ? meanFeatsPlaceholderBlob;
    ? attFeatsPlaceholderBlob;
    ? pAttFeatsPlaceholderBlob;
    ? lstmAttStateFeedBlob;
    ? lstmLangStateFeedBlob;
    ? inWordIDBlob;
    ? wordIDBlob;
    ? langProbBlob;
    ? newAttStateBlob;
    ? newLangStateBlob;
    *CVNLPBeamSearch _beamSearch;
    BOOL meanFeaturesPresent;
}




-(id)computeCaptionForImageWithInputs:(id)arg0 genderOption:(int)arg1 ;
-(id)initWithOptions:(id)arg0 runTimeParams:(id)arg1 ;
-(id)packBeamID:(id)arg0 tokenID:(id)arg1 lstmAttnState:(struct ? *)arg2 lstmLangState:(struct ? *)arg3 softmax:(struct ? *)arg4 ;
-(void)dealloc;
-(void)extractBeamID:(*id)arg0 tokenID:(*id)arg1 lstmAttnState:(struct ? *)arg2 lstmLangState:(struct ? *)arg3 fromFollowup:(id)arg4 ;


@end


#endif