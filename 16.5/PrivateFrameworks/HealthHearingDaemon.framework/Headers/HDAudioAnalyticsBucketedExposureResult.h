// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDAUDIOANALYTICSBUCKETEDEXPOSURERESULT_H
#define HDAUDIOANALYTICSBUCKETEDEXPOSURERESULT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface HDAudioAnalyticsBucketedExposureResult : NSObject

@property (retain, nonatomic) NSNumber *audioExposureDose; // ivar: _audioExposureDose
@property (retain, nonatomic) NSNumber *audioExposureDuration; // ivar: _audioExposureDuration
@property (retain, nonatomic) NSNumber *audioExposureLEQ; // ivar: _audioExposureLEQ


-(id)initWithLEQ:(id)arg0 duration:(id)arg1 dose:(id)arg2 ;


@end


#endif