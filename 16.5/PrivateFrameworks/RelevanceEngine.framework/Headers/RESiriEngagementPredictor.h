// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RESIRIENGAGEMENTPREDICTOR_H
#define RESIRIENGAGEMENTPREDICTOR_H

@class NSString;
@protocol REUpNextSiriObserver, RESiriEngagementPredictorProperties;


#import "REPredictor.h"
#import "REUpNextTimer.h"

@interface RESiriEngagementPredictor : REPredictor <REUpNextSiriObserver, RESiriEngagementPredictorProperties>

 {
    REUpNextTimer *_siriDecayTimer;
    NSString *_lastSiriDomain;
    float _siriInfluence;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *lastSiriDomain;
@property (readonly, nonatomic) float siriInfluence;
@property (readonly) Class superclass;


+(id)supportedFeatures;
-(id)_init;
-(id)featureValueForFeature:(id)arg0 element:(id)arg1 engine:(id)arg2 trainingContext:(id)arg3 ;
-(void)siriServer:(id)arg0 receivedCompletedRequestDomain:(id)arg1 ;


@end


#endif