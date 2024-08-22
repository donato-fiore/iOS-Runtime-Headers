// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NOTIFICATIONSCLASSIFIEROUTPUT_H
#define NOTIFICATIONSCLASSIFIEROUTPUT_H

@class NSDictionary, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface NotificationsClassifierOutput : NSObject <MLFeatureProvider>



@property (retain, nonatomic) NSDictionary *classProbability; // ivar: _classProbability
@property (readonly, nonatomic) NSSet *featureNames;
@property (nonatomic) NSInteger predictedValue; // ivar: _predictedValue


-(id)featureValueForName:(id)arg0 ;
-(id)initWithPredictedValue:(NSInteger)arg0 classProbability:(id)arg1 ;


@end


#endif