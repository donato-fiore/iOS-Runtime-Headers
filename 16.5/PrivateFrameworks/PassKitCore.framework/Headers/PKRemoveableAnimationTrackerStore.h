// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKREMOVEABLEANIMATIONTRACKERSTORE_H
#define PKREMOVEABLEANIMATIONTRACKERSTORE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PKRemoveableAnimationTrackerStore : NSObject

@property (copy, nonatomic) NSArray *trackers; // ivar: _trackers


-(id)init;
-(void)preempt;
-(void)remove;


@end


#endif