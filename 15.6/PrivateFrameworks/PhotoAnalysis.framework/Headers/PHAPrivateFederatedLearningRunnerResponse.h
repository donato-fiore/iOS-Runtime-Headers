// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAPRIVATEFEDERATEDLEARNINGRUNNERRESPONSE_H
#define PHAPRIVATEFEDERATEDLEARNINGRUNNERRESPONSE_H

@class NSData, NSDictionary;

#import <Foundation/Foundation.h>


@interface PHAPrivateFederatedLearningRunnerResponse : NSObject

@property (retain, nonatomic) NSData *dataPackage; // ivar: _dataPackage
@property (retain, nonatomic) NSDictionary *trainingMetrics; // ivar: _trainingMetrics


-(id)initWithDataPackage:(id)arg0 layersToTrain:(id)arg1 trainingLossesPerEpoch:(id)arg2 trainingAccuraciesPerEpoch:(id)arg3 ;


@end


#endif