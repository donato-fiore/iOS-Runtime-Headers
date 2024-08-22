// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNAUDIOCORRELATIONRESULT_H
#define SNAUDIOCORRELATIONRESULT_H

@class NSString, NSDictionary;
@protocol SNTimeConversionDictionaryProviding, SNTimeRangeProvidingWritable, SNTimeRangeProviding;

#import <Foundation/Foundation.h>


@interface SNAudioCorrelationResult : NSObject <SNTimeConversionDictionaryProviding, SNTimeRangeProvidingWritable, SNTimeRangeProviding>

 {
    CGFloat _peakValue;
    NSInteger _channelIndex;
    ? _peakTime;
}


@property (readonly, nonatomic) NSInteger channelIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ? peakTime;
@property (readonly, nonatomic) CGFloat peakValue;
@property (readonly) Class superclass;
@property (readonly) NSDictionary *timeConversionDictionary;
@property (nonatomic) ? timeRange; // ivar: timeRange




@end


#endif