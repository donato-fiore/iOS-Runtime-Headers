// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMSWIMTRACKER_H
#define CMSWIMTRACKER_H


#import <Foundation/Foundation.h>

#import "CMSwimTrackerInternal.h"

@interface CMSwimTracker : NSObject

@property (readonly, nonatomic) CMSwimTrackerInternal *_internal; // ivar: _internal


+(BOOL)isAvailable;
+(NSUInteger)maxSwimDataEntries;
-(id)init;
-(void)dealloc;
-(void)querySwimUpdatesFromRecord:(id)arg0 handler:(id)arg1 ;
-(void)startUpdatesFromRecord:(id)arg0 handler:(id)arg1 ;
-(void)stopUpdates;


@end


#endif