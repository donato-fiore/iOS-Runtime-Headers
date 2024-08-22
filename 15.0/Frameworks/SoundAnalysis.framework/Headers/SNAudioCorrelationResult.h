// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNAUDIOCORRELATIONRESULT_H
#define SNAUDIOCORRELATIONRESULT_H

@class NSString, NSDictionary;
@protocol SNTimeConversionDictionaryProviding, SNTimeRangeProvidingWritable, SNTimeRangeProviding;

#import <Foundation/Foundation.h>


@interface SNAudioCorrelationResult : NSObject <SNTimeConversionDictionaryProviding, SNTimeRangeProvidingWritable, SNTimeRangeProviding>



@property (nonatomic) NSInteger channelIndex; // ivar: _channelIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) ? peakTime; // ivar: _peakTime
@property (nonatomic) CGFloat peakValue; // ivar: _peakValue
@property (readonly) Class superclass;
@property (readonly) NSDictionary *timeConversionDictionary;
@property (nonatomic) ? timeRange; // ivar: timeRange




@end


#endif