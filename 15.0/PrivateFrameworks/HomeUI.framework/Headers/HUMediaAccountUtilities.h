// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUMEDIAACCOUNTUTILITIES_H
#define HUMEDIAACCOUNTUTILITIES_H


#import <Foundation/Foundation.h>


@interface HUMediaAccountUtilities : NSObject



+(BOOL)isMusicAppInstalled;
+(id)defaultCurrentVolumeForMediaProfiles:(id)arg0 ;
+(id)determineMediaPickerAvailabilityForHomePodProfiles:(id)arg0 inHome:(id)arg1 ;
+(id)isAppleMusicSubscriptionAvailable;
+(id)musicAppURL;
+(id)reasonForMediaPickerNotAvailable:(NSInteger)arg0 ;


@end


#endif