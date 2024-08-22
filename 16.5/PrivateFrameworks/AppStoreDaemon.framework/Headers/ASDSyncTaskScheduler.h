// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDSYNCTASKSCHEDULER_H
#define ASDSYNCTASKSCHEDULER_H

@class NSString;
@protocol ASDTaskScheduler;

#import <Foundation/Foundation.h>


@interface ASDSyncTaskScheduler : NSObject <ASDTaskScheduler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)scheduleBlock:(id)arg0 ;


@end


#endif