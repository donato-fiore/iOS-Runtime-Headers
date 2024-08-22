// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXAPPLAUNCHMICROLOCATIONGUARDEDDATA_H
#define ATXAPPLAUNCHMICROLOCATIONGUARDEDDATA_H

@class NSDictionary, NSDate;

#import <Foundation/Foundation.h>

#import "ATXLocationToLaunchCorrelation.h"

@interface ATXAppLaunchMicroLocationGuardedData : NSObject {
    id *_waitForUnlockNotificationToken;
    NSDictionary *_currentMicroLocation;
    NSDate *_currentMicroLocationDate;
    ATXLocationToLaunchCorrelation *_locationToAppLaunchCorrelation;
    ATXLocationToLaunchCorrelation *_locationToActionKeyCorrelation;
}




-(BOOL)microLocationExpired:(id)arg0 ;
-(id)getCurrentMicroLocation;
-(id)initWithCurrentMicroLocation:(id)arg0 ;
-(void)setCurrentMicroLocation:(id)arg0 ;


@end


#endif