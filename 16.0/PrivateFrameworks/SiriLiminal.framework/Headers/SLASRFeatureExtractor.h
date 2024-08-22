// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLASRFEATUREEXTRACTOR_H
#define SLASRFEATUREEXTRACTOR_H


#import <Foundation/Foundation.h>


@interface SLASRFeatureExtractor : NSObject



+(id)_getLastTokenForPath:(id)arg0 fromPhrases:(id)arg1 ;
+(id)_getTokenConfidenceForPath:(id)arg0 fromPhrases:(id)arg1 ;
+(id)extractASRFaturesFrom:(id)arg0 ;
+(id)extractLRNNFaturesFrom:(id)arg0 ;
+(id)getBestSpeechRecognitionTextFromPackage:(id)arg0 ;


@end


#endif