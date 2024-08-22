// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWINFERENCESCALINGREQUIREMENT_H
#define BWINFERENCESCALINGREQUIREMENT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface BWInferenceScalingRequirement : NSObject

@property (readonly, nonatomic) NSArray *orderedVideoRequirements; // ivar: _orderedVideoRequirements


-(id)initWithInputVideoRequirement:(id)arg0 requestedOutputVideoRequirements:(id)arg1 intermediatePixelBufferCompressionType:(int)arg2 ;
-(void)dealloc;


@end


#endif