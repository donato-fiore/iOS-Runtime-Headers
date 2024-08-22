// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHIMPORTBATCH_H
#define PHIMPORTBATCH_H

@class NSDate, NSMutableArray;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "PHImportTimerCollection.h"

@interface PHImportBatch : NSObject {
    NSDate *_start;
}


@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) NSMutableArray *records; // ivar: _records
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore
@property (readonly, nonatomic) PHImportTimerCollection *timers; // ivar: _timers


-(id)init;


@end


#endif