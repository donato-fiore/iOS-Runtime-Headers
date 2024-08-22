// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRLANGUAGEMODELCONFIGURATION_H
#define CRLANGUAGEMODELCONFIGURATION_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface CRLanguageModelConfiguration : NSObject

@property (readonly) NSNumber *characterLMWeight; // ivar: _characterLMWeight
@property (readonly) float filteringActivationThreshold; // ivar: _filteringActivationThreshold
@property (retain) NSArray *filteringCharLengths; // ivar: _filteringCharLengths
@property (readonly) NSInteger filteringMinimumLength; // ivar: _filteringMinimumLength
@property (readonly) NSNumber *lexiconWeight; // ivar: _lexiconWeight
@property (retain) NSArray *lmFilteringThresholds; // ivar: _lmFilteringThresholds
@property (readonly) NSNumber *wordLMWeight; // ivar: _wordLMWeight


+(id)configurationForLanguageIdentifier:(id)arg0 rev:(NSUInteger)arg1 ;
-(float)lmThresholdForLength:(NSInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif