// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAMUSICACTIVITY_H
#define PHAMUSICACTIVITY_H

@class NSString, PGManager, NSArray;
@protocol PHPhotoLibraryAvailabilityObserver, PHAActivity, OS_xpc_object, PHAActivityDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PHAMusicActivity : NSObject <PHPhotoLibraryAvailabilityObserver, PHAActivity>



@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<PHAActivityDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL doneRequested; // ivar: _doneRequested
@property (readonly, nonatomic) PGManager *graphManager; // ivar: _graphManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *musicJobs; // ivar: _musicJobs
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(void)unregister;
-(BOOL)haltIfNeeded;
-(BOOL)jobCanContinue;
-(id)init;
-(void)haltWithState:(NSInteger)arg0 ;
-(void)onDidScheduleAllJobs;
-(void)photoLibraryDidBecomeUnavailable:(id)arg0 ;
-(void)readShouldDefer:(*BOOL)arg0 doneRequested:(*BOOL)arg1 ;
-(void)registerActivityWithDelegate:(id)arg0 ;
-(void)scheduleNextJob;
-(void)startActivity;


@end


#endif