// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSVTSECONDPASSPHRASESCORE_H
#define CSVTSECONDPASSPHRASESCORE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CSKeywordAnalyzerNDAPIResult.h"

@interface CSVTSecondPassPhraseScore : NSObject

@property (nonatomic) float combinedScore; // ivar: _combinedScore
@property (nonatomic) float ctcCheckerScore; // ivar: _ctcCheckerScore
@property (nonatomic) BOOL isMaximized; // ivar: _isMaximized
@property (nonatomic) float loggingThreshold; // ivar: _loggingThreshold
@property (retain, nonatomic) CSKeywordAnalyzerNDAPIResult *ndapiResult; // ivar: _ndapiResult
@property (nonatomic) float ndapiScore; // ivar: _ndapiScore
@property (nonatomic) NSUInteger phId; // ivar: _phId
@property (retain, nonatomic) NSString *phStr; // ivar: _phStr
@property (nonatomic) float recognizerScoreScaleFactor; // ivar: _recognizerScoreScaleFactor
@property (nonatomic) float recognizerThresholdOffset; // ivar: _recognizerThresholdOffset
@property (nonatomic) float satThreshold; // ivar: _satThreshold
@property (nonatomic) float secondChanceThreshold; // ivar: _secondChanceThreshold
@property (nonatomic) float tdsrSatCombinedSATThreshold; // ivar: _tdsrSatCombinedSATThreshold
@property (nonatomic) float threshold; // ivar: _threshold
@property (nonatomic) BOOL useKwdSpotting; // ivar: _useKwdSpotting


-(BOOL)didTriggerWithSecondChanceEnabled:(BOOL)arg0 ;
-(BOOL)hasNearMissTriggerWithSecondChanceEnabled:(BOOL)arg0 ;
-(float)effectiveThresholdWithSecondChanceEnabled:(BOOL)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)dictionaryRepresentationWithSecondChanceEnabled:(BOOL)arg0 ;
-(id)initWithPhraseInfoDict:(id)arg0 useKeywordSpotting:(BOOL)arg1 ;
-(void)_update;
-(void)updateWithCtcScore:(float)arg0 ;
-(void)updateWithNdapiResult:(id)arg0 ;


@end


#endif