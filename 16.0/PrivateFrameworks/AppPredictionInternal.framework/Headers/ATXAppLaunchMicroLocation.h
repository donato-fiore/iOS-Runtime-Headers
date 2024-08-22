// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXAPPLAUNCHMICROLOCATION_H
#define ATXAPPLAUNCHMICROLOCATION_H

@class _PASLock, NSString;

#import <Foundation/Foundation.h>

#import "_ATXDuetHelper.h"

@interface ATXAppLaunchMicroLocation : NSObject {
    _PASLock *_lock;
    _ATXDuetHelper *_duetHelper;
    NSString *_path;
}




-(BOOL)_loadCorrelationMatrices;
-(CGFloat)popularityAtCurrentMicroLocationForActionKey:(id)arg0 ;
-(CGFloat)popularityAtCurrentMicroLocationForApp:(id)arg0 ;
-(id)_getActionKeyCorrelationMatrix;
-(id)_getAppLaunchCorrelationMatrix;
-(id)_getHistoricalData;
-(id)init;
-(id)initWithDuetHelper:(id)arg0 directory:(id)arg1 forTesting:(BOOL)arg2 ;
-(void)_receivedNotificationOfNewMicroLocation;
-(void)_subscribeToDKInsertionEvents;
-(void)_writeAppLaunchCorrelationMatrix:(id)arg0 actionKeyCorrelationMatrix:(id)arg1 ;
-(void)train;
-(void)tryLoadCorrelationMatricesImmediately;


@end


#endif