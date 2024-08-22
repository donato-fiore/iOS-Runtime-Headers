// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWINFERENCESCHEDULERJOBLIST_H
#define BWINFERENCESCHEDULERJOBLIST_H

@class NSMapTable;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface BWInferenceSchedulerJobList : NSObject <NSFastEnumeration>

 {
    NSUInteger _jobCount;
    NSUInteger _mutations;
    *? _orderedJobs;
    NSMapTable *_jobIndexByProvider;
}


@property (readonly) NSUInteger count;


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(struct ? *)jobAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif