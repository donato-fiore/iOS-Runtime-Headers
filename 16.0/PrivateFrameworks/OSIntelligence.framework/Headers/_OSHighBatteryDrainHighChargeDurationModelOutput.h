// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _OSHIGHBATTERYDRAINHIGHCHARGEDURATIONMODELOUTPUT_H
#define _OSHIGHBATTERYDRAINHIGHCHARGEDURATIONMODELOUTPUT_H

@class NSDictionary, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface _OSHighBatteryDrainHighChargeDurationModelOutput : NSObject <MLFeatureProvider>



@property (retain, nonatomic) NSDictionary *classProbability; // ivar: _classProbability
@property (readonly, nonatomic) NSSet *featureNames;
@property (nonatomic) NSInteger label; // ivar: _label


-(id)featureValueForName:(id)arg0 ;
-(id)initWithLabel:(NSInteger)arg0 classProbability:(id)arg1 ;


@end


#endif