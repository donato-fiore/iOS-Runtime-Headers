// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWCAMERALOCKSCREENLAUNCHANALYTICSPAYLOAD_H
#define BWCAMERALOCKSCREENLAUNCHANALYTICSPAYLOAD_H

@class NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWCameraLockScreenLaunchAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>



@property (nonatomic) BOOL completed; // ivar: _completed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ispStreamingStarted; // ivar: _ispStreamingStarted
@property (nonatomic) int launchError; // ivar: _launchError
@property (nonatomic) BOOL prewarmed; // ivar: _prewarmed
@property (readonly) Class superclass;


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)reset;


@end


#endif