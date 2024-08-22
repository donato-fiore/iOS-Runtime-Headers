// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMSKITRACKER_H
#define CMSKITRACKER_H


#import <Foundation/Foundation.h>

#import "CMSkiTrackerInternal.h"

@interface CMSkiTracker : NSObject

@property (readonly, nonatomic) CMSkiTrackerInternal *_internal; // ivar: _internal


+(BOOL)isAvailable;
-(id)init;
-(void)dealloc;
-(void)querySkiUpdatesFromRecord:(id)arg0 handler:(id)arg1 ;
-(void)startUpdatesFromRecord:(id)arg0 handler:(id)arg1 ;
-(void)stopUpdates;


@end


#endif