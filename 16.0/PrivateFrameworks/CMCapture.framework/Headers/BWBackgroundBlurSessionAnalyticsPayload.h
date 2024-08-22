// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWBACKGROUNDBLURSESSIONANALYTICSPAYLOAD_H
#define BWBACKGROUNDBLURSESSIONANALYTICSPAYLOAD_H

@class NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWBackgroundBlurSessionAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>



@property (nonatomic) CGFloat averageProcessingTime; // ivar: _averageProcessingTime
@property (copy, nonatomic) NSString *clientApplicationID; // ivar: _clientApplicationID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger effectQuality; // ivar: _effectQuality
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxProcessingTime; // ivar: _maxProcessingTime
@property (nonatomic) int maxThermalSystemPressureLevel; // ivar: _maxThermalSystemPressureLevel
@property (nonatomic) int numberOfFrameDrops; // ivar: _numberOfFrameDrops
@property (nonatomic) NSInteger numberOfFrames; // ivar: _numberOfFrames
@property (readonly) Class superclass;


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)dealloc;
-(void)reset;


@end


#endif