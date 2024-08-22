// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWCAMERAAPPLAUNCHANALYTICSPAYLOAD_H
#define BWCAMERAAPPLAUNCHANALYTICSPAYLOAD_H

@class NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWCameraAppLaunchAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int devicePosition; // ivar: _devicePosition
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPrewarmed; // ivar: _isPrewarmed
@property (nonatomic) int launchDuration; // ivar: _launchDuration
@property (copy, nonatomic) NSString *launchMode; // ivar: _launchMode
@property (nonatomic) int memoryStatusLevel; // ivar: _memoryStatusLevel
@property (copy, nonatomic) NSString *prewarmReason; // ivar: _prewarmReason
@property (readonly) Class superclass;
@property (nonatomic) int thermalLevel; // ivar: _thermalLevel


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)dealloc;
-(void)reset;


@end


#endif