// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKSUBMISSIONTIMER_H
#define FBKSUBMISSIONTIMER_H

@class NSTimer;
@protocol FBKSubmissionTimerDelegate;

#import <Foundation/Foundation.h>

#import "FBKUploadTask.h"

@interface FBKSubmissionTimer : NSObject

@property (weak) NSObject<FBKSubmissionTimerDelegate> *delegate; // ivar: _delegate
@property CGFloat givenInterval; // ivar: _givenInterval
@property (retain) FBKUploadTask *task; // ivar: _task
@property (retain) NSTimer *timer; // ivar: _timer


-(CGFloat)currentInterval;
-(id)initWithDelegate:(id)arg0 forTask:(id)arg1 initialTimeout:(CGFloat)arg2 ;
-(void)dealloc;


@end


#endif