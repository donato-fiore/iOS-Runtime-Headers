// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CESRAUDIOSAMPLINGCONFIG_H
#define CESRAUDIOSAMPLINGCONFIG_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CESRAudioSamplingConfig : NSObject

@property (readonly, copy, nonatomic) NSArray *samplingPolicies; // ivar: _samplingPolicies


-(id)getSamplingRateFromDimension:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithConfigPath:(id)arg0 ;


@end


#endif