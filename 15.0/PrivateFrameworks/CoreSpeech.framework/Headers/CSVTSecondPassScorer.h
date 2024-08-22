// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSVTSECONDPASSSCORER_H
#define CSVTSECONDPASSSCORER_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "CSVTSecondPassPhraseScore.h"

@interface CSVTSecondPassScorer : NSObject

@property (retain, nonatomic) NSDictionary *phraseMap; // ivar: _phraseMap
@property (retain, nonatomic) CSVTSecondPassPhraseScore *triggeredPhrase; // ivar: _triggeredPhrase


-(id)bestScoringPhrase;
-(id)description;
-(id)dictionaryRepresentationWithSecondChanceEnabled:(BOOL)arg0 ;
-(id)getNearMissPhraseWithSecondChanceEnabled:(BOOL)arg0 ;
-(id)getTriggeredPhraseWithSecondChanceEnabled:(BOOL)arg0 ;
-(id)initWithAsset:(id)arg0 firstPassSource:(NSUInteger)arg1 ;
-(void)updateWithCtcCheckerResults:(id)arg0 ;
-(void)updateWithNdapiResults:(id)arg0 ;


@end


#endif