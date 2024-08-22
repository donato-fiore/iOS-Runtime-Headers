// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWINFERENCECONFIGURATION_H
#define BWINFERENCECONFIGURATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface BWInferenceConfiguration : NSObject

@property (readonly, nonatomic) int inferenceType; // ivar: _inferenceType
@property (nonatomic) float maximumFramesPerSecond; // ivar: _maximumFramesPerSecond
@property (nonatomic) unsigned int priority; // ivar: _priority
@property (nonatomic) BOOL propagatesFrameRatePrevention; // ivar: _propagatesFrameRatePrevention
@property (copy, nonatomic) NSDictionary *tuningParameters; // ivar: _tuningParameters


-(id)initWithInferenceType:(int)arg0 ;
-(void)dealloc;


@end


#endif