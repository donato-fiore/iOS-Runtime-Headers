// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSPHRASENDEAPISCORER_H
#define CSPHRASENDEAPISCORER_H

@class NSMutableData, NSString, CSKeywordAnalyzerNDEAPI;
@protocol CSKeywordAnalyzerNDEAPIScoreDelegate, CSPhraseNDEAPIScorerDelegate;

#import <Foundation/Foundation.h>

#import "CSShadowMicScoreCreator.h"

@interface CSPhraseNDEAPIScorer : NSObject <CSKeywordAnalyzerNDEAPIScoreDelegate>



@property (retain, nonatomic) NSMutableData *dataBufferNDEAPI; // ivar: _dataBufferNDEAPI
@property (nonatomic) NSUInteger dataBufferPositionNDEAPI; // ivar: _dataBufferPositionNDEAPI
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSPhraseNDEAPIScorerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned char hasReceivedEarlyDetectNDEAPIResult; // ivar: _hasReceivedEarlyDetectNDEAPIResult
@property (nonatomic) BOOL hasReceivedNDEAPIResult; // ivar: _hasReceivedNDEAPIResult
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CSKeywordAnalyzerNDEAPI *keywordAnalyzerNDEAPI; // ivar: _keywordAnalyzerNDEAPI
@property (retain, nonatomic) CSShadowMicScoreCreator *shadowMicScoreCreator; // ivar: _shadowMicScoreCreator
@property (readonly, nonatomic) float shadowMicScoreThresholdForVAD; // ivar: _shadowMicScoreThresholdForVAD
@property (readonly) Class superclass;


-(CGFloat)currentShadowMicScore;
-(id)initWithAsset:(id)arg0 assetConfig:(id)arg1 firstPassSource:(NSUInteger)arg2 activeChannel:(NSUInteger)arg3 siriLanguage:(id)arg4 shouldEnableShadowMicScore:(BOOL)arg5 ;
-(void)keywordAnalyzerNDEAPI:(id)arg0 hasResultAvailable:(id)arg1 forChannel:(NSUInteger)arg2 ;
-(void)processAudioChunk:(id)arg0 activeChannel:(NSUInteger)arg1 ;
-(void)reset;


@end


#endif