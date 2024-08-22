// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKGROUNDSYSTEMTASK_H
#define HMDBACKGROUNDSYSTEMTASK_H

@class NSString, BGSystemTask;
@protocol HMDBackgroundSystemTask;

#import <Foundation/Foundation.h>


@interface HMDBackgroundSystemTask : NSObject <HMDBackgroundSystemTask>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BGSystemTask *underlyingTask; // ivar: _underlyingTask


-(id)initWithUnderlyingTask:(id)arg0 ;
-(void)setTaskCompleted;


@end


#endif