// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNSOUNDPRINT100KSMOKEALARMMODELOUTPUT_H
#define SNSOUNDPRINT100KSMOKEALARMMODELOUTPUT_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SNSoundPrint100kSmokeAlarmModelOutput : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *Sigmoid; // ivar: _Sigmoid
@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWithSigmoid:(id)arg0 ;


@end


#endif