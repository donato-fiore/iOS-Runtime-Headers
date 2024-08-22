// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLBERTCLASSIFIER_H
#define SLBERTCLASSIFIER_H

@class NSString, MLModel, NSArray;

#import <Foundation/Foundation.h>


@interface SLBertClassifier : NSObject

@property (retain, nonatomic) NSString *assetVersion; // ivar: _assetVersion
@property (retain, nonatomic) MLModel *bertModel; // ivar: _bertModel
@property (nonatomic) NSUInteger maxInputCharsPerWord; // ivar: _maxInputCharsPerWord
@property (nonatomic) NSUInteger maxNumTokens; // ivar: _maxNumTokens
@property (nonatomic) NSUInteger numLeadingTokens; // ivar: _numLeadingTokens
@property (retain, nonatomic) NSString *outputNodeName; // ivar: _outputNodeName
@property (nonatomic) BOOL shouldAppendLeadingText; // ivar: _shouldAppendLeadingText
@property (retain, nonatomic) NSArray *truncationTokenList; // ivar: _truncationTokenList
@property (retain, nonatomic) NSString *unkToken; // ivar: _unkToken
@property (retain, nonatomic) NSArray *vocab; // ivar: _vocab


-(BOOL)_isCharPunctuation:(unsigned short)arg0 ;
-(id)_convert1dMLMultiArrayToNSArray:(id)arg0 ;
-(id)_createInputIdsAndRunModel:(id)arg0 ;
-(id)_normalizeText:(id)arg0 ;
-(id)_splitOnPunctuation:(id)arg0 ;
-(id)_wordPieceTokenizer:(id)arg0 ;
-(id)initWithConfig:(id)arg0 error:(*id)arg1 locale:(id)arg2 ;
-(id)processInputText:(id)arg0 ;
-(id)processSpeechPackage:(id)arg0 ;
-(void)_readVocabFromFile:(id)arg0 ;


@end


#endif