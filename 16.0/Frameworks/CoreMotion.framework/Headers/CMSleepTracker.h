// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMSLEEPTRACKER_H
#define CMSLEEPTRACKER_H


#import <Foundation/Foundation.h>

#import "CMSpringTrackerInternal.h"

@interface CMSleepTracker : NSObject

@property (readonly, nonatomic) CMSpringTrackerInternal *_internal; // ivar: _internal


+(BOOL)isAvailable;
-(BOOL)isTracking;
-(id)init;
-(void)dealloc;
-(void)querySleepDataFromRecord:(id)arg0 handler:(id)arg1 ;
-(void)startWithHandler:(id)arg0 ;
-(void)stopWithHandler:(id)arg0 ;


@end


#endif