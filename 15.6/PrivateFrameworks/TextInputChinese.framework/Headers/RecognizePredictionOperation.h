// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RECOGNIZEPREDICTIONOPERATION_H
#define RECOGNIZEPREDICTIONOPERATION_H

@class NSOperation, NSDictionary, NSArray, NSString, CHRecognizer;


#import "TIInputManagerHandwriting.h"

@interface RecognizePredictionOperation : NSOperation

@property (readonly, nonatomic) NSDictionary *candidateRefsDictionary; // ivar: _candidateRefsDictionary
@property (readonly, nonatomic) NSArray *candidates; // ivar: _candidates
@property (readonly, copy, nonatomic) NSArray *committedCandidates; // ivar: _committedCandidates
@property (readonly, nonatomic) TIInputManagerHandwriting *inputManager; // ivar: _inputManager
@property (readonly, nonatomic) NSUInteger predictionOptions; // ivar: _predictionOptions
@property (readonly, nonatomic) NSString *prefixContext; // ivar: _prefixContext
@property (readonly, nonatomic) NSArray *proactiveTriggers; // ivar: _proactiveTriggers
@property (readonly, nonatomic) CHRecognizer *recognizer; // ivar: _recognizer


-(id)initWithInputManager:(id)arg0 predictionOptions:(NSUInteger)arg1 prefixContext:(id)arg2 ;
-(void)main;


@end


#endif