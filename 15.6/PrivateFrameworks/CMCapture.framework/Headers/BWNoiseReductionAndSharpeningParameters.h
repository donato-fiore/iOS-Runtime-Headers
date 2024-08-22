// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWNOISEREDUCTIONANDSHARPENINGPARAMETERS_H
#define BWNOISEREDUCTIONANDSHARPENINGPARAMETERS_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface BWNoiseReductionAndSharpeningParameters : NSObject {
    NSString *_portType;
    NSDictionary *_noiseReductionAndSharpeningConfiguration;
}




-(id)_noiseReductionAndSharpeningParametersForType:(int)arg0 ;
-(id)description;
-(id)initWithPortType:(id)arg0 sensorIDDictionary:(id)arg1 ;
-(id)noiseReductionAndSharpeningConfigurationForType:(int)arg0 gain:(float)arg1 ;
-(id)portType;
-(void)dealloc;


@end


#endif