// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTKEYWORDANALYZERRESULTS_H
#define VTKEYWORDANALYZERRESULTS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VTKeywordAnalyzerResults : NSObject

@property (nonatomic) NSUInteger detectorType; // ivar: _detectorType
@property (nonatomic) NSUInteger numPhraseResults; // ivar: _numPhraseResults
@property (retain, nonatomic) NSArray *phraseScores; // ivar: _phraseScores


-(id)description;
-(id)init;


@end


#endif