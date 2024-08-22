// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDQUANTITYSAMPLEATTENUATIONPROVIDER_H
#define HDQUANTITYSAMPLEATTENUATIONPROVIDER_H

@class HKQuantityType;
@protocol HDQuantitySampleAttenuationEngineDelegate;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDQuantitySampleOverlapProcessor.h"

@interface HDQuantitySampleAttenuationProvider : NSObject <HDQuantitySampleAttenuationEngineDelegate>

 {
    HKQuantityType *_quantityType;
    HDProfile *_profile;
    HDQuantitySampleOverlapProcessor *_overlapProcessor;
}




-(NSInteger)loadAttenuationSamples:(struct ? *)arg0 anchorTime:(CGFloat)arg1 errorOut:(*id)arg2 ;
-(id)initWithQuantityType:(id)arg0 profile:(id)arg1 ;


@end


#endif