// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDBACKGROUNDTASKAGENTTIMER_H
#define HMDBACKGROUNDTASKAGENTTIMER_H

@class NSString;
@protocol HMFLogging;

#import <Foundation/Foundation.h>


@interface HMDBackgroundTaskAgentTimer : NSObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *timerID; // ivar: _timerID


+(id)logCategory;
-(id)initWithTimerID:(id)arg0 ;
-(id)logIdentifier;
-(void)_startTimer:(id)arg0 home:(id)arg1 completionHandler:(id)arg2 ;
-(void)_stopTimer:(id)arg0 ;


@end


#endif