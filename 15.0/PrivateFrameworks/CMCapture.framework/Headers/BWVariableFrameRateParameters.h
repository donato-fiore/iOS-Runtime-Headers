// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWVARIABLEFRAMERATEPARAMETERS_H
#define BWVARIABLEFRAMERATEPARAMETERS_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface BWVariableFrameRateParameters : NSObject

@property (readonly, nonatomic) NSDictionary *aeMaxGain; // ivar: _aeMaxGain
@property (readonly, nonatomic) int motionThreshold; // ivar: _motionThreshold
@property (readonly, nonatomic) NSString *portType; // ivar: _portType


-(id)description;
-(id)initWithPortType:(id)arg0 sensorIDDictionary:(id)arg1 ;
-(void)dealloc;


@end


#endif