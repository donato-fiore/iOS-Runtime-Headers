// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSYNCHRONOUSBLOCKSCHEDULER_H
#define AVSYNCHRONOUSBLOCKSCHEDULER_H

@class NSString;
@protocol AVBlockScheduler;

#import <Foundation/Foundation.h>


@interface AVSynchronousBlockScheduler : NSObject <AVBlockScheduler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)scheduleBlock:(id)arg0 ;


@end


#endif