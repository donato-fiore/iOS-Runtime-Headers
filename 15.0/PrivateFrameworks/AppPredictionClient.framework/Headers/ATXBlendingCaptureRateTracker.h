// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXBLENDINGCAPTURERATETRACKER_H
#define ATXBLENDINGCAPTURERATETRACKER_H


#import <Foundation/Foundation.h>


@interface ATXBlendingCaptureRateTracker : NSObject



+(void)logAppDirectoryCaptureWithTracker:(id)arg0 ;
+(void)logAppDirectoryDiversionWithCaptureType:(int)arg0 tracker:(id)arg1 ;
+(void)logHomeScreenCaptureWithTracker:(id)arg0 ;
+(void)logHomeScreenDiversionWithCaptureType:(int)arg0 tracker:(id)arg1 ;
+(void)logSpotlightActionCaptureWithTracker:(id)arg0 ;
+(void)logSpotlightActionDiversionWithCaptureType:(int)arg0 tracker:(id)arg1 ;
+(void)logSpotlightAppCaptureWithTracker:(id)arg0 ;
+(void)logSpotlightAppDiversionWithCaptureType:(int)arg0 tracker:(id)arg1 ;


@end


#endif