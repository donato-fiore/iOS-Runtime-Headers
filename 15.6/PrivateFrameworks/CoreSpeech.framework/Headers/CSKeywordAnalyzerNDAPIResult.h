// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSKEYWORDANALYZERNDAPIRESULT_H
#define CSKEYWORDANALYZERNDAPIRESULT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CSKeywordAnalyzerNDAPIResult : NSObject

@property (nonatomic) NSUInteger bestEnd; // ivar: _bestEnd
@property (nonatomic) NSUInteger bestPhrase; // ivar: _bestPhrase
@property (nonatomic) float bestScore; // ivar: _bestScore
@property (nonatomic) NSUInteger bestStart; // ivar: _bestStart
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (nonatomic) BOOL isEarlyWarning; // ivar: _isEarlyWarning
@property (nonatomic) BOOL isRescoring; // ivar: _isRescoring
@property (nonatomic) NSUInteger phraseId; // ivar: _phraseId
@property (nonatomic) NSUInteger samplesAtFire; // ivar: _samplesAtFire
@property (nonatomic) NSUInteger samplesFed; // ivar: _samplesFed
@property (nonatomic) NSUInteger startSampleCount; // ivar: _startSampleCount


-(id)init;


@end


#endif