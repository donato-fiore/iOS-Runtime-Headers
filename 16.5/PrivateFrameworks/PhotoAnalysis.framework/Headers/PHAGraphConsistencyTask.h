// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHAGRAPHCONSISTENCYTASK_H
#define PHAGRAPHCONSISTENCYTASK_H

@class PGGraphUpdateManager, MAProgressReporter, NSString;
@protocol PHATask, PGGraphUpdateListener, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface PHAGraphConsistencyTask : NSObject <PHATask, PGGraphUpdateListener>

 {
    PGGraphUpdateManager *_updateManager;
    MAProgressReporter *_progressReporter;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CGFloat period;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger version;


-(BOOL)currentPlatformIsSupported;
-(BOOL)runWithGraphManager:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldRunWithGraphManager:(id)arg0 ;
-(void)graphUpdateDidStop;
-(void)graphUpdateIsConsistent;
-(void)graphUpdateMadeProgress:(CGFloat)arg0 ;
-(void)markTaskAsCompleted;


@end


#endif