// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTKEYWORDANALYZERPHRASESCORE_H
#define VTKEYWORDANALYZERPHRASESCORE_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface VTKeywordAnalyzerPhraseScore : NSObject

@property (nonatomic) NSUInteger bestEnd; // ivar: _bestEnd
@property (nonatomic) float bestScore; // ivar: _bestScore
@property (nonatomic) NSUInteger bestStart; // ivar: _bestStart
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (nonatomic) BOOL isEarlyWarning; // ivar: _isEarlyWarning
@property (nonatomic) BOOL isRescoring; // ivar: _isRescoring
@property (nonatomic) BOOL isSecondChance; // ivar: _isSecondChance
@property (retain, nonatomic) NSString *phStr; // ivar: _phStr
@property (nonatomic) NSUInteger phraseId; // ivar: _phraseId
@property (nonatomic) NSUInteger samplesAtFire; // ivar: _samplesAtFire
@property (nonatomic) NSUInteger samplesFed; // ivar: _samplesFed
@property (nonatomic) NSUInteger startSampleCount; // ivar: _startSampleCount


-(id)init;


@end


#endif