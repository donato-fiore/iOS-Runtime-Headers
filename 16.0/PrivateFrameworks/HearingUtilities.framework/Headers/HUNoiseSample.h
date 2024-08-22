// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUNOISESAMPLE_H
#define HUNOISESAMPLE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface HUNoiseSample : NSObject

@property (retain, nonatomic) NSDate *sampleDate; // ivar: _sampleDate
@property (nonatomic) float sampleDuration; // ivar: _sampleDuration
@property (nonatomic) float splValue; // ivar: _splValue


-(id)initWithSampleDate:(id)arg0 splValue:(float)arg1 andDuration:(float)arg2 ;


@end


#endif