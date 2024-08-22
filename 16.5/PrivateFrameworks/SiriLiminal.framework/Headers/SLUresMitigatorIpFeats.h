// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLURESMITIGATORIPFEATS_H
#define SLURESMITIGATORIPFEATS_H

@class NSNumber, NSDictionary, AFSpeechPackage;

#import <Foundation/Foundation.h>


@interface SLUresMitigatorIpFeats : NSObject

@property (retain, nonatomic) NSNumber *acousticFTMScores; // ivar: _acousticFTMScores
@property (retain, nonatomic) NSNumber *boronScore; // ivar: _boronScore
@property (nonatomic) NSUInteger decisionStage; // ivar: _decisionStage
@property (nonatomic) BOOL didDetectSpeechActivity; // ivar: _didDetectSpeechActivity
@property (retain, nonatomic) NSNumber *eosLikelihood; // ivar: _eosLikelihood
@property (retain, nonatomic) NSNumber *inputOrigin; // ivar: _inputOrigin
@property (nonatomic) BOOL isAirpodsConnected; // ivar: _isAirpodsConnected
@property (retain, nonatomic) NSDictionary *nldaMetaInfo; // ivar: _nldaMetaInfo
@property (retain, nonatomic) NSNumber *nldaScore; // ivar: _nldaScore
@property (retain, nonatomic) NSNumber *prevStageOutput; // ivar: _prevStageOutput
@property (retain, nonatomic) NSNumber *speakerIDScore; // ivar: _speakerIDScore
@property (retain, nonatomic) AFSpeechPackage *speechPackage; // ivar: _speechPackage
@property (nonatomic) CGFloat timeSinceLastQuery; // ivar: _timeSinceLastQuery




@end


#endif