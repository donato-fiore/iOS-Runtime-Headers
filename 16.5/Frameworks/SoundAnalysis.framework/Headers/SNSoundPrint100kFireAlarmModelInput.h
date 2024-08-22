// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNSOUNDPRINT100KFIREALARMMODELINPUT_H
#define SNSOUNDPRINT100KFIREALARMMODELINPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SNSoundPrint100kFireAlarmModelInput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *soundprint_Placeholder; // ivar: _soundprint_Placeholder


-(id)featureValueForName:(id)arg0 ;
-(id)initWithSoundprint_Placeholder:(id)arg0 ;


@end


#endif