// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFLBACKGROUNDSESSION_H
#define PFLBACKGROUNDSESSION_H

@class NSCondition, BGTask;
@protocol PFLForegroundSessionDelegate, PFLDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PFLForegroundSession.h"

@interface PFLBackgroundSession : NSObject <PFLForegroundSessionDelegate>



@property (retain, nonatomic) NSObject<PFLDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSCondition *readyCondition; // ivar: _readyCondition
@property (retain, nonatomic) PFLForegroundSession *session; // ivar: _session
@property (retain, nonatomic) BGTask *task; // ivar: _task


+(id)sharedInstance;
-(BOOL)resumeWithDataSource:(id)arg0 ;
-(BOOL)submitTaskRequestWithIdentifier:(id)arg0 andError:(*id)arg1 ;
-(id)init;
-(void)didCompleteAllTasks;
-(void)registerWithIdentifier:(id)arg0 ;


@end


#endif